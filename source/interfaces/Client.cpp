#include "Client.hpp"


#if defined(_stick_steam_emu_interface_client_)


#	include "../common.hpp"


namespace emu {


	void Client::RunFrame() {
		TRACE_FUNCTION_CALL();
	}

	void *Client::DEPRECATED_GetISteamUnifiedMessages(HSteamUser hSteamuser,
	                                                  HSteamPipe hSteamPipe,
	                                                  const char *pchVersion) {
		TRACE_FUNCTION_CALL();
		return nullptr;
	}

	void Client::DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess(void (*)()) {
		TRACE_FUNCTION_CALL();
	}
	void
	Client::DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess(void (*)()) {
		TRACE_FUNCTION_CALL();
	}
	void Client::Set_SteamAPI_CCheckCallbackRegisteredInProcess(
	    SteamAPI_CheckCallbackRegistered_t func) {
		TRACE_FUNCTION_CALL();
	}

	void Client::DestroyAllInterfaces() {
		TRACE_FUNCTION_CALL();
	}


	HSteamPipe Client::CreateSteamPipe() {
		TRACE_FUNCTION_CALL();
		return 0;
	}

	bool Client::BReleaseSteamPipe(HSteamPipe hSteamPipe) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	HSteamUser Client::ConnectToGlobalUser(HSteamPipe hSteamPipe) {
		TRACE_FUNCTION_CALL();
		return 0;
	}

	HSteamUser Client::CreateLocalUser(HSteamPipe *phSteamPipe,
	                                   EAccountType eAccountType) {
		TRACE_FUNCTION_CALL();
		return 0;
	}

	void Client::ReleaseUser(HSteamPipe hSteamPipe, HSteamUser hUser) {
		TRACE_FUNCTION_CALL();
	}

	ISteamUser *Client::GetISteamUser(HSteamUser hSteamUser,
	                                  HSteamPipe hSteamPipe,
	                                  const char *pchVersion) {
		TRACE_FUNCTION_CALL();
		return nullptr;
	}

	ISteamGameServer *Client::GetISteamGameServer(HSteamUser hSteamUser,
	                                              HSteamPipe hSteamPipe,
	                                              const char *pchVersion) {
		TRACE_FUNCTION_CALL();
		return nullptr;
	}

	void Client::SetLocalIPBinding(const SteamIPAddress_t &unIP,
	                               uint16 usPort) {
		TRACE_FUNCTION_CALL();
	}

	ISteamFriends *Client::GetISteamFriends(HSteamUser hSteamUser,
	                                        HSteamPipe hSteamPipe,
	                                        const char *pchVersion) {
		TRACE_FUNCTION_CALL();
		return nullptr;
	}

	ISteamUtils *Client::GetISteamUtils(HSteamPipe hSteamPipe,
	                                    const char *pchVersion) {
		TRACE_FUNCTION_CALL();
		return nullptr;
	}

	ISteamMatchmaking *Client::GetISteamMatchmaking(HSteamUser hSteamUser,
	                                                HSteamPipe hSteamPipe,
	                                                const char *pchVersion) {
		TRACE_FUNCTION_CALL();
		return nullptr;
	}

	ISteamMatchmakingServers *Client::GetISteamMatchmakingServers(
	    HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion) {
		TRACE_FUNCTION_CALL();
		return nullptr;
	}

	void *Client::GetISteamGenericInterface(HSteamUser hSteamUser,
	                                        HSteamPipe hSteamPipe,
	                                        const char *pchVersion) {
		TRACE_FUNCTION_CALL();
		return nullptr;
	}

	ISteamUserStats *Client::GetISteamUserStats(HSteamUser hSteamUser,
	                                            HSteamPipe hSteamPipe,
	                                            const char *pchVersion) {
		TRACE_FUNCTION_CALL();
		return nullptr;
	}

	ISteamGameServerStats *Client::GetISteamGameServerStats(
	    HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion) {
		TRACE_FUNCTION_CALL();
		return nullptr;
	}

	ISteamApps *Client::GetISteamApps(HSteamUser hSteamUser,
	                                  HSteamPipe hSteamPipe,
	                                  const char *pchVersion) {
		TRACE_FUNCTION_CALL();
		return nullptr;
	}

	ISteamNetworking *Client::GetISteamNetworking(HSteamUser hSteamUser,
	                                              HSteamPipe hSteamPipe,
	                                              const char *pchVersion) {
		TRACE_FUNCTION_CALL();
		return nullptr;
	}

	ISteamRemoteStorage *
	Client::GetISteamRemoteStorage(HSteamUser hSteamuser, HSteamPipe hSteamPipe,
	                               const char *pchVersion) {
		TRACE_FUNCTION_CALL();
		return nullptr;
	}

	ISteamScreenshots *Client::GetISteamScreenshots(HSteamUser hSteamuser,
	                                                HSteamPipe hSteamPipe,
	                                                const char *pchVersion) {
		TRACE_FUNCTION_CALL();
		return nullptr;
	}

	ISteamGameSearch *Client::GetISteamGameSearch(HSteamUser hSteamuser,
	                                              HSteamPipe hSteamPipe,
	                                              const char *pchVersion) {
		TRACE_FUNCTION_CALL();
		return nullptr;
	}


	uint32 Client::GetIPCCallCount() {
		TRACE_FUNCTION_CALL();
		return 0u;
	}

	void Client::SetWarningMessageHook(SteamAPIWarningMessageHook_t pFunction) {
		TRACE_FUNCTION_CALL();
	}

	bool Client::BShutdownIfAllPipesClosed() {
		TRACE_FUNCTION_CALL();
		return false;
	}

	ISteamHTTP *Client::GetISteamHTTP(HSteamUser hSteamuser,
	                                  HSteamPipe hSteamPipe,
	                                  const char *pchVersion) {
		TRACE_FUNCTION_CALL();
		return nullptr;
	}

	ISteamController *Client::GetISteamController(HSteamUser hSteamUser,
	                                              HSteamPipe hSteamPipe,
	                                              const char *pchVersion) {
		TRACE_FUNCTION_CALL();
		return nullptr;
	}

	ISteamUGC *Client::GetISteamUGC(HSteamUser hSteamUser,
	                                HSteamPipe hSteamPipe,
	                                const char *pchVersion) {
		TRACE_FUNCTION_CALL();
		return nullptr;
	}

	ISteamAppList *Client::GetISteamAppList(HSteamUser hSteamUser,
	                                        HSteamPipe hSteamPipe,
	                                        const char *pchVersion) {
		TRACE_FUNCTION_CALL();
		return nullptr;
	}

	ISteamMusic *Client::GetISteamMusic(HSteamUser hSteamuser,
	                                    HSteamPipe hSteamPipe,
	                                    const char *pchVersion) {
		TRACE_FUNCTION_CALL();
		return nullptr;
	}

	ISteamMusicRemote *Client::GetISteamMusicRemote(HSteamUser hSteamuser,
	                                                HSteamPipe hSteamPipe,
	                                                const char *pchVersion) {
		TRACE_FUNCTION_CALL();
		return nullptr;
	}

	ISteamHTMLSurface *Client::GetISteamHTMLSurface(HSteamUser hSteamuser,
	                                                HSteamPipe hSteamPipe,
	                                                const char *pchVersion) {
		TRACE_FUNCTION_CALL();
		return nullptr;
	}

	ISteamInventory *Client::GetISteamInventory(HSteamUser hSteamuser,
	                                            HSteamPipe hSteamPipe,
	                                            const char *pchVersion) {
		TRACE_FUNCTION_CALL();
		return nullptr;
	}

	ISteamVideo *Client::GetISteamVideo(HSteamUser hSteamuser,
	                                    HSteamPipe hSteamPipe,
	                                    const char *pchVersion) {
		TRACE_FUNCTION_CALL();
		return nullptr;
	}

	ISteamParentalSettings *Client::GetISteamParentalSettings(
	    HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion) {
		TRACE_FUNCTION_CALL();
		return nullptr;
	}

	ISteamInput *Client::GetISteamInput(HSteamUser hSteamUser,
	                                    HSteamPipe hSteamPipe,
	                                    const char *pchVersion) {
		TRACE_FUNCTION_CALL();
		return nullptr;
	}

	ISteamParties *Client::GetISteamParties(HSteamUser hSteamUser,
	                                        HSteamPipe hSteamPipe,
	                                        const char *pchVersion) {
		TRACE_FUNCTION_CALL();
		return nullptr;
	}

	ISteamRemotePlay *Client::GetISteamRemotePlay(HSteamUser hSteamUser,
	                                              HSteamPipe hSteamPipe,
	                                              const char *pchVersion) {
		TRACE_FUNCTION_CALL();
		return nullptr;
	}


}   // namespace emu


#endif   //_stick_steam_emu_interface_client_
