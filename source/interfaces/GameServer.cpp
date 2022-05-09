#include "GameServer.hpp"


#if defined(_stick_steam_emu_interface_game_server_)


#	include "../common.hpp"


namespace emu {


	bool GameServer::InitGameServer(uint32 unIP, uint16 usGamePort,
	                                uint16 usQueryPort, uint32 unFlags,
	                                AppId_t nGameAppId,
	                                const char *pchVersionString) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	void GameServer::SetMasterServerHeartbeatInterval_DEPRECATED(
	    int iHeartbeatInterval) {
		TRACE_FUNCTION_CALL();
	}
	void GameServer::ForceMasterServerHeartbeat_DEPRECATED() {
		TRACE_FUNCTION_CALL();
	}

	void GameServer::SetProduct(const char *pszProduct) {
		TRACE_FUNCTION_CALL();
	}

	void GameServer::SetGameDescription(const char *pszGameDescription) {
		TRACE_FUNCTION_CALL();
	}

	void GameServer::SetModDir(const char *pszModDir) {
		TRACE_FUNCTION_CALL();
	}

	void GameServer::SetDedicatedServer(bool bDedicated) {
		TRACE_FUNCTION_CALL();
	}


	void GameServer::LogOn(const char *pszToken) {
		TRACE_FUNCTION_CALL();
	}

	void GameServer::LogOnAnonymous() {
		TRACE_FUNCTION_CALL();
	}

	void GameServer::LogOff() {
		TRACE_FUNCTION_CALL();
	}

	bool GameServer::BLoggedOn() {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool GameServer::BSecure() {
		TRACE_FUNCTION_CALL();
		return false;
	}
	CSteamID GameServer::GetSteamID() {
		TRACE_FUNCTION_CALL();
		return {};
	}

	bool GameServer::WasRestartRequested() {
		TRACE_FUNCTION_CALL();
		return false;
	}


	void GameServer::SetMaxPlayerCount(int cPlayersMax) {
		TRACE_FUNCTION_CALL();
	}

	void GameServer::SetBotPlayerCount(int cBotplayers) {
		TRACE_FUNCTION_CALL();
	}

	void GameServer::SetServerName(const char *pszServerName) {
		TRACE_FUNCTION_CALL();
	}

	void GameServer::SetMapName(const char *pszMapName) {
		TRACE_FUNCTION_CALL();
	}

	void GameServer::SetPasswordProtected(bool bPasswordProtected) {
		TRACE_FUNCTION_CALL();
	}

	void GameServer::SetSpectatorPort(uint16 unSpectatorPort) {
		TRACE_FUNCTION_CALL();
	}

	void
	GameServer::SetSpectatorServerName(const char *pszSpectatorServerName) {
		TRACE_FUNCTION_CALL();
	}

	void GameServer::ClearAllKeyValues() {
		TRACE_FUNCTION_CALL();
	}

	void GameServer::SetKeyValue(const char *pKey, const char *pValue) {
		TRACE_FUNCTION_CALL();
	}

	void GameServer::SetGameTags(const char *pchGameTags) {
		TRACE_FUNCTION_CALL();
	}

	void GameServer::SetGameData(const char *pchGameData) {
		TRACE_FUNCTION_CALL();
	}

	void GameServer::SetRegion(const char *pszRegion) {
		TRACE_FUNCTION_CALL();
	}

	void GameServer::SetAdvertiseServerActive(bool bActive) {
		TRACE_FUNCTION_CALL();
	}


	HAuthTicket GameServer::GetAuthSessionTicket(void *pTicket, int cbMaxTicket,
	                                             uint32 *pcbTicket) {
		TRACE_FUNCTION_CALL();
		return 0u;
	}

	EBeginAuthSessionResult
	GameServer::BeginAuthSession(const void *pAuthTicket, int cbAuthTicket,
	                             CSteamID steamID) {
		TRACE_FUNCTION_CALL();
		return k_EBeginAuthSessionResultInvalidTicket;
	}

	void GameServer::EndAuthSession(CSteamID steamID) {
		TRACE_FUNCTION_CALL();
	}

	void GameServer::CancelAuthTicket(HAuthTicket hAuthTicket) {
		TRACE_FUNCTION_CALL();
	}
	EUserHasLicenseForAppResult
	GameServer::UserHasLicenseForApp(CSteamID steamID, AppId_t appID) {
		TRACE_FUNCTION_CALL();
		return k_EUserHasLicenseResultNoAuth;
	}

	bool GameServer::RequestUserGroupStatus(CSteamID steamIDUser,
	                                        CSteamID steamIDGroup) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	void GameServer::GetGameplayStats() {
		TRACE_FUNCTION_CALL();
	}
	SteamAPICall_t GameServer::GetServerReputation() {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}
	SteamIPAddress_t GameServer::GetPublicIP() {
		TRACE_FUNCTION_CALL();
		return {};
	}

	bool GameServer::HandleIncomingPacket(const void *pData, int cbData,
	                                      uint32 srcIP, uint16 srcPort) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	int GameServer::GetNextOutgoingPacket(void *pOut, int cbMaxOut,
	                                      uint32 *pNetAdr, uint16 *pPort) {
		TRACE_FUNCTION_CALL();
		return 0;
	}

	SteamAPICall_t GameServer::AssociateWithClan(CSteamID steamIDClan) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}

	SteamAPICall_t
	GameServer::ComputeNewPlayerCompatibility(CSteamID steamIDNewPlayer) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}

	bool GameServer::SendUserConnectAndAuthenticate_DEPRECATED(
	    uint32 unIPClient, const void *pvAuthBlob, uint32 cubAuthBlobSize,
	    CSteamID *pSteamIDUser) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	CSteamID GameServer::CreateUnauthenticatedUserConnection() {
		TRACE_FUNCTION_CALL();
		return {};
	}

	void GameServer::SendUserDisconnect_DEPRECATED(CSteamID steamIDUser) {
		TRACE_FUNCTION_CALL();
	}

	bool GameServer::BUpdateUserData(CSteamID steamIDUser,
	                                 const char *pchPlayerName, uint32 uScore) {
		TRACE_FUNCTION_CALL();
		return false;
	}



}   // namespace emu


#endif   //_stick_steam_emu_interface_game_server_
