#include "RemotePlay.hpp"


#if defined(_stick_steam_emu_interface_remote_play_)


#	include "../common.hpp"


namespace emu {


	uint32 RemotePlay::GetSessionCount() {
		TRACE_FUNCTION_CALL();
		return 0u;
	}

	RemotePlaySessionID_t RemotePlay::GetSessionID(int iSessionIndex) {
		TRACE_FUNCTION_CALL();
		return 0u;
	}

	CSteamID RemotePlay::GetSessionSteamID(RemotePlaySessionID_t unSessionID) {
		TRACE_FUNCTION_CALL();
		return {};
	}

	const char *
	RemotePlay::GetSessionClientName(RemotePlaySessionID_t unSessionID) {
		TRACE_FUNCTION_CALL();
		return nullptr;
	}

	ESteamDeviceFormFactor
	RemotePlay::GetSessionClientFormFactor(RemotePlaySessionID_t unSessionID) {
		TRACE_FUNCTION_CALL();
		return k_ESteamDeviceFormFactorUnknown;
	}

	bool
	RemotePlay::BGetSessionClientResolution(RemotePlaySessionID_t unSessionID,
	                                        int *pnResolutionX,
	                                        int *pnResolutionY) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool RemotePlay::BSendRemotePlayTogetherInvite(CSteamID steamIDFriend) {
		TRACE_FUNCTION_CALL();
		return false;
	}


}   // namespace emu


#endif   //_stick_steam_emu_interface_remote_play_
