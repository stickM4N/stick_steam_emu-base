#include <steamworks_sdk/steam_api.h>

#if defined(STEAM_API_H)


#	define EMU_LOG_FILENAME "stick-steam-emu.log"
#	define EMU_CONFIG_FILENAME "stick-steam-emu.json"


#	include <future>

#	include <simdjson.h>

#	include "common.hpp"


namespace emu {


	logger *log = nullptr;

	std::thread *config_reloader_thread = nullptr;
	std::promise<void> *terminate_signal = nullptr;

	const char *minidump_comment = nullptr;


}   // namespace emu


S_API bool S_CALLTYPE SteamAPI_Init() {
	emu::log = new emu::logger(EMU_LOG_FILENAME, emu::log_level::Trace);
	TRACE_FUNCTION_CALL();

	emu::terminate_signal = new std::promise<void>;

	try {
		simdjson::ondemand::parser parser;
		auto json_str = simdjson::padded_string::load(EMU_CONFIG_FILENAME);
		simdjson::ondemand::document config = parser.iterate(json_str);


		auto level = static_cast<uint8_t>(config["log_level"].get_uint64());
		auto lv = static_cast<emu::log_level>(level);

		if (not(level == 0u or level > 5u)
		    and lv != emu::log->get_minimum_log_level()) {
			emu::log->info("Switching to log level {:s}({:d}).",
			               emu::log_level_name(lv), level);
			emu::log->set_minimum_log_level(lv);
		}

		emu::config_reloader_thread = new std::thread([]() -> void {
			simdjson::ondemand::parser parser;
			auto last_found_log_level
			    = static_cast<uint8_t>(emu::log->get_minimum_log_level());

			std::future<void> future_signal
			    = emu::terminate_signal->get_future();
			while (future_signal.wait_for(std::chrono::seconds(1))
			       == std::future_status::timeout) {
				try {
					auto json_str
					    = simdjson::padded_string::load(EMU_CONFIG_FILENAME);
					simdjson::ondemand::document config
					    = parser.iterate(json_str);

					auto level = static_cast<uint8_t>(
					    config["log_level"].get_uint64());
					auto lv = static_cast<emu::log_level>(level);

					if (level == 0u or level > 5u) {
						if (level != last_found_log_level)
							emu::log->warn(
							    "Found invalid log level while updating "
							    "config with value: {:d}. No changes "
							    "will be taken.",
							    level);
					} else if (lv != emu::log->get_minimum_log_level()) {
						emu::log->info("Switching to log level {:s}.",
						               emu::log_level_name(lv));
						emu::log->set_minimum_log_level(lv);
					}

					last_found_log_level = level;
				} catch (simdjson::simdjson_error &e) {
					emu::log->warn("Failed to update config json with "
					               "error code {:d} and description: {:s}. "
					               "Suspending auto-update feature.",
					               e.error(), e.what());

					emu::terminate_signal->set_value();
				}
			}
		});

	} catch (simdjson::simdjson_error &e) {
		emu::log->critical("SteamAPI_Init failed to load config json with "
		                   "error code {:d} and description: {:s}.",
		                   e.error(), e.what());

		FILE *config_file = fopen(EMU_CONFIG_FILENAME, "w");
		fmt::print(config_file, R"({{ "log_level": 1 }})");
		fclose(config_file);

		emu::log->info("A new config json was generated.");
	}

	return true;
}

S_API void S_CALLTYPE SteamAPI_Shutdown() {
	TRACE_FUNCTION_CALL();

	emu::terminate_signal->set_value();

	if (emu::config_reloader_thread->joinable())
		emu::config_reloader_thread->join();

	delete emu::config_reloader_thread;
	delete emu::terminate_signal;

	delete emu::log;
}

S_API bool S_CALLTYPE SteamAPI_RestartAppIfNecessary(uint32 unOwnAppID) {
	TRACE_FUNCTION_CALL();
	return false;
}

S_API void S_CALLTYPE SteamAPI_ReleaseCurrentThreadMemory() {
	TRACE_FUNCTION_CALL();
}



S_API void S_CALLTYPE SteamAPI_WriteMiniDump(uint32 uStructuredExceptionCode,
                                             void *pvExceptionInfo,
                                             uint32 uBuildID) {
	TRACE_FUNCTION_CALL();
	emu::log->critical(
	    "Minidump generated with uStructuredExceptionCode: {:d}, "
	    "pvExceptionInfo: {:p}, uBuildID: {:d}. Minidump comment "
	    "was set to:\nCOMMENT BEGIN\n{:s}\nCOMMENT END",
	    uStructuredExceptionCode, pvExceptionInfo, uBuildID,
	    emu::minidump_comment);
}
S_API void S_CALLTYPE SteamAPI_SetMiniDumpComment(const char *pchMsg) {
	TRACE_FUNCTION_CALL();
	emu::minidump_comment = pchMsg;
}



S_API bool S_CALLTYPE SteamAPI_IsSteamRunning() {
	TRACE_FUNCTION_CALL();
	return true;
}

S_API const char *SteamAPI_GetSteamInstallPath() {
	TRACE_FUNCTION_CALL();
	return nullptr;
}

S_API void SteamAPI_SetTryCatchCallbacks(bool bTryCatchCallbacks) {
	TRACE_FUNCTION_CALL();
}

#	if defined(VERSION_SAFE_STEAM_API_INTERFACES)
S_API bool S_CALLTYPE SteamAPI_InitSafe() {
	TRACE_FUNCTION_CALL();
	return SteamAPI_Init();
}
#	endif

#	if defined(USE_BREAKPAD_HANDLER) || defined(STEAM_API_EXPORTS)
S_API void S_CALLTYPE SteamAPI_UseBreakpadCrashHandler(
    char const *pchVersion, char const *pchDate, char const *pchTime,
    bool bFullMemoryDumps, void *pvContext,
    PFNPreMinidumpCallback m_pfnPreMinidumpCallback) {
	TRACE_FUNCTION_CALL();
	m_pfnPreMinidumpCallback(pvContext);
}
S_API void S_CALLTYPE SteamAPI_SetBreakpadAppID(uint32 unAppID) {
	TRACE_FUNCTION_CALL();
}
#	endif

S_API void S_CALLTYPE SteamAPI_ManualDispatch_Init() {
	TRACE_FUNCTION_CALL();
}

S_API void S_CALLTYPE SteamAPI_ManualDispatch_RunFrame(HSteamPipe hSteamPipe) {
	TRACE_FUNCTION_CALL();
}

S_API bool S_CALLTYPE SteamAPI_ManualDispatch_GetNextCallback(
    HSteamPipe hSteamPipe, CallbackMsg_t *pCallbackMsg) {
	TRACE_FUNCTION_CALL();
	return false;
}


S_API void S_CALLTYPE
SteamAPI_ManualDispatch_FreeLastCallback(HSteamPipe hSteamPipe) {
	TRACE_FUNCTION_CALL();
}

S_API bool S_CALLTYPE SteamAPI_ManualDispatch_GetAPICallResult(
    HSteamPipe hSteamPipe, SteamAPICall_t hSteamAPICall, void *pCallback,
    int cubCallback, int iCallbackExpected, bool *pbFailed) {
	TRACE_FUNCTION_CALL();
	return false;
}


S_API void S_CALLTYPE SteamAPI_RunCallbacks() {
	TRACE_FUNCTION_CALL();
}

S_API void S_CALLTYPE SteamGameServer_RunCallbacks() {
	TRACE_FUNCTION_CALL();
}


#endif   // STEAM_API_H
