#if not defined(_stick_steam_emu_interface_game_server_)
#	define _stick_steam_emu_interface_game_server_


#	include <steamworks_sdk/isteamgameserver.h>


namespace emu {


	class GameServer final : public ISteamGameServer {

	protected:
		bool InitGameServer(uint32 unIP, uint16 usGamePort, uint16 usQueryPort,
		                    uint32 unFlags, AppId_t nGameAppId,
		                    const char *pchVersionString) override;

		void SetMasterServerHeartbeatInterval_DEPRECATED(
		    int iHeartbeatInterval) override;
		void ForceMasterServerHeartbeat_DEPRECATED() override;

	public:
		void SetProduct(const char *pszProduct) override;

		void SetGameDescription(const char *pszGameDescription) override;

		void SetModDir(const char *pszModDir) override;

		void SetDedicatedServer(bool bDedicated) override;


		void LogOn(const char *pszToken) override;

		void LogOnAnonymous() override;

		void LogOff() override;

		bool BLoggedOn() override;
		bool BSecure() override;
		CSteamID GetSteamID() override;

		bool WasRestartRequested() override;


		void SetMaxPlayerCount(int cPlayersMax) override;

		void SetBotPlayerCount(int cBotplayers) override;

		void SetServerName(const char *pszServerName) override;

		void SetMapName(const char *pszMapName) override;

		void SetPasswordProtected(bool bPasswordProtected) override;

		void SetSpectatorPort(uint16 unSpectatorPort) override;

		void
		SetSpectatorServerName(const char *pszSpectatorServerName) override;

		void ClearAllKeyValues() override;

		void SetKeyValue(const char *pKey, const char *pValue) override;

		void SetGameTags(const char *pchGameTags) override;

		void SetGameData(const char *pchGameData) override;

		void SetRegion(const char *pszRegion) override;

		void SetAdvertiseServerActive(bool bActive) override;


		HAuthTicket GetAuthSessionTicket(void *pTicket, int cbMaxTicket,
		                                 uint32 *pcbTicket) override;

		EBeginAuthSessionResult BeginAuthSession(const void *pAuthTicket,
		                                         int cbAuthTicket,
		                                         CSteamID steamID) override;

		void EndAuthSession(CSteamID steamID) override;

		void CancelAuthTicket(HAuthTicket hAuthTicket) override;

		EUserHasLicenseForAppResult
		UserHasLicenseForApp(CSteamID steamID, AppId_t appID) override;

		bool RequestUserGroupStatus(CSteamID steamIDUser,
		                            CSteamID steamIDGroup) override;


		void GetGameplayStats() override;
		STEAM_CALL_RESULT(GSReputation_t)
		SteamAPICall_t GetServerReputation() override;

		SteamIPAddress_t GetPublicIP() override;



		bool HandleIncomingPacket(const void *pData, int cbData, uint32 srcIP,
		                          uint16 srcPort) override;

		int GetNextOutgoingPacket(void *pOut, int cbMaxOut, uint32 *pNetAdr,
		                          uint16 *pPort) override;


		STEAM_CALL_RESULT(AssociateWithClanResult_t)
		SteamAPICall_t AssociateWithClan(CSteamID steamIDClan) override;

		STEAM_CALL_RESULT(ComputeNewPlayerCompatibilityResult_t)
		SteamAPICall_t
		ComputeNewPlayerCompatibility(CSteamID steamIDNewPlayer) override;



		bool SendUserConnectAndAuthenticate_DEPRECATED(
		    uint32 unIPClient, const void *pvAuthBlob, uint32 cubAuthBlobSize,
		    CSteamID *pSteamIDUser) override;

		CSteamID CreateUnauthenticatedUserConnection() override;

		void SendUserDisconnect_DEPRECATED(CSteamID steamIDUser) override;

		bool BUpdateUserData(CSteamID steamIDUser, const char *pchPlayerName,
		                     uint32 uScore) override;
	};


}   // namespace emu


#endif   //_stick_steam_emu_interface_game_server_
