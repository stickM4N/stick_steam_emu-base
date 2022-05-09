#if not defined(_stick_steam_emu_interface_client_)
#	define _stick_steam_emu_interface_client_


#	include <steamworks_sdk/isteamclient.h>


namespace emu {


	class Client final : public ISteamClient {

	protected:
		void RunFrame() override;

		void *
		DEPRECATED_GetISteamUnifiedMessages(HSteamUser hSteamuser,
		                                    HSteamPipe hSteamPipe,
		                                    const char *pchVersion) override;

		void
		DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess(void (*)()) override;
		void
		DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess(void (*)()) override;
		void Set_SteamAPI_CCheckCallbackRegisteredInProcess(
		    SteamAPI_CheckCallbackRegistered_t func) override;

		void DestroyAllInterfaces() override;

	public:
		HSteamPipe CreateSteamPipe() override;

		bool BReleaseSteamPipe(HSteamPipe hSteamPipe) override;

		HSteamUser ConnectToGlobalUser(HSteamPipe hSteamPipe) override;

		HSteamUser CreateLocalUser(HSteamPipe *phSteamPipe,
		                           EAccountType eAccountType) override;

		void ReleaseUser(HSteamPipe hSteamPipe, HSteamUser hUser) override;

		ISteamUser *GetISteamUser(HSteamUser hSteamUser, HSteamPipe hSteamPipe,
		                          const char *pchVersion) override;

		ISteamGameServer *GetISteamGameServer(HSteamUser hSteamUser,
		                                      HSteamPipe hSteamPipe,
		                                      const char *pchVersion) override;

		void SetLocalIPBinding(const SteamIPAddress_t &unIP,
		                       uint16 usPort) override;

		ISteamFriends *GetISteamFriends(HSteamUser hSteamUser,
		                                HSteamPipe hSteamPipe,
		                                const char *pchVersion) override;

		ISteamUtils *GetISteamUtils(HSteamPipe hSteamPipe,
		                            const char *pchVersion) override;

		ISteamMatchmaking *
		GetISteamMatchmaking(HSteamUser hSteamUser, HSteamPipe hSteamPipe,
		                     const char *pchVersion) override;

		ISteamMatchmakingServers *
		GetISteamMatchmakingServers(HSteamUser hSteamUser,
		                            HSteamPipe hSteamPipe,
		                            const char *pchVersion) override;

		void *GetISteamGenericInterface(HSteamUser hSteamUser,
		                                HSteamPipe hSteamPipe,
		                                const char *pchVersion) override;

		ISteamUserStats *GetISteamUserStats(HSteamUser hSteamUser,
		                                    HSteamPipe hSteamPipe,
		                                    const char *pchVersion) override;

		ISteamGameServerStats *
		GetISteamGameServerStats(HSteamUser hSteamuser, HSteamPipe hSteamPipe,
		                         const char *pchVersion) override;

		ISteamApps *GetISteamApps(HSteamUser hSteamUser, HSteamPipe hSteamPipe,
		                          const char *pchVersion) override;

		ISteamNetworking *GetISteamNetworking(HSteamUser hSteamUser,
		                                      HSteamPipe hSteamPipe,
		                                      const char *pchVersion) override;

		ISteamRemoteStorage *
		GetISteamRemoteStorage(HSteamUser hSteamuser, HSteamPipe hSteamPipe,
		                       const char *pchVersion) override;

		ISteamScreenshots *
		GetISteamScreenshots(HSteamUser hSteamuser, HSteamPipe hSteamPipe,
		                     const char *pchVersion) override;

		ISteamGameSearch *GetISteamGameSearch(HSteamUser hSteamuser,
		                                      HSteamPipe hSteamPipe,
		                                      const char *pchVersion) override;


		uint32 GetIPCCallCount() override;

		void
		SetWarningMessageHook(SteamAPIWarningMessageHook_t pFunction) override;

		bool BShutdownIfAllPipesClosed() override;

		ISteamHTTP *GetISteamHTTP(HSteamUser hSteamuser, HSteamPipe hSteamPipe,
		                          const char *pchVersion) override;


		ISteamController *GetISteamController(HSteamUser hSteamUser,
		                                      HSteamPipe hSteamPipe,
		                                      const char *pchVersion) override;

		ISteamUGC *GetISteamUGC(HSteamUser hSteamUser, HSteamPipe hSteamPipe,
		                        const char *pchVersion) override;

		ISteamAppList *GetISteamAppList(HSteamUser hSteamUser,
		                                HSteamPipe hSteamPipe,
		                                const char *pchVersion) override;

		ISteamMusic *GetISteamMusic(HSteamUser hSteamuser,
		                            HSteamPipe hSteamPipe,
		                            const char *pchVersion) override;

		ISteamMusicRemote *
		GetISteamMusicRemote(HSteamUser hSteamuser, HSteamPipe hSteamPipe,
		                     const char *pchVersion) override;

		ISteamHTMLSurface *
		GetISteamHTMLSurface(HSteamUser hSteamuser, HSteamPipe hSteamPipe,
		                     const char *pchVersion) override;


		ISteamInventory *GetISteamInventory(HSteamUser hSteamuser,
		                                    HSteamPipe hSteamPipe,
		                                    const char *pchVersion) override;

		ISteamVideo *GetISteamVideo(HSteamUser hSteamuser,
		                            HSteamPipe hSteamPipe,
		                            const char *pchVersion) override;

		ISteamParentalSettings *
		GetISteamParentalSettings(HSteamUser hSteamuser, HSteamPipe hSteamPipe,
		                          const char *pchVersion) override;

		ISteamInput *GetISteamInput(HSteamUser hSteamUser,
		                            HSteamPipe hSteamPipe,
		                            const char *pchVersion) override;

		ISteamParties *GetISteamParties(HSteamUser hSteamUser,
		                                HSteamPipe hSteamPipe,
		                                const char *pchVersion) override;

		ISteamRemotePlay *GetISteamRemotePlay(HSteamUser hSteamUser,
		                                      HSteamPipe hSteamPipe,
		                                      const char *pchVersion) override;
	};


}   // namespace emu


#endif   //_stick_steam_emu_interface_client_
