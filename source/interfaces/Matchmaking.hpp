#if not defined(_stick_steam_emu_interface_matchmaking_)
#	define _stick_steam_emu_interface_matchmaking_


#	include <steamworks_sdk/isteammatchmaking.h>


namespace emu {


	class Matchmaking final : public ISteamMatchmaking {

	public:
		int GetFavoriteGameCount() override;

		bool GetFavoriteGame(int iGame, AppId_t *pnAppID, uint32 *pnIP,
		                     uint16 *pnConnPort, uint16 *pnQueryPort,
		                     uint32 *punFlags,
		                     uint32 *pRTime32LastPlayedOnServer) override;

		int AddFavoriteGame(AppId_t nAppID, uint32 nIP, uint16 nConnPort,
		                    uint16 nQueryPort, uint32 unFlags,
		                    uint32 rTime32LastPlayedOnServer) override;

		bool RemoveFavoriteGame(AppId_t nAppID, uint32 nIP, uint16 nConnPort,
		                        uint16 nQueryPort, uint32 unFlags) override;


		STEAM_CALL_RESULT(LobbyMatchList_t)
		SteamAPICall_t RequestLobbyList() override;
		void AddRequestLobbyListStringFilter(
		    const char *pchKeyToMatch, const char *pchValueToMatch,
		    ELobbyComparison eComparisonType) override;
		void AddRequestLobbyListNumericalFilter(
		    const char *pchKeyToMatch, int nValueToMatch,
		    ELobbyComparison eComparisonType) override;
		void AddRequestLobbyListNearValueFilter(const char *pchKeyToMatch,
		                                        int nValueToBeCloseTo) override;
		void
		AddRequestLobbyListFilterSlotsAvailable(int nSlotsAvailable) override;
		void AddRequestLobbyListDistanceFilter(
		    ELobbyDistanceFilter eLobbyDistanceFilter) override;
		void AddRequestLobbyListResultCountFilter(int cMaxResults) override;

		void AddRequestLobbyListCompatibleMembersFilter(
		    CSteamID steamIDLobby) override;

		CSteamID GetLobbyByIndex(int iLobby) override;

		STEAM_CALL_RESULT(LobbyCreated_t)
		SteamAPICall_t CreateLobby(ELobbyType eLobbyType,
		                           int cMaxMembers) override;

		STEAM_CALL_RESULT(LobbyEnter_t)
		SteamAPICall_t JoinLobby(CSteamID steamIDLobby) override;

		void LeaveLobby(CSteamID steamIDLobby) override;

		bool InviteUserToLobby(CSteamID steamIDLobby,
		                       CSteamID steamIDInvitee) override;


		int GetNumLobbyMembers(CSteamID steamIDLobby) override;
		CSteamID GetLobbyMemberByIndex(CSteamID steamIDLobby,
		                               int iMember) override;

		const char *GetLobbyData(CSteamID steamIDLobby,
		                         const char *pchKey) override;
		bool SetLobbyData(CSteamID steamIDLobby, const char *pchKey,
		                  const char *pchValue) override;

		int GetLobbyDataCount(CSteamID steamIDLobby) override;

		bool GetLobbyDataByIndex(CSteamID steamIDLobby, int iLobbyData,
		                         char *pchKey, int cchKeyBufferSize,
		                         char *pchValue,
		                         int cchValueBufferSize) override;

		bool DeleteLobbyData(CSteamID steamIDLobby,
		                     const char *pchKey) override;

		const char *GetLobbyMemberData(CSteamID steamIDLobby,
		                               CSteamID steamIDUser,
		                               const char *pchKey) override;
		void SetLobbyMemberData(CSteamID steamIDLobby, const char *pchKey,
		                        const char *pchValue) override;

		bool SendLobbyChatMsg(CSteamID steamIDLobby, const void *pvMsgBody,
		                      int cubMsgBody) override;
		int GetLobbyChatEntry(CSteamID steamIDLobby, int iChatID,
		                      CSteamID *pSteamIDUser, void *pvData, int cubData,
		                      EChatEntryType *peChatEntryType) override;

		bool RequestLobbyData(CSteamID steamIDLobby) override;

		void SetLobbyGameServer(CSteamID steamIDLobby, uint32 unGameServerIP,
		                        uint16 unGameServerPort,
		                        CSteamID steamIDGameServer) override;
		bool GetLobbyGameServer(CSteamID steamIDLobby, uint32 *punGameServerIP,
		                        uint16 *punGameServerPort,
		                        CSteamID *psteamIDGameServer) override;

		bool SetLobbyMemberLimit(CSteamID steamIDLobby,
		                         int cMaxMembers) override;
		int GetLobbyMemberLimit(CSteamID steamIDLobby) override;

		bool SetLobbyType(CSteamID steamIDLobby,
		                  ELobbyType eLobbyType) override;

		bool SetLobbyJoinable(CSteamID steamIDLobby,
		                      bool bLobbyJoinable) override;

		CSteamID GetLobbyOwner(CSteamID steamIDLobby) override;

		bool SetLobbyOwner(CSteamID steamIDLobby,
		                   CSteamID steamIDNewOwner) override;

		bool SetLinkedLobby(CSteamID steamIDLobby,
		                    CSteamID steamIDLobbyDependent) override;
	};


	class MatchmakingServerListResponse final
	    : public ISteamMatchmakingServerListResponse {

	public:
		void ServerResponded(HServerListRequest hRequest, int iServer) override;

		void ServerFailedToRespond(HServerListRequest hRequest,
		                           int iServer) override;

		void RefreshComplete(HServerListRequest hRequest,
		                     EMatchMakingServerResponse response) override;
	};


	class MatchmakingPingResponse final : public ISteamMatchmakingPingResponse {

	public:
		void ServerResponded(gameserveritem_t &server) override;

		void ServerFailedToRespond() override;
	};


	class MatchmakingPlayersResponse final
	    : public ISteamMatchmakingPlayersResponse {

	public:
		void AddPlayerToList(const char *pchName, int nScore,
		                     float flTimePlayed) override;

		void PlayersFailedToRespond() override;

		void PlayersRefreshComplete() override;
	};


	class MatchmakingRulesResponse final
	    : public ISteamMatchmakingRulesResponse {

	public:
		void RulesResponded(const char *pchRule, const char *pchValue) override;

		void RulesFailedToRespond() override;

		void RulesRefreshComplete() override;
	};


	class MatchmakingServers final : public ISteamMatchmakingServers {

	public:
		HServerListRequest RequestInternetServerList(
		    AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters,
		    uint32 nFilters,
		    ISteamMatchmakingServerListResponse *pRequestServersResponse)
		    override;
		HServerListRequest
		RequestLANServerList(AppId_t iApp,
		                     ISteamMatchmakingServerListResponse
		                         *pRequestServersResponse) override;
		HServerListRequest RequestFriendsServerList(
		    AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters,
		    uint32 nFilters,
		    ISteamMatchmakingServerListResponse *pRequestServersResponse)
		    override;
		HServerListRequest RequestFavoritesServerList(
		    AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters,
		    uint32 nFilters,
		    ISteamMatchmakingServerListResponse *pRequestServersResponse)
		    override;
		HServerListRequest RequestHistoryServerList(
		    AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters,
		    uint32 nFilters,
		    ISteamMatchmakingServerListResponse *pRequestServersResponse)
		    override;
		HServerListRequest RequestSpectatorServerList(
		    AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters,
		    uint32 nFilters,
		    ISteamMatchmakingServerListResponse *pRequestServersResponse)
		    override;

		void ReleaseRequest(HServerListRequest hServerListRequest) override;

		gameserveritem_t *GetServerDetails(HServerListRequest hRequest,
		                                   int iServer) override;

		void CancelQuery(HServerListRequest hRequest) override;

		void RefreshQuery(HServerListRequest hRequest) override;

		bool IsRefreshing(HServerListRequest hRequest) override;

		int GetServerCount(HServerListRequest hRequest) override;

		void RefreshServer(HServerListRequest hRequest, int iServer) override;

		HServerQuery PingServer(
		    uint32 unIP, uint16 usPort,
		    ISteamMatchmakingPingResponse *pRequestServersResponse) override;

		HServerQuery PlayerDetails(
		    uint32 unIP, uint16 usPort,
		    ISteamMatchmakingPlayersResponse *pRequestServersResponse) override;

		HServerQuery ServerRules(
		    uint32 unIP, uint16 usPort,
		    ISteamMatchmakingRulesResponse *pRequestServersResponse) override;

		void CancelServerQuery(HServerQuery hServerQuery) override;
	};


	class GameSearch final : public ISteamGameSearch {

	public:
		EGameSearchErrorCode_t
		AddGameSearchParams(const char *pchKeyToFind,
		                    const char *pchValuesToFind) override;

		EGameSearchErrorCode_t SearchForGameWithLobby(CSteamID steamIDLobby,
		                                              int nPlayerMin,
		                                              int nPlayerMax) override;

		EGameSearchErrorCode_t SearchForGameSolo(int nPlayerMin,
		                                         int nPlayerMax) override;

		EGameSearchErrorCode_t AcceptGame() override;
		EGameSearchErrorCode_t DeclineGame() override;

		EGameSearchErrorCode_t
		RetrieveConnectionDetails(CSteamID steamIDHost,
		                          char *pchConnectionDetails,
		                          int cubConnectionDetails) override;

		EGameSearchErrorCode_t EndGameSearch() override;


		EGameSearchErrorCode_t SetGameHostParams(const char *pchKey,
		                                         const char *pchValue) override;

		EGameSearchErrorCode_t
		SetConnectionDetails(const char *pchConnectionDetails,
		                     int cubConnectionDetails) override;

		EGameSearchErrorCode_t RequestPlayersForGame(int nPlayerMin,
		                                             int nPlayerMax,
		                                             int nMaxTeamSize) override;

		EGameSearchErrorCode_t
		HostConfirmGameStart(uint64 ullUniqueGameID) override;

		EGameSearchErrorCode_t CancelRequestPlayersForGame() override;

		EGameSearchErrorCode_t
		SubmitPlayerResult(uint64 ullUniqueGameID, CSteamID steamIDPlayer,
		                   EPlayerResult_t EPlayerResult) override;

		EGameSearchErrorCode_t EndGame(uint64 ullUniqueGameID) override;
	};


	class Parties final : public ISteamParties {

	public:
		uint32 GetNumActiveBeacons() override;
		PartyBeaconID_t GetBeaconByIndex(uint32 unIndex) override;
		bool GetBeaconDetails(PartyBeaconID_t ulBeaconID,
		                      CSteamID *pSteamIDBeaconOwner,
		                      SteamPartyBeaconLocation_t *pLocation,
		                      char *pchMetadata, int cchMetadata) override;

		STEAM_CALL_RESULT(JoinPartyCallback_t)
		SteamAPICall_t JoinParty(PartyBeaconID_t ulBeaconID) override;


		bool GetNumAvailableBeaconLocations(uint32 *puNumLocations) override;
		bool
		GetAvailableBeaconLocations(SteamPartyBeaconLocation_t *pLocationList,
		                            uint32 uMaxNumLocations) override;

		STEAM_CALL_RESULT(CreateBeaconCallback_t)
		SteamAPICall_t CreateBeacon(uint32 unOpenSlots,
		                            SteamPartyBeaconLocation_t *pBeaconLocation,
		                            const char *pchConnectString,
		                            const char *pchMetadata) override;

		void OnReservationCompleted(PartyBeaconID_t ulBeacon,
		                            CSteamID steamIDUser) override;

		void CancelReservation(PartyBeaconID_t ulBeacon,
		                       CSteamID steamIDUser) override;

		STEAM_CALL_RESULT(ChangeNumOpenSlotsCallback_t)
		SteamAPICall_t ChangeNumOpenSlots(PartyBeaconID_t ulBeacon,
		                                  uint32 unOpenSlots) override;

		bool DestroyBeacon(PartyBeaconID_t ulBeacon) override;

		bool GetBeaconLocationData(SteamPartyBeaconLocation_t BeaconLocation,
		                           ESteamPartyBeaconLocationData eData,
		                           char *pchDataStringOut,
		                           int cchDataStringOut) override;
	};


}   // namespace emu


#endif   //_stick_steam_emu_interface_matchmaking_
