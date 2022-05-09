#include "Matchmaking.hpp"


#if defined(_stick_steam_emu_interface_matchmaking_)


#	include "../common.hpp"


namespace emu {


	int Matchmaking::GetFavoriteGameCount() {
		TRACE_FUNCTION_CALL();
		return 0;
	}

	bool Matchmaking::GetFavoriteGame(int iGame, AppId_t *pnAppID, uint32 *pnIP,
	                                  uint16 *pnConnPort, uint16 *pnQueryPort,
	                                  uint32 *punFlags,
	                                  uint32 *pRTime32LastPlayedOnServer) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	int Matchmaking::AddFavoriteGame(AppId_t nAppID, uint32 nIP,
	                                 uint16 nConnPort, uint16 nQueryPort,
	                                 uint32 unFlags,
	                                 uint32 rTime32LastPlayedOnServer) {
		TRACE_FUNCTION_CALL();
		return 0;
	}

	bool Matchmaking::RemoveFavoriteGame(AppId_t nAppID, uint32 nIP,
	                                     uint16 nConnPort, uint16 nQueryPort,
	                                     uint32 unFlags) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	SteamAPICall_t Matchmaking::RequestLobbyList() {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}

	void Matchmaking::AddRequestLobbyListStringFilter(
	    const char *pchKeyToMatch, const char *pchValueToMatch,
	    ELobbyComparison eComparisonType) {
		TRACE_FUNCTION_CALL();
	}

	void Matchmaking::AddRequestLobbyListNumericalFilter(
	    const char *pchKeyToMatch, int nValueToMatch,
	    ELobbyComparison eComparisonType) {
		TRACE_FUNCTION_CALL();
	}

	void
	Matchmaking::AddRequestLobbyListNearValueFilter(const char *pchKeyToMatch,
	                                                int nValueToBeCloseTo) {
		TRACE_FUNCTION_CALL();
	}

	void
	Matchmaking::AddRequestLobbyListFilterSlotsAvailable(int nSlotsAvailable) {

	}

	void Matchmaking::AddRequestLobbyListDistanceFilter(
	    ELobbyDistanceFilter eLobbyDistanceFilter) {
		TRACE_FUNCTION_CALL();
	}

	void Matchmaking::AddRequestLobbyListResultCountFilter(int cMaxResults) {
		TRACE_FUNCTION_CALL();
	}

	void Matchmaking::AddRequestLobbyListCompatibleMembersFilter(
	    CSteamID steamIDLobby) {
		TRACE_FUNCTION_CALL();
	}

	CSteamID Matchmaking::GetLobbyByIndex(int iLobby) {
		TRACE_FUNCTION_CALL();
		return {};
	}

	SteamAPICall_t Matchmaking::CreateLobby(ELobbyType eLobbyType,
	                                        int cMaxMembers) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}

	SteamAPICall_t Matchmaking::JoinLobby(CSteamID steamIDLobby) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}

	void Matchmaking::LeaveLobby(CSteamID steamIDLobby) {
		TRACE_FUNCTION_CALL();
	}

	bool Matchmaking::InviteUserToLobby(CSteamID steamIDLobby,
	                                    CSteamID steamIDInvitee) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	int Matchmaking::GetNumLobbyMembers(CSteamID steamIDLobby) {
		TRACE_FUNCTION_CALL();
		return 0;
	}

	CSteamID Matchmaking::GetLobbyMemberByIndex(CSteamID steamIDLobby,
	                                            int iMember) {
		TRACE_FUNCTION_CALL();
		return {};
	}

	const char *Matchmaking::GetLobbyData(CSteamID steamIDLobby,
	                                      const char *pchKey) {
		TRACE_FUNCTION_CALL();
		return nullptr;
	}

	bool Matchmaking::SetLobbyData(CSteamID steamIDLobby, const char *pchKey,
	                               const char *pchValue) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	int Matchmaking::GetLobbyDataCount(CSteamID steamIDLobby) {
		TRACE_FUNCTION_CALL();
		return 0;
	}

	bool Matchmaking::GetLobbyDataByIndex(CSteamID steamIDLobby, int iLobbyData,
	                                      char *pchKey, int cchKeyBufferSize,
	                                      char *pchValue,
	                                      int cchValueBufferSize) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool Matchmaking::DeleteLobbyData(CSteamID steamIDLobby,
	                                  const char *pchKey) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	const char *Matchmaking::GetLobbyMemberData(CSteamID steamIDLobby,
	                                            CSteamID steamIDUser,
	                                            const char *pchKey) {
		TRACE_FUNCTION_CALL();
		return nullptr;
	}

	void Matchmaking::SetLobbyMemberData(CSteamID steamIDLobby,
	                                     const char *pchKey,
	                                     const char *pchValue) {
		TRACE_FUNCTION_CALL();
	}

	bool Matchmaking::SendLobbyChatMsg(CSteamID steamIDLobby,
	                                   const void *pvMsgBody, int cubMsgBody) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	int Matchmaking::GetLobbyChatEntry(CSteamID steamIDLobby, int iChatID,
	                                   CSteamID *pSteamIDUser, void *pvData,
	                                   int cubData,
	                                   EChatEntryType *peChatEntryType) {
		TRACE_FUNCTION_CALL();
		return 0;
	}

	bool Matchmaking::RequestLobbyData(CSteamID steamIDLobby) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	void Matchmaking::SetLobbyGameServer(CSteamID steamIDLobby,
	                                     uint32 unGameServerIP,
	                                     uint16 unGameServerPort,
	                                     CSteamID steamIDGameServer) {
		TRACE_FUNCTION_CALL();
	}

	bool Matchmaking::GetLobbyGameServer(CSteamID steamIDLobby,
	                                     uint32 *punGameServerIP,
	                                     uint16 *punGameServerPort,
	                                     CSteamID *psteamIDGameServer) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool Matchmaking::SetLobbyMemberLimit(CSteamID steamIDLobby,
	                                      int cMaxMembers) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	int Matchmaking::GetLobbyMemberLimit(CSteamID steamIDLobby) {
		TRACE_FUNCTION_CALL();
		return 0;
	}

	bool Matchmaking::SetLobbyType(CSteamID steamIDLobby,
	                               ELobbyType eLobbyType) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool Matchmaking::SetLobbyJoinable(CSteamID steamIDLobby,
	                                   bool bLobbyJoinable) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	CSteamID Matchmaking::GetLobbyOwner(CSteamID steamIDLobby) {
		TRACE_FUNCTION_CALL();
		return {};
	}

	bool Matchmaking::SetLobbyOwner(CSteamID steamIDLobby,
	                                CSteamID steamIDNewOwner) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool Matchmaking::SetLinkedLobby(CSteamID steamIDLobby,
	                                 CSteamID steamIDLobbyDependent) {
		TRACE_FUNCTION_CALL();
		return false;
	}


	void
	MatchmakingServerListResponse::ServerResponded(HServerListRequest hRequest,
	                                               int iServer) {
		TRACE_FUNCTION_CALL();
	}

	void MatchmakingServerListResponse::ServerFailedToRespond(
	    HServerListRequest hRequest, int iServer) {
		TRACE_FUNCTION_CALL();
	}

	void MatchmakingServerListResponse::RefreshComplete(
	    HServerListRequest hRequest, EMatchMakingServerResponse response) {
		TRACE_FUNCTION_CALL();
	}


	void MatchmakingPingResponse::ServerResponded(gameserveritem_t &server) {
		TRACE_FUNCTION_CALL();
	}

	void MatchmakingPingResponse::ServerFailedToRespond() {
		TRACE_FUNCTION_CALL();
	}


	void MatchmakingPlayersResponse::AddPlayerToList(const char *pchName,
	                                                 int nScore,
	                                                 float flTimePlayed) {
		TRACE_FUNCTION_CALL();
	}

	void MatchmakingPlayersResponse::PlayersFailedToRespond() {
		TRACE_FUNCTION_CALL();
	}

	void MatchmakingPlayersResponse::PlayersRefreshComplete() {
		TRACE_FUNCTION_CALL();
	}


	void MatchmakingRulesResponse::RulesResponded(const char *pchRule,
	                                              const char *pchValue) {
		TRACE_FUNCTION_CALL();
	}

	void MatchmakingRulesResponse::RulesFailedToRespond() {
		TRACE_FUNCTION_CALL();
	}

	void MatchmakingRulesResponse::RulesRefreshComplete() {
		TRACE_FUNCTION_CALL();
	}


	HServerListRequest MatchmakingServers::RequestInternetServerList(
	    AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters,
	    ISteamMatchmakingServerListResponse *pRequestServersResponse) {
		TRACE_FUNCTION_CALL();
		return nullptr;
	}

	HServerListRequest MatchmakingServers::RequestLANServerList(
	    AppId_t iApp,
	    ISteamMatchmakingServerListResponse *pRequestServersResponse) {
		TRACE_FUNCTION_CALL();
		return nullptr;
	}

	HServerListRequest MatchmakingServers::RequestFriendsServerList(
	    AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters,
	    ISteamMatchmakingServerListResponse *pRequestServersResponse) {
		TRACE_FUNCTION_CALL();
		return nullptr;
	}

	HServerListRequest MatchmakingServers::RequestFavoritesServerList(
	    AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters,
	    ISteamMatchmakingServerListResponse *pRequestServersResponse) {
		TRACE_FUNCTION_CALL();
		return nullptr;
	}

	HServerListRequest MatchmakingServers::RequestHistoryServerList(
	    AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters,
	    ISteamMatchmakingServerListResponse *pRequestServersResponse) {
		TRACE_FUNCTION_CALL();
		return nullptr;
	}

	HServerListRequest MatchmakingServers::RequestSpectatorServerList(
	    AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters,
	    ISteamMatchmakingServerListResponse *pRequestServersResponse) {
		TRACE_FUNCTION_CALL();
		return nullptr;
	}

	void
	MatchmakingServers::ReleaseRequest(HServerListRequest hServerListRequest) {

	}

	gameserveritem_t *
	MatchmakingServers::GetServerDetails(HServerListRequest hRequest,
	                                     int iServer) {
		TRACE_FUNCTION_CALL();
		return nullptr;
	}

	void MatchmakingServers::CancelQuery(HServerListRequest hRequest) {
		TRACE_FUNCTION_CALL();
	}

	void MatchmakingServers::RefreshQuery(HServerListRequest hRequest) {
		TRACE_FUNCTION_CALL();
	}

	bool MatchmakingServers::IsRefreshing(HServerListRequest hRequest) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	int MatchmakingServers::GetServerCount(HServerListRequest hRequest) {
		TRACE_FUNCTION_CALL();
		return 0;
	}

	void MatchmakingServers::RefreshServer(HServerListRequest hRequest,
	                                       int iServer) {
		TRACE_FUNCTION_CALL();
	}

	HServerQuery MatchmakingServers::PingServer(
	    uint32 unIP, uint16 usPort,
	    ISteamMatchmakingPingResponse *pRequestServersResponse) {
		TRACE_FUNCTION_CALL();
		return 0;
	}

	HServerQuery MatchmakingServers::PlayerDetails(
	    uint32 unIP, uint16 usPort,
	    ISteamMatchmakingPlayersResponse *pRequestServersResponse) {
		TRACE_FUNCTION_CALL();
		return 0;
	}

	HServerQuery MatchmakingServers::ServerRules(
	    uint32 unIP, uint16 usPort,
	    ISteamMatchmakingRulesResponse *pRequestServersResponse) {
		TRACE_FUNCTION_CALL();
		return 0;
	}

	void MatchmakingServers::CancelServerQuery(HServerQuery hServerQuery) {
		TRACE_FUNCTION_CALL();
	}


	EGameSearchErrorCode_t
	GameSearch::AddGameSearchParams(const char *pchKeyToFind,
	                                const char *pchValuesToFind) {
		TRACE_FUNCTION_CALL();
		return k_EGameSearchErrorCode_Failed_Unknown_Error;
	}

	EGameSearchErrorCode_t
	GameSearch::SearchForGameWithLobby(CSteamID steamIDLobby, int nPlayerMin,
	                                   int nPlayerMax) {
		TRACE_FUNCTION_CALL();
		return k_EGameSearchErrorCode_Failed_Unknown_Error;
	}

	EGameSearchErrorCode_t GameSearch::SearchForGameSolo(int nPlayerMin,
	                                                     int nPlayerMax) {
		TRACE_FUNCTION_CALL();
		return k_EGameSearchErrorCode_Failed_Unknown_Error;
	}

	EGameSearchErrorCode_t GameSearch::AcceptGame() {
		TRACE_FUNCTION_CALL();
		return k_EGameSearchErrorCode_Failed_Unknown_Error;
	}

	EGameSearchErrorCode_t GameSearch::DeclineGame() {
		TRACE_FUNCTION_CALL();
		return k_EGameSearchErrorCode_Failed_Unknown_Error;
	}

	EGameSearchErrorCode_t
	GameSearch::RetrieveConnectionDetails(CSteamID steamIDHost,
	                                      char *pchConnectionDetails,
	                                      int cubConnectionDetails) {
		TRACE_FUNCTION_CALL();
		return k_EGameSearchErrorCode_Failed_Unknown_Error;
	}

	EGameSearchErrorCode_t GameSearch::EndGameSearch() {
		TRACE_FUNCTION_CALL();
		return k_EGameSearchErrorCode_Failed_Unknown_Error;
	}

	EGameSearchErrorCode_t GameSearch::SetGameHostParams(const char *pchKey,
	                                                     const char *pchValue) {
		TRACE_FUNCTION_CALL();
		return k_EGameSearchErrorCode_Failed_Unknown_Error;
	}

	EGameSearchErrorCode_t
	GameSearch::SetConnectionDetails(const char *pchConnectionDetails,
	                                 int cubConnectionDetails) {
		TRACE_FUNCTION_CALL();
		return k_EGameSearchErrorCode_Failed_Unknown_Error;
	}

	EGameSearchErrorCode_t GameSearch::RequestPlayersForGame(int nPlayerMin,
	                                                         int nPlayerMax,
	                                                         int nMaxTeamSize) {
		TRACE_FUNCTION_CALL();
		return k_EGameSearchErrorCode_Failed_Unknown_Error;
	}

	EGameSearchErrorCode_t
	GameSearch::HostConfirmGameStart(uint64 ullUniqueGameID) {
		TRACE_FUNCTION_CALL();
		return k_EGameSearchErrorCode_Failed_Unknown_Error;
	}

	EGameSearchErrorCode_t GameSearch::CancelRequestPlayersForGame() {
		TRACE_FUNCTION_CALL();
		return k_EGameSearchErrorCode_Failed_Unknown_Error;
	}

	EGameSearchErrorCode_t
	GameSearch::SubmitPlayerResult(uint64 ullUniqueGameID,
	                               CSteamID steamIDPlayer,
	                               EPlayerResult_t EPlayerResult) {
		TRACE_FUNCTION_CALL();
		return k_EGameSearchErrorCode_Failed_Unknown_Error;
	}

	EGameSearchErrorCode_t GameSearch::EndGame(uint64 ullUniqueGameID) {
		TRACE_FUNCTION_CALL();
		return k_EGameSearchErrorCode_Failed_Unknown_Error;
	}


	uint32 Parties::GetNumActiveBeacons() {
		TRACE_FUNCTION_CALL();
		return 0u;
	}

	PartyBeaconID_t Parties::GetBeaconByIndex(uint32 unIndex) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}

	bool Parties::GetBeaconDetails(PartyBeaconID_t ulBeaconID,
	                               CSteamID *pSteamIDBeaconOwner,
	                               SteamPartyBeaconLocation_t *pLocation,
	                               char *pchMetadata, int cchMetadata) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	SteamAPICall_t Parties::JoinParty(PartyBeaconID_t ulBeaconID) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}

	bool Parties::GetNumAvailableBeaconLocations(uint32 *puNumLocations) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool Parties::GetAvailableBeaconLocations(
	    SteamPartyBeaconLocation_t *pLocationList, uint32 uMaxNumLocations) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	SteamAPICall_t Parties::CreateBeacon(
	    uint32 unOpenSlots, SteamPartyBeaconLocation_t *pBeaconLocation,
	    const char *pchConnectString, const char *pchMetadata) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}

	void Parties::OnReservationCompleted(PartyBeaconID_t ulBeacon,
	                                     CSteamID steamIDUser) {
		TRACE_FUNCTION_CALL();
	}

	void Parties::CancelReservation(PartyBeaconID_t ulBeacon,
	                                CSteamID steamIDUser) {
		TRACE_FUNCTION_CALL();
	}

	SteamAPICall_t Parties::ChangeNumOpenSlots(PartyBeaconID_t ulBeacon,
	                                           uint32 unOpenSlots) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}

	bool Parties::DestroyBeacon(PartyBeaconID_t ulBeacon) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool
	Parties::GetBeaconLocationData(SteamPartyBeaconLocation_t BeaconLocation,
	                               ESteamPartyBeaconLocationData eData,
	                               char *pchDataStringOut,
	                               int cchDataStringOut) {
		TRACE_FUNCTION_CALL();
		return false;
	}


}   // namespace emu


#endif   //_stick_steam_emu_interface_matchmaking_
