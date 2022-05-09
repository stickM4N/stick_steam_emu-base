#include <steamworks_sdk/steam_api_flat.h>


#if defined(STEAMAPIFLAT_H)


#	include "common.hpp"


S_API HSteamPipe SteamAPI_ISteamClient_CreateSteamPipe(ISteamClient *self) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API bool SteamAPI_ISteamClient_BReleaseSteamPipe(ISteamClient *self,
                                                   HSteamPipe hSteamPipe) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API HSteamUser SteamAPI_ISteamClient_ConnectToGlobalUser(
    ISteamClient *self, HSteamPipe hSteamPipe) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API HSteamUser SteamAPI_ISteamClient_CreateLocalUser(
    ISteamClient *self, HSteamPipe *phSteamPipe, EAccountType eAccountType) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API void SteamAPI_ISteamClient_ReleaseUser(ISteamClient *self,
                                             HSteamPipe hSteamPipe,
                                             HSteamUser hUser) {
	TRACE_FUNCTION_CALL();
}
S_API ISteamUser *SteamAPI_ISteamClient_GetISteamUser(ISteamClient *self,
                                                      HSteamUser hSteamUser,
                                                      HSteamPipe hSteamPipe,
                                                      const char *pchVersion) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API ISteamGameServer *SteamAPI_ISteamClient_GetISteamGameServer(
    ISteamClient *self, HSteamUser hSteamUser, HSteamPipe hSteamPipe,
    const char *pchVersion) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API void SteamAPI_ISteamClient_SetLocalIPBinding(ISteamClient *self,
                                                   const SteamIPAddress_t &unIP,
                                                   uint16 usPort) {
	TRACE_FUNCTION_CALL();
}
S_API ISteamFriends *SteamAPI_ISteamClient_GetISteamFriends(
    ISteamClient *self, HSteamUser hSteamUser, HSteamPipe hSteamPipe,
    const char *pchVersion) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API ISteamUtils *
SteamAPI_ISteamClient_GetISteamUtils(ISteamClient *self, HSteamPipe hSteamPipe,
                                     const char *pchVersion) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API ISteamMatchmaking *SteamAPI_ISteamClient_GetISteamMatchmaking(
    ISteamClient *self, HSteamUser hSteamUser, HSteamPipe hSteamPipe,
    const char *pchVersion) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API ISteamMatchmakingServers *
SteamAPI_ISteamClient_GetISteamMatchmakingServers(ISteamClient *self,
                                                  HSteamUser hSteamUser,
                                                  HSteamPipe hSteamPipe,
                                                  const char *pchVersion) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API void *SteamAPI_ISteamClient_GetISteamGenericInterface(
    ISteamClient *self, HSteamUser hSteamUser, HSteamPipe hSteamPipe,
    const char *pchVersion) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API ISteamUserStats *SteamAPI_ISteamClient_GetISteamUserStats(
    ISteamClient *self, HSteamUser hSteamUser, HSteamPipe hSteamPipe,
    const char *pchVersion) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API ISteamGameServerStats *SteamAPI_ISteamClient_GetISteamGameServerStats(
    ISteamClient *self, HSteamUser hSteamuser, HSteamPipe hSteamPipe,
    const char *pchVersion) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API ISteamApps *SteamAPI_ISteamClient_GetISteamApps(ISteamClient *self,
                                                      HSteamUser hSteamUser,
                                                      HSteamPipe hSteamPipe,
                                                      const char *pchVersion) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API ISteamNetworking *SteamAPI_ISteamClient_GetISteamNetworking(
    ISteamClient *self, HSteamUser hSteamUser, HSteamPipe hSteamPipe,
    const char *pchVersion) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API ISteamRemoteStorage *SteamAPI_ISteamClient_GetISteamRemoteStorage(
    ISteamClient *self, HSteamUser hSteamuser, HSteamPipe hSteamPipe,
    const char *pchVersion) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API ISteamScreenshots *SteamAPI_ISteamClient_GetISteamScreenshots(
    ISteamClient *self, HSteamUser hSteamuser, HSteamPipe hSteamPipe,
    const char *pchVersion) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API ISteamGameSearch *SteamAPI_ISteamClient_GetISteamGameSearch(
    ISteamClient *self, HSteamUser hSteamuser, HSteamPipe hSteamPipe,
    const char *pchVersion) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API uint32 SteamAPI_ISteamClient_GetIPCCallCount(ISteamClient *self) {
	TRACE_FUNCTION_CALL();
	return 0u;
}
S_API void SteamAPI_ISteamClient_SetWarningMessageHook(
    ISteamClient *self, SteamAPIWarningMessageHook_t pFunction) {
	TRACE_FUNCTION_CALL();
}
S_API bool SteamAPI_ISteamClient_BShutdownIfAllPipesClosed(ISteamClient *self) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API ISteamHTTP *SteamAPI_ISteamClient_GetISteamHTTP(ISteamClient *self,
                                                      HSteamUser hSteamuser,
                                                      HSteamPipe hSteamPipe,
                                                      const char *pchVersion) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API ISteamController *SteamAPI_ISteamClient_GetISteamController(
    ISteamClient *self, HSteamUser hSteamUser, HSteamPipe hSteamPipe,
    const char *pchVersion) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API ISteamUGC *SteamAPI_ISteamClient_GetISteamUGC(ISteamClient *self,
                                                    HSteamUser hSteamUser,
                                                    HSteamPipe hSteamPipe,
                                                    const char *pchVersion) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API ISteamAppList *SteamAPI_ISteamClient_GetISteamAppList(
    ISteamClient *self, HSteamUser hSteamUser, HSteamPipe hSteamPipe,
    const char *pchVersion) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API ISteamMusic *
SteamAPI_ISteamClient_GetISteamMusic(ISteamClient *self, HSteamUser hSteamuser,
                                     HSteamPipe hSteamPipe,
                                     const char *pchVersion) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API ISteamMusicRemote *SteamAPI_ISteamClient_GetISteamMusicRemote(
    ISteamClient *self, HSteamUser hSteamuser, HSteamPipe hSteamPipe,
    const char *pchVersion) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API ISteamHTMLSurface *SteamAPI_ISteamClient_GetISteamHTMLSurface(
    ISteamClient *self, HSteamUser hSteamuser, HSteamPipe hSteamPipe,
    const char *pchVersion) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API ISteamInventory *SteamAPI_ISteamClient_GetISteamInventory(
    ISteamClient *self, HSteamUser hSteamuser, HSteamPipe hSteamPipe,
    const char *pchVersion) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API ISteamVideo *
SteamAPI_ISteamClient_GetISteamVideo(ISteamClient *self, HSteamUser hSteamuser,
                                     HSteamPipe hSteamPipe,
                                     const char *pchVersion) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API ISteamParentalSettings *SteamAPI_ISteamClient_GetISteamParentalSettings(
    ISteamClient *self, HSteamUser hSteamuser, HSteamPipe hSteamPipe,
    const char *pchVersion) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API ISteamInput *
SteamAPI_ISteamClient_GetISteamInput(ISteamClient *self, HSteamUser hSteamUser,
                                     HSteamPipe hSteamPipe,
                                     const char *pchVersion) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API ISteamParties *SteamAPI_ISteamClient_GetISteamParties(
    ISteamClient *self, HSteamUser hSteamUser, HSteamPipe hSteamPipe,
    const char *pchVersion) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API ISteamRemotePlay *SteamAPI_ISteamClient_GetISteamRemotePlay(
    ISteamClient *self, HSteamUser hSteamUser, HSteamPipe hSteamPipe,
    const char *pchVersion) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}


S_API ISteamUser *SteamAPI_SteamUser_v021() {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API HSteamUser SteamAPI_ISteamUser_GetHSteamUser(ISteamUser *self) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API bool SteamAPI_ISteamUser_BLoggedOn(ISteamUser *self) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API uint64_steamid SteamAPI_ISteamUser_GetSteamID(ISteamUser *self) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API int SteamAPI_ISteamUser_InitiateGameConnection_DEPRECATED(
    ISteamUser *self, void *pAuthBlob, int cbMaxAuthBlob,
    uint64_steamid steamIDGameServer, uint32 unIPServer, uint16 usPortServer,
    bool bSecure) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API void SteamAPI_ISteamUser_TerminateGameConnection_DEPRECATED(
    ISteamUser *self, uint32 unIPServer, uint16 usPortServer) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamUser_TrackAppUsageEvent(ISteamUser *self,
                                                  uint64_gameid gameID,
                                                  int eAppUsageEvent,
                                                  const char *pchExtraInfo) {
	TRACE_FUNCTION_CALL();
}
S_API bool SteamAPI_ISteamUser_GetUserDataFolder(ISteamUser *self,
                                                 char *pchBuffer,
                                                 int cubBuffer) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API void SteamAPI_ISteamUser_StartVoiceRecording(ISteamUser *self) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamUser_StopVoiceRecording(ISteamUser *self) {
	TRACE_FUNCTION_CALL();
}
S_API EVoiceResult SteamAPI_ISteamUser_GetAvailableVoice(
    ISteamUser *self, uint32 *pcbCompressed, uint32 *pcbUncompressed_Deprecated,
    uint32 nUncompressedVoiceDesiredSampleRate_Deprecated) {
	TRACE_FUNCTION_CALL();
	return k_EVoiceResultNotInitialized;
}
S_API EVoiceResult SteamAPI_ISteamUser_GetVoice(
    ISteamUser *self, bool bWantCompressed, void *pDestBuffer,
    uint32 cbDestBufferSize, uint32 *nBytesWritten,
    bool bWantUncompressed_Deprecated, void *pUncompressedDestBuffer_Deprecated,
    uint32 cbUncompressedDestBufferSize_Deprecated,
    uint32 *nUncompressBytesWritten_Deprecated,
    uint32 nUncompressedVoiceDesiredSampleRate_Deprecated) {
	TRACE_FUNCTION_CALL();
	return k_EVoiceResultNotInitialized;
}
S_API EVoiceResult SteamAPI_ISteamUser_DecompressVoice(
    ISteamUser *self, const void *pCompressed, uint32 cbCompressed,
    void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten,
    uint32 nDesiredSampleRate) {
	TRACE_FUNCTION_CALL();
	return k_EVoiceResultNotInitialized;
}
S_API uint32 SteamAPI_ISteamUser_GetVoiceOptimalSampleRate(ISteamUser *self) {
	TRACE_FUNCTION_CALL();
	return 0u;
}
S_API HAuthTicket SteamAPI_ISteamUser_GetAuthSessionTicket(ISteamUser *self,
                                                           void *pTicket,
                                                           int cbMaxTicket,
                                                           uint32 *pcbTicket) {
	TRACE_FUNCTION_CALL();
	return 0u;
}
S_API EBeginAuthSessionResult
SteamAPI_ISteamUser_BeginAuthSession(ISteamUser *self, const void *pAuthTicket,
                                     int cbAuthTicket, uint64_steamid steamID) {
	TRACE_FUNCTION_CALL();
	return k_EBeginAuthSessionResultInvalidTicket;
}
S_API void SteamAPI_ISteamUser_EndAuthSession(ISteamUser *self,
                                              uint64_steamid steamID) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamUser_CancelAuthTicket(ISteamUser *self,
                                                HAuthTicket hAuthTicket) {
	TRACE_FUNCTION_CALL();
}
S_API EUserHasLicenseForAppResult SteamAPI_ISteamUser_UserHasLicenseForApp(
    ISteamUser *self, uint64_steamid steamID, AppId_t appID) {
	TRACE_FUNCTION_CALL();
	return k_EUserHasLicenseResultNoAuth;
}
S_API bool SteamAPI_ISteamUser_BIsBehindNAT(ISteamUser *self) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API void SteamAPI_ISteamUser_AdvertiseGame(ISteamUser *self,
                                             uint64_steamid steamIDGameServer,
                                             uint32 unIPServer,
                                             uint16 usPortServer) {
	TRACE_FUNCTION_CALL();
}
S_API SteamAPICall_t SteamAPI_ISteamUser_RequestEncryptedAppTicket(
    ISteamUser *self, void *pDataToInclude, int cbDataToInclude) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API bool SteamAPI_ISteamUser_GetEncryptedAppTicket(ISteamUser *self,
                                                     void *pTicket,
                                                     int cbMaxTicket,
                                                     uint32 *pcbTicket) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API int SteamAPI_ISteamUser_GetGameBadgeLevel(ISteamUser *self, int nSeries,
                                                bool bFoil) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API int SteamAPI_ISteamUser_GetPlayerSteamLevel(ISteamUser *self) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API SteamAPICall_t SteamAPI_ISteamUser_RequestStoreAuthURL(
    ISteamUser *self, const char *pchRedirectURL) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API bool SteamAPI_ISteamUser_BIsPhoneVerified(ISteamUser *self) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamUser_BIsTwoFactorEnabled(ISteamUser *self) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamUser_BIsPhoneIdentifying(ISteamUser *self) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamUser_BIsPhoneRequiringVerification(ISteamUser *self) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API SteamAPICall_t
SteamAPI_ISteamUser_GetMarketEligibility(ISteamUser *self) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API SteamAPICall_t SteamAPI_ISteamUser_GetDurationControl(ISteamUser *self) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API bool SteamAPI_ISteamUser_BSetDurationControlOnlineState(
    ISteamUser *self, EDurationControlOnlineState eNewState) {
	TRACE_FUNCTION_CALL();
	return false;
}


S_API ISteamFriends *SteamAPI_SteamFriends_v017() {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API const char *SteamAPI_ISteamFriends_GetPersonaName(ISteamFriends *self) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API SteamAPICall_t SteamAPI_ISteamFriends_SetPersonaName(
    ISteamFriends *self, const char *pchPersonaName) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API EPersonaState
SteamAPI_ISteamFriends_GetPersonaState(ISteamFriends *self) {
	TRACE_FUNCTION_CALL();
	return k_EPersonaStateOffline;
}
S_API int SteamAPI_ISteamFriends_GetFriendCount(ISteamFriends *self,
                                                int iFriendFlags) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API uint64_steamid SteamAPI_ISteamFriends_GetFriendByIndex(
    ISteamFriends *self, int iFriend, int iFriendFlags) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API EFriendRelationship SteamAPI_ISteamFriends_GetFriendRelationship(
    ISteamFriends *self, uint64_steamid steamIDFriend) {
	TRACE_FUNCTION_CALL();
	return k_EFriendRelationshipNone;
}
S_API EPersonaState SteamAPI_ISteamFriends_GetFriendPersonaState(
    ISteamFriends *self, uint64_steamid steamIDFriend) {
	TRACE_FUNCTION_CALL();
	return k_EPersonaStateOffline;
}
S_API const char *
SteamAPI_ISteamFriends_GetFriendPersonaName(ISteamFriends *self,
                                            uint64_steamid steamIDFriend) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API bool
SteamAPI_ISteamFriends_GetFriendGamePlayed(ISteamFriends *self,
                                           uint64_steamid steamIDFriend,
                                           FriendGameInfo_t *pFriendGameInfo) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API const char *SteamAPI_ISteamFriends_GetFriendPersonaNameHistory(
    ISteamFriends *self, uint64_steamid steamIDFriend, int iPersonaName) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API int
SteamAPI_ISteamFriends_GetFriendSteamLevel(ISteamFriends *self,
                                           uint64_steamid steamIDFriend) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API const char *
SteamAPI_ISteamFriends_GetPlayerNickname(ISteamFriends *self,
                                         uint64_steamid steamIDPlayer) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API int SteamAPI_ISteamFriends_GetFriendsGroupCount(ISteamFriends *self) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API FriendsGroupID_t
SteamAPI_ISteamFriends_GetFriendsGroupIDByIndex(ISteamFriends *self, int iFG) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API const char *
SteamAPI_ISteamFriends_GetFriendsGroupName(ISteamFriends *self,
                                           FriendsGroupID_t friendsGroupID) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API int SteamAPI_ISteamFriends_GetFriendsGroupMembersCount(
    ISteamFriends *self, FriendsGroupID_t friendsGroupID) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API void SteamAPI_ISteamFriends_GetFriendsGroupMembersList(
    ISteamFriends *self, FriendsGroupID_t friendsGroupID,
    CSteamID *pOutSteamIDMembers, int nMembersCount) {
	TRACE_FUNCTION_CALL();
}
S_API bool SteamAPI_ISteamFriends_HasFriend(ISteamFriends *self,
                                            uint64_steamid steamIDFriend,
                                            int iFriendFlags) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API int SteamAPI_ISteamFriends_GetClanCount(ISteamFriends *self) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API uint64_steamid SteamAPI_ISteamFriends_GetClanByIndex(ISteamFriends *self,
                                                           int iClan) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API const char *
SteamAPI_ISteamFriends_GetClanName(ISteamFriends *self,
                                   uint64_steamid steamIDClan) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API const char *
SteamAPI_ISteamFriends_GetClanTag(ISteamFriends *self,
                                  uint64_steamid steamIDClan) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API bool SteamAPI_ISteamFriends_GetClanActivityCounts(
    ISteamFriends *self, uint64_steamid steamIDClan, int *pnOnline,
    int *pnInGame, int *pnChatting) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API SteamAPICall_t SteamAPI_ISteamFriends_DownloadClanActivityCounts(
    ISteamFriends *self, CSteamID *psteamIDClans, int cClansToRequest) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API int
SteamAPI_ISteamFriends_GetFriendCountFromSource(ISteamFriends *self,
                                                uint64_steamid steamIDSource) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API uint64_steamid SteamAPI_ISteamFriends_GetFriendFromSourceByIndex(
    ISteamFriends *self, uint64_steamid steamIDSource, int iFriend) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API bool SteamAPI_ISteamFriends_IsUserInSource(ISteamFriends *self,
                                                 uint64_steamid steamIDUser,
                                                 uint64_steamid steamIDSource) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API void SteamAPI_ISteamFriends_SetInGameVoiceSpeaking(
    ISteamFriends *self, uint64_steamid steamIDUser, bool bSpeaking) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamFriends_ActivateGameOverlay(ISteamFriends *self,
                                                      const char *pchDialog) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamFriends_ActivateGameOverlayToUser(
    ISteamFriends *self, const char *pchDialog, uint64_steamid steamID) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamFriends_ActivateGameOverlayToWebPage(
    ISteamFriends *self, const char *pchURL,
    EActivateGameOverlayToWebPageMode eMode) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamFriends_ActivateGameOverlayToStore(
    ISteamFriends *self, AppId_t nAppID, EOverlayToStoreFlag eFlag) {
	TRACE_FUNCTION_CALL();
}
S_API void
SteamAPI_ISteamFriends_SetPlayedWith(ISteamFriends *self,
                                     uint64_steamid steamIDUserPlayedWith) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamFriends_ActivateGameOverlayInviteDialog(
    ISteamFriends *self, uint64_steamid steamIDLobby) {
	TRACE_FUNCTION_CALL();
}
S_API int
SteamAPI_ISteamFriends_GetSmallFriendAvatar(ISteamFriends *self,
                                            uint64_steamid steamIDFriend) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API int
SteamAPI_ISteamFriends_GetMediumFriendAvatar(ISteamFriends *self,
                                             uint64_steamid steamIDFriend) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API int
SteamAPI_ISteamFriends_GetLargeFriendAvatar(ISteamFriends *self,
                                            uint64_steamid steamIDFriend) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API bool SteamAPI_ISteamFriends_RequestUserInformation(
    ISteamFriends *self, uint64_steamid steamIDUser, bool bRequireNameOnly) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API SteamAPICall_t SteamAPI_ISteamFriends_RequestClanOfficerList(
    ISteamFriends *self, uint64_steamid steamIDClan) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API uint64_steamid SteamAPI_ISteamFriends_GetClanOwner(
    ISteamFriends *self, uint64_steamid steamIDClan) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API int
SteamAPI_ISteamFriends_GetClanOfficerCount(ISteamFriends *self,
                                           uint64_steamid steamIDClan) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API uint64_steamid SteamAPI_ISteamFriends_GetClanOfficerByIndex(
    ISteamFriends *self, uint64_steamid steamIDClan, int iOfficer) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API uint32 SteamAPI_ISteamFriends_GetUserRestrictions(ISteamFriends *self) {
	TRACE_FUNCTION_CALL();
	return 0u;
}
S_API bool SteamAPI_ISteamFriends_SetRichPresence(ISteamFriends *self,
                                                  const char *pchKey,
                                                  const char *pchValue) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API void SteamAPI_ISteamFriends_ClearRichPresence(ISteamFriends *self) {
	TRACE_FUNCTION_CALL();
}
S_API const char *SteamAPI_ISteamFriends_GetFriendRichPresence(
    ISteamFriends *self, uint64_steamid steamIDFriend, const char *pchKey) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API int SteamAPI_ISteamFriends_GetFriendRichPresenceKeyCount(
    ISteamFriends *self, uint64_steamid steamIDFriend) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API const char *SteamAPI_ISteamFriends_GetFriendRichPresenceKeyByIndex(
    ISteamFriends *self, uint64_steamid steamIDFriend, int iKey) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API void
SteamAPI_ISteamFriends_RequestFriendRichPresence(ISteamFriends *self,
                                                 uint64_steamid steamIDFriend) {
	TRACE_FUNCTION_CALL();
}
S_API bool
SteamAPI_ISteamFriends_InviteUserToGame(ISteamFriends *self,
                                        uint64_steamid steamIDFriend,
                                        const char *pchConnectString) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API int SteamAPI_ISteamFriends_GetCoplayFriendCount(ISteamFriends *self) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API uint64_steamid SteamAPI_ISteamFriends_GetCoplayFriend(ISteamFriends *self,
                                                            int iCoplayFriend) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API int
SteamAPI_ISteamFriends_GetFriendCoplayTime(ISteamFriends *self,
                                           uint64_steamid steamIDFriend) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API AppId_t SteamAPI_ISteamFriends_GetFriendCoplayGame(
    ISteamFriends *self, uint64_steamid steamIDFriend) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API SteamAPICall_t SteamAPI_ISteamFriends_JoinClanChatRoom(
    ISteamFriends *self, uint64_steamid steamIDClan) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API bool
SteamAPI_ISteamFriends_LeaveClanChatRoom(ISteamFriends *self,
                                         uint64_steamid steamIDClan) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API int
SteamAPI_ISteamFriends_GetClanChatMemberCount(ISteamFriends *self,
                                              uint64_steamid steamIDClan) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API uint64_steamid SteamAPI_ISteamFriends_GetChatMemberByIndex(
    ISteamFriends *self, uint64_steamid steamIDClan, int iUser) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API bool SteamAPI_ISteamFriends_SendClanChatMessage(
    ISteamFriends *self, uint64_steamid steamIDClanChat, const char *pchText) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API int SteamAPI_ISteamFriends_GetClanChatMessage(
    ISteamFriends *self, uint64_steamid steamIDClanChat, int iMessage,
    void *prgchText, int cchTextMax, EChatEntryType *peChatEntryType,
    CSteamID *psteamidChatter) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API bool
SteamAPI_ISteamFriends_IsClanChatAdmin(ISteamFriends *self,
                                       uint64_steamid steamIDClanChat,
                                       uint64_steamid steamIDUser) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamFriends_IsClanChatWindowOpenInSteam(
    ISteamFriends *self, uint64_steamid steamIDClanChat) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamFriends_OpenClanChatWindowInSteam(
    ISteamFriends *self, uint64_steamid steamIDClanChat) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamFriends_CloseClanChatWindowInSteam(
    ISteamFriends *self, uint64_steamid steamIDClanChat) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool
SteamAPI_ISteamFriends_SetListenForFriendsMessages(ISteamFriends *self,
                                                   bool bInterceptEnabled) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool
SteamAPI_ISteamFriends_ReplyToFriendMessage(ISteamFriends *self,
                                            uint64_steamid steamIDFriend,
                                            const char *pchMsgToSend) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API int SteamAPI_ISteamFriends_GetFriendMessage(
    ISteamFriends *self, uint64_steamid steamIDFriend, int iMessageID,
    void *pvData, int cubData, EChatEntryType *peChatEntryType) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API SteamAPICall_t SteamAPI_ISteamFriends_GetFollowerCount(
    ISteamFriends *self, uint64_steamid steamID) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API SteamAPICall_t SteamAPI_ISteamFriends_IsFollowing(
    ISteamFriends *self, uint64_steamid steamID) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API SteamAPICall_t SteamAPI_ISteamFriends_EnumerateFollowingList(
    ISteamFriends *self, uint32 unStartIndex) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API bool SteamAPI_ISteamFriends_IsClanPublic(ISteamFriends *self,
                                               uint64_steamid steamIDClan) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool
SteamAPI_ISteamFriends_IsClanOfficialGameGroup(ISteamFriends *self,
                                               uint64_steamid steamIDClan) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API int SteamAPI_ISteamFriends_GetNumChatsWithUnreadPriorityMessages(
    ISteamFriends *self) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API void
SteamAPI_ISteamFriends_ActivateGameOverlayRemotePlayTogetherInviteDialog(
    ISteamFriends *self, uint64_steamid steamIDLobby) {
	TRACE_FUNCTION_CALL();
}
S_API bool SteamAPI_ISteamFriends_RegisterProtocolInOverlayBrowser(
    ISteamFriends *self, const char *pchProtocol) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API void SteamAPI_ISteamFriends_ActivateGameOverlayInviteDialogConnectString(
    ISteamFriends *self, const char *pchConnectString) {
	TRACE_FUNCTION_CALL();
}


S_API ISteamUtils *SteamAPI_SteamUtils_v010() {
	TRACE_FUNCTION_CALL();
	return nullptr;
}

S_API ISteamUtils *SteamAPI_SteamGameServerUtils_v010() {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API uint32 SteamAPI_ISteamUtils_GetSecondsSinceAppActive(ISteamUtils *self) {
	TRACE_FUNCTION_CALL();
	return 0u;
}
S_API uint32
SteamAPI_ISteamUtils_GetSecondsSinceComputerActive(ISteamUtils *self) {
	TRACE_FUNCTION_CALL();
	return 0u;
}
S_API EUniverse SteamAPI_ISteamUtils_GetConnectedUniverse(ISteamUtils *self) {
	TRACE_FUNCTION_CALL();
	return k_EUniverseInvalid;
}
S_API uint32 SteamAPI_ISteamUtils_GetServerRealTime(ISteamUtils *self) {
	TRACE_FUNCTION_CALL();
	return 0u;
}
S_API const char *SteamAPI_ISteamUtils_GetIPCountry(ISteamUtils *self) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API bool SteamAPI_ISteamUtils_GetImageSize(ISteamUtils *self, int iImage,
                                             uint32 *pnWidth,
                                             uint32 *pnHeight) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamUtils_GetImageRGBA(ISteamUtils *self, int iImage,
                                             uint8 *pubDest,
                                             int nDestBufferSize) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API uint8 SteamAPI_ISteamUtils_GetCurrentBatteryPower(ISteamUtils *self) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API uint32 SteamAPI_ISteamUtils_GetAppID(ISteamUtils *self) {
	TRACE_FUNCTION_CALL();
	return 0u;
}
S_API void SteamAPI_ISteamUtils_SetOverlayNotificationPosition(
    ISteamUtils *self, ENotificationPosition eNotificationPosition) {
	TRACE_FUNCTION_CALL();
}
S_API bool SteamAPI_ISteamUtils_IsAPICallCompleted(ISteamUtils *self,
                                                   SteamAPICall_t hSteamAPICall,
                                                   bool *pbFailed) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API ESteamAPICallFailure SteamAPI_ISteamUtils_GetAPICallFailureReason(
    ISteamUtils *self, SteamAPICall_t hSteamAPICall) {
	TRACE_FUNCTION_CALL();
	return k_ESteamAPICallFailureInvalidHandle;
}
S_API bool SteamAPI_ISteamUtils_GetAPICallResult(
    ISteamUtils *self, SteamAPICall_t hSteamAPICall, void *pCallback,
    int cubCallback, int iCallbackExpected, bool *pbFailed) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API uint32 SteamAPI_ISteamUtils_GetIPCCallCount(ISteamUtils *self) {
	TRACE_FUNCTION_CALL();
	return 0u;
}
S_API void SteamAPI_ISteamUtils_SetWarningMessageHook(
    ISteamUtils *self, SteamAPIWarningMessageHook_t pFunction) {
	TRACE_FUNCTION_CALL();
}
S_API bool SteamAPI_ISteamUtils_IsOverlayEnabled(ISteamUtils *self) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamUtils_BOverlayNeedsPresent(ISteamUtils *self) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API SteamAPICall_t SteamAPI_ISteamUtils_CheckFileSignature(
    ISteamUtils *self, const char *szFileName) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API bool SteamAPI_ISteamUtils_ShowGamepadTextInput(
    ISteamUtils *self, EGamepadTextInputMode eInputMode,
    EGamepadTextInputLineMode eLineInputMode, const char *pchDescription,
    uint32 unCharMax, const char *pchExistingText) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API uint32
SteamAPI_ISteamUtils_GetEnteredGamepadTextLength(ISteamUtils *self) {
	TRACE_FUNCTION_CALL();
	return 0u;
}
S_API bool SteamAPI_ISteamUtils_GetEnteredGamepadTextInput(ISteamUtils *self,
                                                           char *pchText,
                                                           uint32 cchText) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API const char *SteamAPI_ISteamUtils_GetSteamUILanguage(ISteamUtils *self) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API bool SteamAPI_ISteamUtils_IsSteamRunningInVR(ISteamUtils *self) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API void SteamAPI_ISteamUtils_SetOverlayNotificationInset(
    ISteamUtils *self, int nHorizontalInset, int nVerticalInset) {
	TRACE_FUNCTION_CALL();
}
S_API bool SteamAPI_ISteamUtils_IsSteamInBigPictureMode(ISteamUtils *self) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API void SteamAPI_ISteamUtils_StartVRDashboard(ISteamUtils *self) {
	TRACE_FUNCTION_CALL();
}
S_API bool SteamAPI_ISteamUtils_IsVRHeadsetStreamingEnabled(ISteamUtils *self) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API void SteamAPI_ISteamUtils_SetVRHeadsetStreamingEnabled(ISteamUtils *self,
                                                             bool bEnabled) {
	TRACE_FUNCTION_CALL();
}
S_API bool SteamAPI_ISteamUtils_IsSteamChinaLauncher(ISteamUtils *self) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamUtils_InitFilterText(ISteamUtils *self,
                                               uint32 unFilterOptions) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API int SteamAPI_ISteamUtils_FilterText(ISteamUtils *self,
                                          ETextFilteringContext eContext,
                                          uint64_steamid sourceSteamID,
                                          const char *pchInputMessage,
                                          char *pchOutFilteredText,
                                          uint32 nByteSizeOutFilteredText) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API ESteamIPv6ConnectivityState SteamAPI_ISteamUtils_GetIPv6ConnectivityState(
    ISteamUtils *self, ESteamIPv6ConnectivityProtocol eProtocol) {
	TRACE_FUNCTION_CALL();
	return k_ESteamIPv6ConnectivityState_Unknown;
}
S_API bool SteamAPI_ISteamUtils_IsSteamRunningOnSteamDeck(ISteamUtils *self) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamUtils_ShowFloatingGamepadTextInput(
    ISteamUtils *self, EFloatingGamepadTextInputMode eKeyboardMode,
    int nTextFieldXPosition, int nTextFieldYPosition, int nTextFieldWidth,
    int nTextFieldHeight) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API void SteamAPI_ISteamUtils_SetGameLauncherMode(ISteamUtils *self,
                                                    bool bLauncherMode) {
	TRACE_FUNCTION_CALL();
}
S_API bool
SteamAPI_ISteamUtils_DismissFloatingGamepadTextInput(ISteamUtils *self) {
	TRACE_FUNCTION_CALL();
	return false;
}


S_API ISteamMatchmaking *SteamAPI_SteamMatchmaking_v009() {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API int
SteamAPI_ISteamMatchmaking_GetFavoriteGameCount(ISteamMatchmaking *self) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API bool SteamAPI_ISteamMatchmaking_GetFavoriteGame(
    ISteamMatchmaking *self, int iGame, AppId_t *pnAppID, uint32 *pnIP,
    uint16 *pnConnPort, uint16 *pnQueryPort, uint32 *punFlags,
    uint32 *pRTime32LastPlayedOnServer) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API int SteamAPI_ISteamMatchmaking_AddFavoriteGame(
    ISteamMatchmaking *self, AppId_t nAppID, uint32 nIP, uint16 nConnPort,
    uint16 nQueryPort, uint32 unFlags, uint32 rTime32LastPlayedOnServer) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API bool SteamAPI_ISteamMatchmaking_RemoveFavoriteGame(
    ISteamMatchmaking *self, AppId_t nAppID, uint32 nIP, uint16 nConnPort,
    uint16 nQueryPort, uint32 unFlags) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API SteamAPICall_t
SteamAPI_ISteamMatchmaking_RequestLobbyList(ISteamMatchmaking *self) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API void SteamAPI_ISteamMatchmaking_AddRequestLobbyListStringFilter(
    ISteamMatchmaking *self, const char *pchKeyToMatch,
    const char *pchValueToMatch, ELobbyComparison eComparisonType) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamMatchmaking_AddRequestLobbyListNumericalFilter(
    ISteamMatchmaking *self, const char *pchKeyToMatch, int nValueToMatch,
    ELobbyComparison eComparisonType) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamMatchmaking_AddRequestLobbyListNearValueFilter(
    ISteamMatchmaking *self, const char *pchKeyToMatch, int nValueToBeCloseTo) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamMatchmaking_AddRequestLobbyListFilterSlotsAvailable(
    ISteamMatchmaking *self, int nSlotsAvailable) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamMatchmaking_AddRequestLobbyListDistanceFilter(
    ISteamMatchmaking *self, ELobbyDistanceFilter eLobbyDistanceFilter) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamMatchmaking_AddRequestLobbyListResultCountFilter(
    ISteamMatchmaking *self, int cMaxResults) {
	TRACE_FUNCTION_CALL();
}
S_API void
SteamAPI_ISteamMatchmaking_AddRequestLobbyListCompatibleMembersFilter(
    ISteamMatchmaking *self, uint64_steamid steamIDLobby) {
	TRACE_FUNCTION_CALL();
}
S_API uint64_steamid SteamAPI_ISteamMatchmaking_GetLobbyByIndex(
    ISteamMatchmaking *self, int iLobby) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API SteamAPICall_t SteamAPI_ISteamMatchmaking_CreateLobby(
    ISteamMatchmaking *self, ELobbyType eLobbyType, int cMaxMembers) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API SteamAPICall_t SteamAPI_ISteamMatchmaking_JoinLobby(
    ISteamMatchmaking *self, uint64_steamid steamIDLobby) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API void SteamAPI_ISteamMatchmaking_LeaveLobby(ISteamMatchmaking *self,
                                                 uint64_steamid steamIDLobby) {
	TRACE_FUNCTION_CALL();
}
S_API bool
SteamAPI_ISteamMatchmaking_InviteUserToLobby(ISteamMatchmaking *self,
                                             uint64_steamid steamIDLobby,
                                             uint64_steamid steamIDInvitee) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API int
SteamAPI_ISteamMatchmaking_GetNumLobbyMembers(ISteamMatchmaking *self,
                                              uint64_steamid steamIDLobby) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API uint64_steamid SteamAPI_ISteamMatchmaking_GetLobbyMemberByIndex(
    ISteamMatchmaking *self, uint64_steamid steamIDLobby, int iMember) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API const char *SteamAPI_ISteamMatchmaking_GetLobbyData(
    ISteamMatchmaking *self, uint64_steamid steamIDLobby, const char *pchKey) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API bool SteamAPI_ISteamMatchmaking_SetLobbyData(ISteamMatchmaking *self,
                                                   uint64_steamid steamIDLobby,
                                                   const char *pchKey,
                                                   const char *pchValue) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API int
SteamAPI_ISteamMatchmaking_GetLobbyDataCount(ISteamMatchmaking *self,
                                             uint64_steamid steamIDLobby) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API bool SteamAPI_ISteamMatchmaking_GetLobbyDataByIndex(
    ISteamMatchmaking *self, uint64_steamid steamIDLobby, int iLobbyData,
    char *pchKey, int cchKeyBufferSize, char *pchValue,
    int cchValueBufferSize) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamMatchmaking_DeleteLobbyData(
    ISteamMatchmaking *self, uint64_steamid steamIDLobby, const char *pchKey) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API const char *SteamAPI_ISteamMatchmaking_GetLobbyMemberData(
    ISteamMatchmaking *self, uint64_steamid steamIDLobby,
    uint64_steamid steamIDUser, const char *pchKey) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API void SteamAPI_ISteamMatchmaking_SetLobbyMemberData(
    ISteamMatchmaking *self, uint64_steamid steamIDLobby, const char *pchKey,
    const char *pchValue) {
	TRACE_FUNCTION_CALL();
}
S_API bool SteamAPI_ISteamMatchmaking_SendLobbyChatMsg(
    ISteamMatchmaking *self, uint64_steamid steamIDLobby, const void *pvMsgBody,
    int cubMsgBody) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API int SteamAPI_ISteamMatchmaking_GetLobbyChatEntry(
    ISteamMatchmaking *self, uint64_steamid steamIDLobby, int iChatID,
    CSteamID *pSteamIDUser, void *pvData, int cubData,
    EChatEntryType *peChatEntryType) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API bool
SteamAPI_ISteamMatchmaking_RequestLobbyData(ISteamMatchmaking *self,
                                            uint64_steamid steamIDLobby) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API void SteamAPI_ISteamMatchmaking_SetLobbyGameServer(
    ISteamMatchmaking *self, uint64_steamid steamIDLobby, uint32 unGameServerIP,
    uint16 unGameServerPort, uint64_steamid steamIDGameServer) {
	TRACE_FUNCTION_CALL();
}
S_API bool SteamAPI_ISteamMatchmaking_GetLobbyGameServer(
    ISteamMatchmaking *self, uint64_steamid steamIDLobby,
    uint32 *punGameServerIP, uint16 *punGameServerPort,
    CSteamID *psteamIDGameServer) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamMatchmaking_SetLobbyMemberLimit(
    ISteamMatchmaking *self, uint64_steamid steamIDLobby, int cMaxMembers) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API int
SteamAPI_ISteamMatchmaking_GetLobbyMemberLimit(ISteamMatchmaking *self,
                                               uint64_steamid steamIDLobby) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API bool SteamAPI_ISteamMatchmaking_SetLobbyType(ISteamMatchmaking *self,
                                                   uint64_steamid steamIDLobby,
                                                   ELobbyType eLobbyType) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamMatchmaking_SetLobbyJoinable(
    ISteamMatchmaking *self, uint64_steamid steamIDLobby, bool bLobbyJoinable) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API uint64_steamid SteamAPI_ISteamMatchmaking_GetLobbyOwner(
    ISteamMatchmaking *self, uint64_steamid steamIDLobby) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API bool
SteamAPI_ISteamMatchmaking_SetLobbyOwner(ISteamMatchmaking *self,
                                         uint64_steamid steamIDLobby,
                                         uint64_steamid steamIDNewOwner) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamMatchmaking_SetLinkedLobby(
    ISteamMatchmaking *self, uint64_steamid steamIDLobby,
    uint64_steamid steamIDLobbyDependent) {
	TRACE_FUNCTION_CALL();
	return false;
}

S_API void SteamAPI_ISteamMatchmakingServerListResponse_ServerResponded(
    ISteamMatchmakingServerListResponse *self, HServerListRequest hRequest,
    int iServer) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamMatchmakingServerListResponse_ServerFailedToRespond(
    ISteamMatchmakingServerListResponse *self, HServerListRequest hRequest,
    int iServer) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamMatchmakingServerListResponse_RefreshComplete(
    ISteamMatchmakingServerListResponse *self, HServerListRequest hRequest,
    EMatchMakingServerResponse response) {
	TRACE_FUNCTION_CALL();
}

S_API void SteamAPI_ISteamMatchmakingPingResponse_ServerResponded(
    ISteamMatchmakingPingResponse *self, gameserveritem_t &server) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamMatchmakingPingResponse_ServerFailedToRespond(
    ISteamMatchmakingPingResponse *self) {
	TRACE_FUNCTION_CALL();
}

S_API void SteamAPI_ISteamMatchmakingPlayersResponse_AddPlayerToList(
    ISteamMatchmakingPlayersResponse *self, const char *pchName, int nScore,
    float flTimePlayed) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamMatchmakingPlayersResponse_PlayersFailedToRespond(
    ISteamMatchmakingPlayersResponse *self) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamMatchmakingPlayersResponse_PlayersRefreshComplete(
    ISteamMatchmakingPlayersResponse *self) {
	TRACE_FUNCTION_CALL();
}

S_API void SteamAPI_ISteamMatchmakingRulesResponse_RulesResponded(
    ISteamMatchmakingRulesResponse *self, const char *pchRule,
    const char *pchValue) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamMatchmakingRulesResponse_RulesFailedToRespond(
    ISteamMatchmakingRulesResponse *self) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamMatchmakingRulesResponse_RulesRefreshComplete(
    ISteamMatchmakingRulesResponse *self) {
	TRACE_FUNCTION_CALL();
}


S_API ISteamMatchmakingServers *SteamAPI_SteamMatchmakingServers_v002() {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API HServerListRequest
SteamAPI_ISteamMatchmakingServers_RequestInternetServerList(
    ISteamMatchmakingServers *self, AppId_t iApp,
    MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters,
    ISteamMatchmakingServerListResponse *pRequestServersResponse) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API HServerListRequest SteamAPI_ISteamMatchmakingServers_RequestLANServerList(
    ISteamMatchmakingServers *self, AppId_t iApp,
    ISteamMatchmakingServerListResponse *pRequestServersResponse) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API HServerListRequest
SteamAPI_ISteamMatchmakingServers_RequestFriendsServerList(
    ISteamMatchmakingServers *self, AppId_t iApp,
    MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters,
    ISteamMatchmakingServerListResponse *pRequestServersResponse) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API HServerListRequest
SteamAPI_ISteamMatchmakingServers_RequestFavoritesServerList(
    ISteamMatchmakingServers *self, AppId_t iApp,
    MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters,
    ISteamMatchmakingServerListResponse *pRequestServersResponse) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API HServerListRequest
SteamAPI_ISteamMatchmakingServers_RequestHistoryServerList(
    ISteamMatchmakingServers *self, AppId_t iApp,
    MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters,
    ISteamMatchmakingServerListResponse *pRequestServersResponse) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API HServerListRequest
SteamAPI_ISteamMatchmakingServers_RequestSpectatorServerList(
    ISteamMatchmakingServers *self, AppId_t iApp,
    MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters,
    ISteamMatchmakingServerListResponse *pRequestServersResponse) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API void SteamAPI_ISteamMatchmakingServers_ReleaseRequest(
    ISteamMatchmakingServers *self, HServerListRequest hServerListRequest) {
	TRACE_FUNCTION_CALL();
}
S_API gameserveritem_t *SteamAPI_ISteamMatchmakingServers_GetServerDetails(
    ISteamMatchmakingServers *self, HServerListRequest hRequest, int iServer) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API void
SteamAPI_ISteamMatchmakingServers_CancelQuery(ISteamMatchmakingServers *self,
                                              HServerListRequest hRequest) {
	TRACE_FUNCTION_CALL();
}
S_API void
SteamAPI_ISteamMatchmakingServers_RefreshQuery(ISteamMatchmakingServers *self,
                                               HServerListRequest hRequest) {
	TRACE_FUNCTION_CALL();
}
S_API bool
SteamAPI_ISteamMatchmakingServers_IsRefreshing(ISteamMatchmakingServers *self,
                                               HServerListRequest hRequest) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API int
SteamAPI_ISteamMatchmakingServers_GetServerCount(ISteamMatchmakingServers *self,
                                                 HServerListRequest hRequest) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API void SteamAPI_ISteamMatchmakingServers_RefreshServer(
    ISteamMatchmakingServers *self, HServerListRequest hRequest, int iServer) {
	TRACE_FUNCTION_CALL();
}
S_API HServerQuery SteamAPI_ISteamMatchmakingServers_PingServer(
    ISteamMatchmakingServers *self, uint32 unIP, uint16 usPort,
    ISteamMatchmakingPingResponse *pRequestServersResponse) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API HServerQuery SteamAPI_ISteamMatchmakingServers_PlayerDetails(
    ISteamMatchmakingServers *self, uint32 unIP, uint16 usPort,
    ISteamMatchmakingPlayersResponse *pRequestServersResponse) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API HServerQuery SteamAPI_ISteamMatchmakingServers_ServerRules(
    ISteamMatchmakingServers *self, uint32 unIP, uint16 usPort,
    ISteamMatchmakingRulesResponse *pRequestServersResponse) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API void SteamAPI_ISteamMatchmakingServers_CancelServerQuery(
    ISteamMatchmakingServers *self, HServerQuery hServerQuery) {
	TRACE_FUNCTION_CALL();
}


S_API ISteamGameSearch *SteamAPI_SteamGameSearch_v001() {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API EGameSearchErrorCode_t SteamAPI_ISteamGameSearch_AddGameSearchParams(
    ISteamGameSearch *self, const char *pchKeyToFind,
    const char *pchValuesToFind) {
	TRACE_FUNCTION_CALL();
	return k_EGameSearchErrorCode_Failed_Unknown_Error;
}
S_API EGameSearchErrorCode_t SteamAPI_ISteamGameSearch_SearchForGameWithLobby(
    ISteamGameSearch *self, uint64_steamid steamIDLobby, int nPlayerMin,
    int nPlayerMax) {
	TRACE_FUNCTION_CALL();
	return k_EGameSearchErrorCode_Failed_Unknown_Error;
}
S_API EGameSearchErrorCode_t SteamAPI_ISteamGameSearch_SearchForGameSolo(
    ISteamGameSearch *self, int nPlayerMin, int nPlayerMax) {
	TRACE_FUNCTION_CALL();
	return k_EGameSearchErrorCode_Failed_Unknown_Error;
}
S_API EGameSearchErrorCode_t
SteamAPI_ISteamGameSearch_AcceptGame(ISteamGameSearch *self) {
	TRACE_FUNCTION_CALL();
	return k_EGameSearchErrorCode_Failed_Unknown_Error;
}
S_API EGameSearchErrorCode_t
SteamAPI_ISteamGameSearch_DeclineGame(ISteamGameSearch *self) {
	TRACE_FUNCTION_CALL();
	return k_EGameSearchErrorCode_Failed_Unknown_Error;
}
S_API EGameSearchErrorCode_t
SteamAPI_ISteamGameSearch_RetrieveConnectionDetails(ISteamGameSearch *self,
                                                    uint64_steamid steamIDHost,
                                                    char *pchConnectionDetails,
                                                    int cubConnectionDetails) {
	TRACE_FUNCTION_CALL();
	return k_EGameSearchErrorCode_Failed_Unknown_Error;
}
S_API EGameSearchErrorCode_t
SteamAPI_ISteamGameSearch_EndGameSearch(ISteamGameSearch *self) {
	TRACE_FUNCTION_CALL();
	return k_EGameSearchErrorCode_Failed_Unknown_Error;
}
S_API EGameSearchErrorCode_t SteamAPI_ISteamGameSearch_SetGameHostParams(
    ISteamGameSearch *self, const char *pchKey, const char *pchValue) {
	TRACE_FUNCTION_CALL();
	return k_EGameSearchErrorCode_Failed_Unknown_Error;
}
S_API EGameSearchErrorCode_t SteamAPI_ISteamGameSearch_SetConnectionDetails(
    ISteamGameSearch *self, const char *pchConnectionDetails,
    int cubConnectionDetails) {
	TRACE_FUNCTION_CALL();
	return k_EGameSearchErrorCode_Failed_Unknown_Error;
}
S_API EGameSearchErrorCode_t SteamAPI_ISteamGameSearch_RequestPlayersForGame(
    ISteamGameSearch *self, int nPlayerMin, int nPlayerMax, int nMaxTeamSize) {
	TRACE_FUNCTION_CALL();
	return k_EGameSearchErrorCode_Failed_Unknown_Error;
}
S_API EGameSearchErrorCode_t SteamAPI_ISteamGameSearch_HostConfirmGameStart(
    ISteamGameSearch *self, uint64 ullUniqueGameID) {
	TRACE_FUNCTION_CALL();
	return k_EGameSearchErrorCode_Failed_Unknown_Error;
}
S_API EGameSearchErrorCode_t
SteamAPI_ISteamGameSearch_CancelRequestPlayersForGame(ISteamGameSearch *self) {
	TRACE_FUNCTION_CALL();
	return k_EGameSearchErrorCode_Failed_Unknown_Error;
}
S_API EGameSearchErrorCode_t SteamAPI_ISteamGameSearch_SubmitPlayerResult(
    ISteamGameSearch *self, uint64 ullUniqueGameID,
    uint64_steamid steamIDPlayer, EPlayerResult_t EPlayerResult) {
	TRACE_FUNCTION_CALL();
	return k_EGameSearchErrorCode_Failed_Unknown_Error;
}
S_API EGameSearchErrorCode_t SteamAPI_ISteamGameSearch_EndGame(
    ISteamGameSearch *self, uint64 ullUniqueGameID) {
	TRACE_FUNCTION_CALL();
	return k_EGameSearchErrorCode_Failed_Unknown_Error;
}


S_API ISteamParties *SteamAPI_SteamParties_v002() {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API uint32 SteamAPI_ISteamParties_GetNumActiveBeacons(ISteamParties *self) {
	TRACE_FUNCTION_CALL();
	return 0u;
}
S_API PartyBeaconID_t
SteamAPI_ISteamParties_GetBeaconByIndex(ISteamParties *self, uint32 unIndex) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API bool SteamAPI_ISteamParties_GetBeaconDetails(
    ISteamParties *self, PartyBeaconID_t ulBeaconID,
    CSteamID *pSteamIDBeaconOwner, SteamPartyBeaconLocation_t *pLocation,
    char *pchMetadata, int cchMetadata) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API SteamAPICall_t SteamAPI_ISteamParties_JoinParty(
    ISteamParties *self, PartyBeaconID_t ulBeaconID) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API bool
SteamAPI_ISteamParties_GetNumAvailableBeaconLocations(ISteamParties *self,
                                                      uint32 *puNumLocations) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamParties_GetAvailableBeaconLocations(
    ISteamParties *self, SteamPartyBeaconLocation_t *pLocationList,
    uint32 uMaxNumLocations) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API SteamAPICall_t SteamAPI_ISteamParties_CreateBeacon(
    ISteamParties *self, uint32 unOpenSlots,
    SteamPartyBeaconLocation_t *pBeaconLocation, const char *pchConnectString,
    const char *pchMetadata) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API void SteamAPI_ISteamParties_OnReservationCompleted(
    ISteamParties *self, PartyBeaconID_t ulBeacon, uint64_steamid steamIDUser) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamParties_CancelReservation(
    ISteamParties *self, PartyBeaconID_t ulBeacon, uint64_steamid steamIDUser) {
	TRACE_FUNCTION_CALL();
}
S_API SteamAPICall_t SteamAPI_ISteamParties_ChangeNumOpenSlots(
    ISteamParties *self, PartyBeaconID_t ulBeacon, uint32 unOpenSlots) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API bool SteamAPI_ISteamParties_DestroyBeacon(ISteamParties *self,
                                                PartyBeaconID_t ulBeacon) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamParties_GetBeaconLocationData(
    ISteamParties *self, SteamPartyBeaconLocation_t BeaconLocation,
    ESteamPartyBeaconLocationData eData, char *pchDataStringOut,
    int cchDataStringOut) {
	TRACE_FUNCTION_CALL();
	return false;
}


S_API ISteamRemoteStorage *SteamAPI_SteamRemoteStorage_v016() {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API bool SteamAPI_ISteamRemoteStorage_FileWrite(ISteamRemoteStorage *self,
                                                  const char *pchFile,
                                                  const void *pvData,
                                                  int32 cubData) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API int32 SteamAPI_ISteamRemoteStorage_FileRead(ISteamRemoteStorage *self,
                                                  const char *pchFile,
                                                  void *pvData,
                                                  int32 cubDataToRead) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API SteamAPICall_t SteamAPI_ISteamRemoteStorage_FileWriteAsync(
    ISteamRemoteStorage *self, const char *pchFile, const void *pvData,
    uint32 cubData) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API SteamAPICall_t SteamAPI_ISteamRemoteStorage_FileReadAsync(
    ISteamRemoteStorage *self, const char *pchFile, uint32 nOffset,
    uint32 cubToRead) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API bool SteamAPI_ISteamRemoteStorage_FileReadAsyncComplete(
    ISteamRemoteStorage *self, SteamAPICall_t hReadCall, void *pvBuffer,
    uint32 cubToRead) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamRemoteStorage_FileForget(ISteamRemoteStorage *self,
                                                   const char *pchFile) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamRemoteStorage_FileDelete(ISteamRemoteStorage *self,
                                                   const char *pchFile) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API SteamAPICall_t SteamAPI_ISteamRemoteStorage_FileShare(
    ISteamRemoteStorage *self, const char *pchFile) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API bool SteamAPI_ISteamRemoteStorage_SetSyncPlatforms(
    ISteamRemoteStorage *self, const char *pchFile,
    ERemoteStoragePlatform eRemoteStoragePlatform) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API UGCFileWriteStreamHandle_t
SteamAPI_ISteamRemoteStorage_FileWriteStreamOpen(ISteamRemoteStorage *self,
                                                 const char *pchFile) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API bool SteamAPI_ISteamRemoteStorage_FileWriteStreamWriteChunk(
    ISteamRemoteStorage *self, UGCFileWriteStreamHandle_t writeHandle,
    const void *pvData, int32 cubData) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamRemoteStorage_FileWriteStreamClose(
    ISteamRemoteStorage *self, UGCFileWriteStreamHandle_t writeHandle) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamRemoteStorage_FileWriteStreamCancel(
    ISteamRemoteStorage *self, UGCFileWriteStreamHandle_t writeHandle) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamRemoteStorage_FileExists(ISteamRemoteStorage *self,
                                                   const char *pchFile) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamRemoteStorage_FilePersisted(ISteamRemoteStorage *self,
                                                      const char *pchFile) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API int32 SteamAPI_ISteamRemoteStorage_GetFileSize(ISteamRemoteStorage *self,
                                                     const char *pchFile) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API int64 SteamAPI_ISteamRemoteStorage_GetFileTimestamp(
    ISteamRemoteStorage *self, const char *pchFile) {
	TRACE_FUNCTION_CALL();
	return 0ll;
}
S_API ERemoteStoragePlatform SteamAPI_ISteamRemoteStorage_GetSyncPlatforms(
    ISteamRemoteStorage *self, const char *pchFile) {
	TRACE_FUNCTION_CALL();
	return k_ERemoteStoragePlatformNone;
}
S_API int32
SteamAPI_ISteamRemoteStorage_GetFileCount(ISteamRemoteStorage *self) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API const char *SteamAPI_ISteamRemoteStorage_GetFileNameAndSize(
    ISteamRemoteStorage *self, int iFile, int32 *pnFileSizeInBytes) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API bool SteamAPI_ISteamRemoteStorage_GetQuota(ISteamRemoteStorage *self,
                                                 uint64 *pnTotalBytes,
                                                 uint64 *puAvailableBytes) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamRemoteStorage_IsCloudEnabledForAccount(
    ISteamRemoteStorage *self) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool
SteamAPI_ISteamRemoteStorage_IsCloudEnabledForApp(ISteamRemoteStorage *self) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API void
SteamAPI_ISteamRemoteStorage_SetCloudEnabledForApp(ISteamRemoteStorage *self,
                                                   bool bEnabled) {
	TRACE_FUNCTION_CALL();
}
S_API SteamAPICall_t SteamAPI_ISteamRemoteStorage_UGCDownload(
    ISteamRemoteStorage *self, UGCHandle_t hContent, uint32 unPriority) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API bool SteamAPI_ISteamRemoteStorage_GetUGCDownloadProgress(
    ISteamRemoteStorage *self, UGCHandle_t hContent, int32 *pnBytesDownloaded,
    int32 *pnBytesExpected) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamRemoteStorage_GetUGCDetails(
    ISteamRemoteStorage *self, UGCHandle_t hContent, AppId_t *pnAppID,
    char **ppchName, int32 *pnFileSizeInBytes, CSteamID *pSteamIDOwner) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API int32 SteamAPI_ISteamRemoteStorage_UGCRead(
    ISteamRemoteStorage *self, UGCHandle_t hContent, void *pvData,
    int32 cubDataToRead, uint32 cOffset, EUGCReadAction eAction) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API int32
SteamAPI_ISteamRemoteStorage_GetCachedUGCCount(ISteamRemoteStorage *self) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API UGCHandle_t SteamAPI_ISteamRemoteStorage_GetCachedUGCHandle(
    ISteamRemoteStorage *self, int32 iCachedContent) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API SteamAPICall_t SteamAPI_ISteamRemoteStorage_PublishWorkshopFile(
    ISteamRemoteStorage *self, const char *pchFile, const char *pchPreviewFile,
    AppId_t nConsumerAppId, const char *pchTitle, const char *pchDescription,
    ERemoteStoragePublishedFileVisibility eVisibility,
    SteamParamStringArray_t *pTags, EWorkshopFileType eWorkshopFileType) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API PublishedFileUpdateHandle_t
SteamAPI_ISteamRemoteStorage_CreatePublishedFileUpdateRequest(
    ISteamRemoteStorage *self, PublishedFileId_t unPublishedFileId) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API bool SteamAPI_ISteamRemoteStorage_UpdatePublishedFileFile(
    ISteamRemoteStorage *self, PublishedFileUpdateHandle_t updateHandle,
    const char *pchFile) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamRemoteStorage_UpdatePublishedFilePreviewFile(
    ISteamRemoteStorage *self, PublishedFileUpdateHandle_t updateHandle,
    const char *pchPreviewFile) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamRemoteStorage_UpdatePublishedFileTitle(
    ISteamRemoteStorage *self, PublishedFileUpdateHandle_t updateHandle,
    const char *pchTitle) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamRemoteStorage_UpdatePublishedFileDescription(
    ISteamRemoteStorage *self, PublishedFileUpdateHandle_t updateHandle,
    const char *pchDescription) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamRemoteStorage_UpdatePublishedFileVisibility(
    ISteamRemoteStorage *self, PublishedFileUpdateHandle_t updateHandle,
    ERemoteStoragePublishedFileVisibility eVisibility) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamRemoteStorage_UpdatePublishedFileTags(
    ISteamRemoteStorage *self, PublishedFileUpdateHandle_t updateHandle,
    SteamParamStringArray_t *pTags) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API SteamAPICall_t SteamAPI_ISteamRemoteStorage_CommitPublishedFileUpdate(
    ISteamRemoteStorage *self, PublishedFileUpdateHandle_t updateHandle) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API SteamAPICall_t SteamAPI_ISteamRemoteStorage_GetPublishedFileDetails(
    ISteamRemoteStorage *self, PublishedFileId_t unPublishedFileId,
    uint32 unMaxSecondsOld) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API SteamAPICall_t SteamAPI_ISteamRemoteStorage_DeletePublishedFile(
    ISteamRemoteStorage *self, PublishedFileId_t unPublishedFileId) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API SteamAPICall_t SteamAPI_ISteamRemoteStorage_EnumerateUserPublishedFiles(
    ISteamRemoteStorage *self, uint32 unStartIndex) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API SteamAPICall_t SteamAPI_ISteamRemoteStorage_SubscribePublishedFile(
    ISteamRemoteStorage *self, PublishedFileId_t unPublishedFileId) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API SteamAPICall_t SteamAPI_ISteamRemoteStorage_EnumerateUserSubscribedFiles(
    ISteamRemoteStorage *self, uint32 unStartIndex) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API SteamAPICall_t SteamAPI_ISteamRemoteStorage_UnsubscribePublishedFile(
    ISteamRemoteStorage *self, PublishedFileId_t unPublishedFileId) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API bool SteamAPI_ISteamRemoteStorage_UpdatePublishedFileSetChangeDescription(
    ISteamRemoteStorage *self, PublishedFileUpdateHandle_t updateHandle,
    const char *pchChangeDescription) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API SteamAPICall_t SteamAPI_ISteamRemoteStorage_GetPublishedItemVoteDetails(
    ISteamRemoteStorage *self, PublishedFileId_t unPublishedFileId) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API SteamAPICall_t SteamAPI_ISteamRemoteStorage_UpdateUserPublishedItemVote(
    ISteamRemoteStorage *self, PublishedFileId_t unPublishedFileId,
    bool bVoteUp) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API SteamAPICall_t
SteamAPI_ISteamRemoteStorage_GetUserPublishedItemVoteDetails(
    ISteamRemoteStorage *self, PublishedFileId_t unPublishedFileId) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API SteamAPICall_t
SteamAPI_ISteamRemoteStorage_EnumerateUserSharedWorkshopFiles(
    ISteamRemoteStorage *self, uint64_steamid steamId, uint32 unStartIndex,
    SteamParamStringArray_t *pRequiredTags,
    SteamParamStringArray_t *pExcludedTags) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API SteamAPICall_t SteamAPI_ISteamRemoteStorage_PublishVideo(
    ISteamRemoteStorage *self, EWorkshopVideoProvider eVideoProvider,
    const char *pchVideoAccount, const char *pchVideoIdentifier,
    const char *pchPreviewFile, AppId_t nConsumerAppId, const char *pchTitle,
    const char *pchDescription,
    ERemoteStoragePublishedFileVisibility eVisibility,
    SteamParamStringArray_t *pTags) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API SteamAPICall_t SteamAPI_ISteamRemoteStorage_SetUserPublishedFileAction(
    ISteamRemoteStorage *self, PublishedFileId_t unPublishedFileId,
    EWorkshopFileAction eAction) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API SteamAPICall_t
SteamAPI_ISteamRemoteStorage_EnumeratePublishedFilesByUserAction(
    ISteamRemoteStorage *self, EWorkshopFileAction eAction,
    uint32 unStartIndex) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API SteamAPICall_t
SteamAPI_ISteamRemoteStorage_EnumeratePublishedWorkshopFiles(
    ISteamRemoteStorage *self, EWorkshopEnumerationType eEnumerationType,
    uint32 unStartIndex, uint32 unCount, uint32 unDays,
    SteamParamStringArray_t *pTags, SteamParamStringArray_t *pUserTags) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API SteamAPICall_t SteamAPI_ISteamRemoteStorage_UGCDownloadToLocation(
    ISteamRemoteStorage *self, UGCHandle_t hContent, const char *pchLocation,
    uint32 unPriority) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API int32 SteamAPI_ISteamRemoteStorage_GetLocalFileChangeCount(
    ISteamRemoteStorage *self) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API const char *SteamAPI_ISteamRemoteStorage_GetLocalFileChange(
    ISteamRemoteStorage *self, int iFile,
    ERemoteStorageLocalFileChange *pEChangeType,
    ERemoteStorageFilePathType *pEFilePathType) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API bool
SteamAPI_ISteamRemoteStorage_BeginFileWriteBatch(ISteamRemoteStorage *self) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool
SteamAPI_ISteamRemoteStorage_EndFileWriteBatch(ISteamRemoteStorage *self) {
	TRACE_FUNCTION_CALL();
	return false;
}


S_API ISteamUserStats *SteamAPI_SteamUserStats_v012() {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API bool SteamAPI_ISteamUserStats_RequestCurrentStats(ISteamUserStats *self) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamUserStats_GetStatInt32(ISteamUserStats *self,
                                                 const char *pchName,
                                                 int32 *pData) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamUserStats_GetStatFloat(ISteamUserStats *self,
                                                 const char *pchName,
                                                 float *pData) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamUserStats_SetStatInt32(ISteamUserStats *self,
                                                 const char *pchName,
                                                 int32 nData) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamUserStats_SetStatFloat(ISteamUserStats *self,
                                                 const char *pchName,
                                                 float fData) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamUserStats_UpdateAvgRateStat(ISteamUserStats *self,
                                                      const char *pchName,
                                                      float flCountThisSession,
                                                      double dSessionLength) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamUserStats_GetAchievement(ISteamUserStats *self,
                                                   const char *pchName,
                                                   bool *pbAchieved) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamUserStats_SetAchievement(ISteamUserStats *self,
                                                   const char *pchName) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamUserStats_ClearAchievement(ISteamUserStats *self,
                                                     const char *pchName) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamUserStats_GetAchievementAndUnlockTime(
    ISteamUserStats *self, const char *pchName, bool *pbAchieved,
    uint32 *punUnlockTime) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamUserStats_StoreStats(ISteamUserStats *self) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API int SteamAPI_ISteamUserStats_GetAchievementIcon(ISteamUserStats *self,
                                                      const char *pchName) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API const char *SteamAPI_ISteamUserStats_GetAchievementDisplayAttribute(
    ISteamUserStats *self, const char *pchName, const char *pchKey) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API bool SteamAPI_ISteamUserStats_IndicateAchievementProgress(
    ISteamUserStats *self, const char *pchName, uint32 nCurProgress,
    uint32 nMaxProgress) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API uint32
SteamAPI_ISteamUserStats_GetNumAchievements(ISteamUserStats *self) {
	TRACE_FUNCTION_CALL();
	return 0u;
}
S_API const char *
SteamAPI_ISteamUserStats_GetAchievementName(ISteamUserStats *self,
                                            uint32 iAchievement) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API SteamAPICall_t SteamAPI_ISteamUserStats_RequestUserStats(
    ISteamUserStats *self, uint64_steamid steamIDUser) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API bool SteamAPI_ISteamUserStats_GetUserStatInt32(ISteamUserStats *self,
                                                     uint64_steamid steamIDUser,
                                                     const char *pchName,
                                                     int32 *pData) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamUserStats_GetUserStatFloat(ISteamUserStats *self,
                                                     uint64_steamid steamIDUser,
                                                     const char *pchName,
                                                     float *pData) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamUserStats_GetUserAchievement(
    ISteamUserStats *self, uint64_steamid steamIDUser, const char *pchName,
    bool *pbAchieved) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamUserStats_GetUserAchievementAndUnlockTime(
    ISteamUserStats *self, uint64_steamid steamIDUser, const char *pchName,
    bool *pbAchieved, uint32 *punUnlockTime) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamUserStats_ResetAllStats(ISteamUserStats *self,
                                                  bool bAchievementsToo) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API SteamAPICall_t SteamAPI_ISteamUserStats_FindOrCreateLeaderboard(
    ISteamUserStats *self, const char *pchLeaderboardName,
    ELeaderboardSortMethod eLeaderboardSortMethod,
    ELeaderboardDisplayType eLeaderboardDisplayType) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API SteamAPICall_t SteamAPI_ISteamUserStats_FindLeaderboard(
    ISteamUserStats *self, const char *pchLeaderboardName) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API const char *SteamAPI_ISteamUserStats_GetLeaderboardName(
    ISteamUserStats *self, SteamLeaderboard_t hSteamLeaderboard) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API int SteamAPI_ISteamUserStats_GetLeaderboardEntryCount(
    ISteamUserStats *self, SteamLeaderboard_t hSteamLeaderboard) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API ELeaderboardSortMethod SteamAPI_ISteamUserStats_GetLeaderboardSortMethod(
    ISteamUserStats *self, SteamLeaderboard_t hSteamLeaderboard) {
	TRACE_FUNCTION_CALL();
	return k_ELeaderboardSortMethodNone;
}
S_API ELeaderboardDisplayType
SteamAPI_ISteamUserStats_GetLeaderboardDisplayType(
    ISteamUserStats *self, SteamLeaderboard_t hSteamLeaderboard) {
	TRACE_FUNCTION_CALL();
	return k_ELeaderboardDisplayTypeNone;
}
S_API SteamAPICall_t SteamAPI_ISteamUserStats_DownloadLeaderboardEntries(
    ISteamUserStats *self, SteamLeaderboard_t hSteamLeaderboard,
    ELeaderboardDataRequest eLeaderboardDataRequest, int nRangeStart,
    int nRangeEnd) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API SteamAPICall_t
SteamAPI_ISteamUserStats_DownloadLeaderboardEntriesForUsers(
    ISteamUserStats *self, SteamLeaderboard_t hSteamLeaderboard,
    CSteamID *prgUsers, int cUsers) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API bool SteamAPI_ISteamUserStats_GetDownloadedLeaderboardEntry(
    ISteamUserStats *self, SteamLeaderboardEntries_t hSteamLeaderboardEntries,
    int index, LeaderboardEntry_t *pLeaderboardEntry, int32 *pDetails,
    int cDetailsMax) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API SteamAPICall_t SteamAPI_ISteamUserStats_UploadLeaderboardScore(
    ISteamUserStats *self, SteamLeaderboard_t hSteamLeaderboard,
    ELeaderboardUploadScoreMethod eLeaderboardUploadScoreMethod, int32 nScore,
    const int32 *pScoreDetails, int cScoreDetailsCount) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API SteamAPICall_t SteamAPI_ISteamUserStats_AttachLeaderboardUGC(
    ISteamUserStats *self, SteamLeaderboard_t hSteamLeaderboard,
    UGCHandle_t hUGC) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API SteamAPICall_t
SteamAPI_ISteamUserStats_GetNumberOfCurrentPlayers(ISteamUserStats *self) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API SteamAPICall_t
SteamAPI_ISteamUserStats_RequestGlobalAchievementPercentages(
    ISteamUserStats *self) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API int SteamAPI_ISteamUserStats_GetMostAchievedAchievementInfo(
    ISteamUserStats *self, char *pchName, uint32 unNameBufLen,
    float *pflPercent, bool *pbAchieved) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API int SteamAPI_ISteamUserStats_GetNextMostAchievedAchievementInfo(
    ISteamUserStats *self, int iIteratorPrevious, char *pchName,
    uint32 unNameBufLen, float *pflPercent, bool *pbAchieved) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API bool SteamAPI_ISteamUserStats_GetAchievementAchievedPercent(
    ISteamUserStats *self, const char *pchName, float *pflPercent) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API SteamAPICall_t SteamAPI_ISteamUserStats_RequestGlobalStats(
    ISteamUserStats *self, int nHistoryDays) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API bool SteamAPI_ISteamUserStats_GetGlobalStatInt64(ISteamUserStats *self,
                                                       const char *pchStatName,
                                                       int64 *pData) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamUserStats_GetGlobalStatDouble(ISteamUserStats *self,
                                                        const char *pchStatName,
                                                        double *pData) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API int32 SteamAPI_ISteamUserStats_GetGlobalStatHistoryInt64(
    ISteamUserStats *self, const char *pchStatName, int64 *pData,
    uint32 cubData) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API int32 SteamAPI_ISteamUserStats_GetGlobalStatHistoryDouble(
    ISteamUserStats *self, const char *pchStatName, double *pData,
    uint32 cubData) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API bool SteamAPI_ISteamUserStats_GetAchievementProgressLimitsInt32(
    ISteamUserStats *self, const char *pchName, int32 *pnMinProgress,
    int32 *pnMaxProgress) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamUserStats_GetAchievementProgressLimitsFloat(
    ISteamUserStats *self, const char *pchName, float *pfMinProgress,
    float *pfMaxProgress) {
	TRACE_FUNCTION_CALL();
	return false;
}


S_API ISteamApps *SteamAPI_SteamApps_v008() {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API bool SteamAPI_ISteamApps_BIsSubscribed(ISteamApps *self) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamApps_BIsLowViolence(ISteamApps *self) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamApps_BIsCybercafe(ISteamApps *self) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamApps_BIsVACBanned(ISteamApps *self) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API const char *SteamAPI_ISteamApps_GetCurrentGameLanguage(ISteamApps *self) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API const char *
SteamAPI_ISteamApps_GetAvailableGameLanguages(ISteamApps *self) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API bool SteamAPI_ISteamApps_BIsSubscribedApp(ISteamApps *self,
                                                AppId_t appID) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamApps_BIsDlcInstalled(ISteamApps *self,
                                               AppId_t appID) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API uint32 SteamAPI_ISteamApps_GetEarliestPurchaseUnixTime(ISteamApps *self,
                                                             AppId_t nAppID) {
	TRACE_FUNCTION_CALL();
	return 0u;
}
S_API bool SteamAPI_ISteamApps_BIsSubscribedFromFreeWeekend(ISteamApps *self) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API int SteamAPI_ISteamApps_GetDLCCount(ISteamApps *self) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API bool SteamAPI_ISteamApps_BGetDLCDataByIndex(ISteamApps *self, int iDLC,
                                                  AppId_t *pAppID,
                                                  bool *pbAvailable,
                                                  char *pchName,
                                                  int cchNameBufferSize) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API void SteamAPI_ISteamApps_InstallDLC(ISteamApps *self, AppId_t nAppID) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamApps_UninstallDLC(ISteamApps *self, AppId_t nAppID) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamApps_RequestAppProofOfPurchaseKey(ISteamApps *self,
                                                            AppId_t nAppID) {
	TRACE_FUNCTION_CALL();
}
S_API bool SteamAPI_ISteamApps_GetCurrentBetaName(ISteamApps *self,
                                                  char *pchName,
                                                  int cchNameBufferSize) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamApps_MarkContentCorrupt(ISteamApps *self,
                                                  bool bMissingFilesOnly) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API uint32 SteamAPI_ISteamApps_GetInstalledDepots(ISteamApps *self,
                                                    AppId_t appID,
                                                    DepotId_t *pvecDepots,
                                                    uint32 cMaxDepots) {
	TRACE_FUNCTION_CALL();
	return 0u;
}
S_API uint32 SteamAPI_ISteamApps_GetAppInstallDir(ISteamApps *self,
                                                  AppId_t appID,
                                                  char *pchFolder,
                                                  uint32 cchFolderBufferSize) {
	TRACE_FUNCTION_CALL();
	return 0u;
}
S_API bool SteamAPI_ISteamApps_BIsAppInstalled(ISteamApps *self,
                                               AppId_t appID) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API uint64_steamid SteamAPI_ISteamApps_GetAppOwner(ISteamApps *self) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API const char *SteamAPI_ISteamApps_GetLaunchQueryParam(ISteamApps *self,
                                                          const char *pchKey) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API bool
SteamAPI_ISteamApps_GetDlcDownloadProgress(ISteamApps *self, AppId_t nAppID,
                                           uint64 *punBytesDownloaded,
                                           uint64 *punBytesTotal) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API int SteamAPI_ISteamApps_GetAppBuildId(ISteamApps *self) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API void SteamAPI_ISteamApps_RequestAllProofOfPurchaseKeys(ISteamApps *self) {
	TRACE_FUNCTION_CALL();
}
S_API SteamAPICall_t
SteamAPI_ISteamApps_GetFileDetails(ISteamApps *self, const char *pszFileName) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API int SteamAPI_ISteamApps_GetLaunchCommandLine(ISteamApps *self,
                                                   char *pszCommandLine,
                                                   int cubCommandLine) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API bool
SteamAPI_ISteamApps_BIsSubscribedFromFamilySharing(ISteamApps *self) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamApps_BIsTimedTrial(ISteamApps *self,
                                             uint32 *punSecondsAllowed,
                                             uint32 *punSecondsPlayed) {
	TRACE_FUNCTION_CALL();
	return false;
}


S_API ISteamNetworking *SteamAPI_SteamNetworking_v006() {
	TRACE_FUNCTION_CALL();
	return nullptr;
}

S_API ISteamNetworking *SteamAPI_SteamGameServerNetworking_v006() {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API bool SteamAPI_ISteamNetworking_SendP2PPacket(
    ISteamNetworking *self, uint64_steamid steamIDRemote, const void *pubData,
    uint32 cubData, EP2PSend eP2PSendType, int nChannel) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamNetworking_IsP2PPacketAvailable(
    ISteamNetworking *self, uint32 *pcubMsgSize, int nChannel) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamNetworking_ReadP2PPacket(
    ISteamNetworking *self, void *pubDest, uint32 cubDest, uint32 *pcubMsgSize,
    CSteamID *psteamIDRemote, int nChannel) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamNetworking_AcceptP2PSessionWithUser(
    ISteamNetworking *self, uint64_steamid steamIDRemote) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamNetworking_CloseP2PSessionWithUser(
    ISteamNetworking *self, uint64_steamid steamIDRemote) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamNetworking_CloseP2PChannelWithUser(
    ISteamNetworking *self, uint64_steamid steamIDRemote, int nChannel) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamNetworking_GetP2PSessionState(
    ISteamNetworking *self, uint64_steamid steamIDRemote,
    P2PSessionState_t *pConnectionState) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamNetworking_AllowP2PPacketRelay(ISteamNetworking *self,
                                                         bool bAllow) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API SNetListenSocket_t SteamAPI_ISteamNetworking_CreateListenSocket(
    ISteamNetworking *self, int nVirtualP2PPort, SteamIPAddress_t nIP,
    uint16 nPort, bool bAllowUseOfPacketRelay) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API SNetSocket_t SteamAPI_ISteamNetworking_CreateP2PConnectionSocket(
    ISteamNetworking *self, uint64_steamid steamIDTarget, int nVirtualPort,
    int nTimeoutSec, bool bAllowUseOfPacketRelay) {
	TRACE_FUNCTION_CALL();
	return 0u;
}
S_API SNetSocket_t SteamAPI_ISteamNetworking_CreateConnectionSocket(
    ISteamNetworking *self, SteamIPAddress_t nIP, uint16 nPort,
    int nTimeoutSec) {
	TRACE_FUNCTION_CALL();
	return 0u;
}
S_API bool SteamAPI_ISteamNetworking_DestroySocket(ISteamNetworking *self,
                                                   SNetSocket_t hSocket,
                                                   bool bNotifyRemoteEnd) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamNetworking_DestroyListenSocket(
    ISteamNetworking *self, SNetListenSocket_t hSocket, bool bNotifyRemoteEnd) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamNetworking_SendDataOnSocket(ISteamNetworking *self,
                                                      SNetSocket_t hSocket,
                                                      void *pubData,
                                                      uint32 cubData,
                                                      bool bReliable) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamNetworking_IsDataAvailableOnSocket(
    ISteamNetworking *self, SNetSocket_t hSocket, uint32 *pcubMsgSize) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamNetworking_RetrieveDataFromSocket(
    ISteamNetworking *self, SNetSocket_t hSocket, void *pubDest, uint32 cubDest,
    uint32 *pcubMsgSize) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamNetworking_IsDataAvailable(
    ISteamNetworking *self, SNetListenSocket_t hListenSocket,
    uint32 *pcubMsgSize, SNetSocket_t *phSocket) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamNetworking_RetrieveData(
    ISteamNetworking *self, SNetListenSocket_t hListenSocket, void *pubDest,
    uint32 cubDest, uint32 *pcubMsgSize, SNetSocket_t *phSocket) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamNetworking_GetSocketInfo(
    ISteamNetworking *self, SNetSocket_t hSocket, CSteamID *pSteamIDRemote,
    int *peSocketStatus, SteamIPAddress_t *punIPRemote, uint16 *punPortRemote) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamNetworking_GetListenSocketInfo(
    ISteamNetworking *self, SNetListenSocket_t hListenSocket,
    SteamIPAddress_t *pnIP, uint16 *pnPort) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API ESNetSocketConnectionType
SteamAPI_ISteamNetworking_GetSocketConnectionType(ISteamNetworking *self,
                                                  SNetSocket_t hSocket) {
	TRACE_FUNCTION_CALL();
	return k_ESNetSocketConnectionTypeNotConnected;
}
S_API int SteamAPI_ISteamNetworking_GetMaxPacketSize(ISteamNetworking *self,
                                                     SNetSocket_t hSocket) {
	TRACE_FUNCTION_CALL();
	return 0;
}


S_API ISteamScreenshots *SteamAPI_SteamScreenshots_v003() {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API ScreenshotHandle SteamAPI_ISteamScreenshots_WriteScreenshot(
    ISteamScreenshots *self, void *pubRGB, uint32 cubRGB, int nWidth,
    int nHeight) {
	TRACE_FUNCTION_CALL();
	return 0u;
}
S_API ScreenshotHandle SteamAPI_ISteamScreenshots_AddScreenshotToLibrary(
    ISteamScreenshots *self, const char *pchFilename,
    const char *pchThumbnailFilename, int nWidth, int nHeight) {
	TRACE_FUNCTION_CALL();
	return 0u;
}
S_API void
SteamAPI_ISteamScreenshots_TriggerScreenshot(ISteamScreenshots *self) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamScreenshots_HookScreenshots(ISteamScreenshots *self,
                                                      bool bHook) {
	TRACE_FUNCTION_CALL();
}
S_API bool SteamAPI_ISteamScreenshots_SetLocation(ISteamScreenshots *self,
                                                  ScreenshotHandle hScreenshot,
                                                  const char *pchLocation) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamScreenshots_TagUser(ISteamScreenshots *self,
                                              ScreenshotHandle hScreenshot,
                                              uint64_steamid steamID) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamScreenshots_TagPublishedFile(
    ISteamScreenshots *self, ScreenshotHandle hScreenshot,
    PublishedFileId_t unPublishedFileID) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool
SteamAPI_ISteamScreenshots_IsScreenshotsHooked(ISteamScreenshots *self) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API ScreenshotHandle SteamAPI_ISteamScreenshots_AddVRScreenshotToLibrary(
    ISteamScreenshots *self, EVRScreenshotType eType, const char *pchFilename,
    const char *pchVRFilename) {
	TRACE_FUNCTION_CALL();
	return 0u;
}


S_API ISteamMusic *SteamAPI_SteamMusic_v001() {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API bool SteamAPI_ISteamMusic_BIsEnabled(ISteamMusic *self) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamMusic_BIsPlaying(ISteamMusic *self) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API AudioPlayback_Status
SteamAPI_ISteamMusic_GetPlaybackStatus(ISteamMusic *self) {
	TRACE_FUNCTION_CALL();
	return AudioPlayback_Paused;
}
S_API void SteamAPI_ISteamMusic_Play(ISteamMusic *self) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamMusic_Pause(ISteamMusic *self) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamMusic_PlayPrevious(ISteamMusic *self) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamMusic_PlayNext(ISteamMusic *self) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamMusic_SetVolume(ISteamMusic *self, float flVolume) {
	TRACE_FUNCTION_CALL();
}
S_API float SteamAPI_ISteamMusic_GetVolume(ISteamMusic *self) {
	TRACE_FUNCTION_CALL();
	return 0.0f;
}


S_API ISteamMusicRemote *SteamAPI_SteamMusicRemote_v001() {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API bool
SteamAPI_ISteamMusicRemote_RegisterSteamMusicRemote(ISteamMusicRemote *self,
                                                    const char *pchName) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool
SteamAPI_ISteamMusicRemote_DeregisterSteamMusicRemote(ISteamMusicRemote *self) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool
SteamAPI_ISteamMusicRemote_BIsCurrentMusicRemote(ISteamMusicRemote *self) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool
SteamAPI_ISteamMusicRemote_BActivationSuccess(ISteamMusicRemote *self,
                                              bool bValue) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool
SteamAPI_ISteamMusicRemote_SetDisplayName(ISteamMusicRemote *self,
                                          const char *pchDisplayName) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamMusicRemote_SetPNGIcon_64x64(ISteamMusicRemote *self,
                                                       void *pvBuffer,
                                                       uint32 cbBufferLength) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool
SteamAPI_ISteamMusicRemote_EnablePlayPrevious(ISteamMusicRemote *self,
                                              bool bValue) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamMusicRemote_EnablePlayNext(ISteamMusicRemote *self,
                                                     bool bValue) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamMusicRemote_EnableShuffled(ISteamMusicRemote *self,
                                                     bool bValue) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamMusicRemote_EnableLooped(ISteamMusicRemote *self,
                                                   bool bValue) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamMusicRemote_EnableQueue(ISteamMusicRemote *self,
                                                  bool bValue) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamMusicRemote_EnablePlaylists(ISteamMusicRemote *self,
                                                      bool bValue) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool
SteamAPI_ISteamMusicRemote_UpdatePlaybackStatus(ISteamMusicRemote *self,
                                                AudioPlayback_Status nStatus) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamMusicRemote_UpdateShuffled(ISteamMusicRemote *self,
                                                     bool bValue) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamMusicRemote_UpdateLooped(ISteamMusicRemote *self,
                                                   bool bValue) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamMusicRemote_UpdateVolume(ISteamMusicRemote *self,
                                                   float flValue) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool
SteamAPI_ISteamMusicRemote_CurrentEntryWillChange(ISteamMusicRemote *self) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool
SteamAPI_ISteamMusicRemote_CurrentEntryIsAvailable(ISteamMusicRemote *self,
                                                   bool bAvailable) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool
SteamAPI_ISteamMusicRemote_UpdateCurrentEntryText(ISteamMusicRemote *self,
                                                  const char *pchText) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamMusicRemote_UpdateCurrentEntryElapsedSeconds(
    ISteamMusicRemote *self, int nValue) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamMusicRemote_UpdateCurrentEntryCoverArt(
    ISteamMusicRemote *self, void *pvBuffer, uint32 cbBufferLength) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool
SteamAPI_ISteamMusicRemote_CurrentEntryDidChange(ISteamMusicRemote *self) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamMusicRemote_QueueWillChange(ISteamMusicRemote *self) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool
SteamAPI_ISteamMusicRemote_ResetQueueEntries(ISteamMusicRemote *self) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamMusicRemote_SetQueueEntry(ISteamMusicRemote *self,
                                                    int nID, int nPosition,
                                                    const char *pchEntryText) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool
SteamAPI_ISteamMusicRemote_SetCurrentQueueEntry(ISteamMusicRemote *self,
                                                int nID) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamMusicRemote_QueueDidChange(ISteamMusicRemote *self) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool
SteamAPI_ISteamMusicRemote_PlaylistWillChange(ISteamMusicRemote *self) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool
SteamAPI_ISteamMusicRemote_ResetPlaylistEntries(ISteamMusicRemote *self) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamMusicRemote_SetPlaylistEntry(
    ISteamMusicRemote *self, int nID, int nPosition, const char *pchEntryText) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool
SteamAPI_ISteamMusicRemote_SetCurrentPlaylistEntry(ISteamMusicRemote *self,
                                                   int nID) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool
SteamAPI_ISteamMusicRemote_PlaylistDidChange(ISteamMusicRemote *self) {
	TRACE_FUNCTION_CALL();
	return false;
}


S_API ISteamHTTP *SteamAPI_SteamHTTP_v003() {
	TRACE_FUNCTION_CALL();
	return nullptr;
}

S_API ISteamHTTP *SteamAPI_SteamGameServerHTTP_v003() {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API HTTPRequestHandle SteamAPI_ISteamHTTP_CreateHTTPRequest(
    ISteamHTTP *self, EHTTPMethod eHTTPRequestMethod,
    const char *pchAbsoluteURL) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API bool SteamAPI_ISteamHTTP_SetHTTPRequestContextValue(
    ISteamHTTP *self, HTTPRequestHandle hRequest, uint64 ulContextValue) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamHTTP_SetHTTPRequestNetworkActivityTimeout(
    ISteamHTTP *self, HTTPRequestHandle hRequest, uint32 unTimeoutSeconds) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamHTTP_SetHTTPRequestHeaderValue(
    ISteamHTTP *self, HTTPRequestHandle hRequest, const char *pchHeaderName,
    const char *pchHeaderValue) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamHTTP_SetHTTPRequestGetOrPostParameter(
    ISteamHTTP *self, HTTPRequestHandle hRequest, const char *pchParamName,
    const char *pchParamValue) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamHTTP_SendHTTPRequest(ISteamHTTP *self,
                                               HTTPRequestHandle hRequest,
                                               SteamAPICall_t *pCallHandle) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamHTTP_SendHTTPRequestAndStreamResponse(
    ISteamHTTP *self, HTTPRequestHandle hRequest, SteamAPICall_t *pCallHandle) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamHTTP_DeferHTTPRequest(ISteamHTTP *self,
                                                HTTPRequestHandle hRequest) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool
SteamAPI_ISteamHTTP_PrioritizeHTTPRequest(ISteamHTTP *self,
                                          HTTPRequestHandle hRequest) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamHTTP_GetHTTPResponseHeaderSize(
    ISteamHTTP *self, HTTPRequestHandle hRequest, const char *pchHeaderName,
    uint32 *unResponseHeaderSize) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamHTTP_GetHTTPResponseHeaderValue(
    ISteamHTTP *self, HTTPRequestHandle hRequest, const char *pchHeaderName,
    uint8 *pHeaderValueBuffer, uint32 unBufferSize) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamHTTP_GetHTTPResponseBodySize(
    ISteamHTTP *self, HTTPRequestHandle hRequest, uint32 *unBodySize) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamHTTP_GetHTTPResponseBodyData(
    ISteamHTTP *self, HTTPRequestHandle hRequest, uint8 *pBodyDataBuffer,
    uint32 unBufferSize) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamHTTP_GetHTTPStreamingResponseBodyData(
    ISteamHTTP *self, HTTPRequestHandle hRequest, uint32 cOffset,
    uint8 *pBodyDataBuffer, uint32 unBufferSize) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamHTTP_ReleaseHTTPRequest(ISteamHTTP *self,
                                                  HTTPRequestHandle hRequest) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamHTTP_GetHTTPDownloadProgressPct(
    ISteamHTTP *self, HTTPRequestHandle hRequest, float *pflPercentOut) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamHTTP_SetHTTPRequestRawPostBody(
    ISteamHTTP *self, HTTPRequestHandle hRequest, const char *pchContentType,
    uint8 *pubBody, uint32 unBodyLen) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API HTTPCookieContainerHandle SteamAPI_ISteamHTTP_CreateCookieContainer(
    ISteamHTTP *self, bool bAllowResponsesToModify) {
	TRACE_FUNCTION_CALL();
	return 0u;
}
S_API bool SteamAPI_ISteamHTTP_ReleaseCookieContainer(
    ISteamHTTP *self, HTTPCookieContainerHandle hCookieContainer) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamHTTP_SetCookie(
    ISteamHTTP *self, HTTPCookieContainerHandle hCookieContainer,
    const char *pchHost, const char *pchUrl, const char *pchCookie) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamHTTP_SetHTTPRequestCookieContainer(
    ISteamHTTP *self, HTTPRequestHandle hRequest,
    HTTPCookieContainerHandle hCookieContainer) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool
SteamAPI_ISteamHTTP_SetHTTPRequestUserAgentInfo(ISteamHTTP *self,
                                                HTTPRequestHandle hRequest,
                                                const char *pchUserAgentInfo) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamHTTP_SetHTTPRequestRequiresVerifiedCertificate(
    ISteamHTTP *self, HTTPRequestHandle hRequest,
    bool bRequireVerifiedCertificate) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamHTTP_SetHTTPRequestAbsoluteTimeoutMS(
    ISteamHTTP *self, HTTPRequestHandle hRequest, uint32 unMilliseconds) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamHTTP_GetHTTPRequestWasTimedOut(
    ISteamHTTP *self, HTTPRequestHandle hRequest, bool *pbWasTimedOut) {
	TRACE_FUNCTION_CALL();
	return false;
}


S_API ISteamInput *SteamAPI_SteamInput_v006() {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API bool SteamAPI_ISteamInput_Init(ISteamInput *self,
                                     bool bExplicitlyCallRunFrame) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamInput_Shutdown(ISteamInput *self) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamInput_SetInputActionManifestFilePath(
    ISteamInput *self, const char *pchInputActionManifestAbsolutePath) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API void SteamAPI_ISteamInput_RunFrame(ISteamInput *self,
                                         bool bReservedValue) {
	TRACE_FUNCTION_CALL();
}
S_API bool SteamAPI_ISteamInput_BWaitForData(ISteamInput *self,
                                             bool bWaitForever,
                                             uint32 unTimeout) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamInput_BNewDataAvailable(ISteamInput *self) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API int
SteamAPI_ISteamInput_GetConnectedControllers(ISteamInput *self,
                                             InputHandle_t *handlesOut) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API void SteamAPI_ISteamInput_EnableDeviceCallbacks(ISteamInput *self) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamInput_EnableActionEventCallbacks(
    ISteamInput *self, SteamInputActionEventCallbackPointer pCallback) {
	TRACE_FUNCTION_CALL();
}
S_API InputActionSetHandle_t SteamAPI_ISteamInput_GetActionSetHandle(
    ISteamInput *self, const char *pszActionSetName) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API void
SteamAPI_ISteamInput_ActivateActionSet(ISteamInput *self,
                                       InputHandle_t inputHandle,
                                       InputActionSetHandle_t actionSetHandle) {
	TRACE_FUNCTION_CALL();
}
S_API InputActionSetHandle_t SteamAPI_ISteamInput_GetCurrentActionSet(
    ISteamInput *self, InputHandle_t inputHandle) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API void SteamAPI_ISteamInput_ActivateActionSetLayer(
    ISteamInput *self, InputHandle_t inputHandle,
    InputActionSetHandle_t actionSetLayerHandle) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamInput_DeactivateActionSetLayer(
    ISteamInput *self, InputHandle_t inputHandle,
    InputActionSetHandle_t actionSetLayerHandle) {
	TRACE_FUNCTION_CALL();
}
S_API void
SteamAPI_ISteamInput_DeactivateAllActionSetLayers(ISteamInput *self,
                                                  InputHandle_t inputHandle) {
	TRACE_FUNCTION_CALL();
}
S_API int SteamAPI_ISteamInput_GetActiveActionSetLayers(
    ISteamInput *self, InputHandle_t inputHandle,
    InputActionSetHandle_t *handlesOut) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API InputDigitalActionHandle_t SteamAPI_ISteamInput_GetDigitalActionHandle(
    ISteamInput *self, const char *pszActionName) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API InputDigitalActionData_t SteamAPI_ISteamInput_GetDigitalActionData(
    ISteamInput *self, InputHandle_t inputHandle,
    InputDigitalActionHandle_t digitalActionHandle) {
	TRACE_FUNCTION_CALL();
	return {};
}
S_API int SteamAPI_ISteamInput_GetDigitalActionOrigins(
    ISteamInput *self, InputHandle_t inputHandle,
    InputActionSetHandle_t actionSetHandle,
    InputDigitalActionHandle_t digitalActionHandle,
    EInputActionOrigin *originsOut) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API const char *SteamAPI_ISteamInput_GetStringForDigitalActionName(
    ISteamInput *self, InputDigitalActionHandle_t eActionHandle) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API InputAnalogActionHandle_t SteamAPI_ISteamInput_GetAnalogActionHandle(
    ISteamInput *self, const char *pszActionName) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API InputAnalogActionData_t SteamAPI_ISteamInput_GetAnalogActionData(
    ISteamInput *self, InputHandle_t inputHandle,
    InputAnalogActionHandle_t analogActionHandle) {
	TRACE_FUNCTION_CALL();
	return {};
}
S_API int SteamAPI_ISteamInput_GetAnalogActionOrigins(
    ISteamInput *self, InputHandle_t inputHandle,
    InputActionSetHandle_t actionSetHandle,
    InputAnalogActionHandle_t analogActionHandle,
    EInputActionOrigin *originsOut) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API const char *SteamAPI_ISteamInput_GetGlyphPNGForActionOrigin(
    ISteamInput *self, EInputActionOrigin eOrigin, ESteamInputGlyphSize eSize,
    uint32 unFlags) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API const char *SteamAPI_ISteamInput_GetGlyphSVGForActionOrigin(
    ISteamInput *self, EInputActionOrigin eOrigin, uint32 unFlags) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API const char *SteamAPI_ISteamInput_GetGlyphForActionOrigin_Legacy(
    ISteamInput *self, EInputActionOrigin eOrigin) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API const char *
SteamAPI_ISteamInput_GetStringForActionOrigin(ISteamInput *self,
                                              EInputActionOrigin eOrigin) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API const char *SteamAPI_ISteamInput_GetStringForAnalogActionName(
    ISteamInput *self, InputAnalogActionHandle_t eActionHandle) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API void SteamAPI_ISteamInput_StopAnalogActionMomentum(
    ISteamInput *self, InputHandle_t inputHandle,
    InputAnalogActionHandle_t eAction) {
	TRACE_FUNCTION_CALL();
}
S_API InputMotionData_t SteamAPI_ISteamInput_GetMotionData(
    ISteamInput *self, InputHandle_t inputHandle) {
	TRACE_FUNCTION_CALL();
	return {};
}
S_API void SteamAPI_ISteamInput_TriggerVibration(ISteamInput *self,
                                                 InputHandle_t inputHandle,
                                                 unsigned short usLeftSpeed,
                                                 unsigned short usRightSpeed) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamInput_TriggerVibrationExtended(
    ISteamInput *self, InputHandle_t inputHandle, unsigned short usLeftSpeed,
    unsigned short usRightSpeed, unsigned short usLeftTriggerSpeed,
    unsigned short usRightTriggerSpeed) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamInput_TriggerSimpleHapticEvent(
    ISteamInput *self, InputHandle_t inputHandle,
    EControllerHapticLocation eHapticLocation, uint8 nIntensity, char nGainDB,
    uint8 nOtherIntensity, char nOtherGainDB) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamInput_SetLEDColor(ISteamInput *self,
                                            InputHandle_t inputHandle,
                                            uint8 nColorR, uint8 nColorG,
                                            uint8 nColorB,
                                            unsigned int nFlags) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamInput_Legacy_TriggerHapticPulse(
    ISteamInput *self, InputHandle_t inputHandle,
    ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamInput_Legacy_TriggerRepeatedHapticPulse(
    ISteamInput *self, InputHandle_t inputHandle,
    ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec,
    unsigned short usOffMicroSec, unsigned short unRepeat,
    unsigned int nFlags) {
	TRACE_FUNCTION_CALL();
}
S_API bool SteamAPI_ISteamInput_ShowBindingPanel(ISteamInput *self,
                                                 InputHandle_t inputHandle) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API ESteamInputType SteamAPI_ISteamInput_GetInputTypeForHandle(
    ISteamInput *self, InputHandle_t inputHandle) {
	TRACE_FUNCTION_CALL();
	return k_ESteamInputType_Unknown;
}
S_API InputHandle_t SteamAPI_ISteamInput_GetControllerForGamepadIndex(
    ISteamInput *self, int nIndex) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API int
SteamAPI_ISteamInput_GetGamepadIndexForController(ISteamInput *self,
                                                  InputHandle_t ulinputHandle) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API const char *
SteamAPI_ISteamInput_GetStringForXboxOrigin(ISteamInput *self,
                                            EXboxOrigin eOrigin) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API const char *
SteamAPI_ISteamInput_GetGlyphForXboxOrigin(ISteamInput *self,
                                           EXboxOrigin eOrigin) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API EInputActionOrigin SteamAPI_ISteamInput_GetActionOriginFromXboxOrigin(
    ISteamInput *self, InputHandle_t inputHandle, EXboxOrigin eOrigin) {
	TRACE_FUNCTION_CALL();
	return k_EInputActionOrigin_None;
}
S_API EInputActionOrigin SteamAPI_ISteamInput_TranslateActionOrigin(
    ISteamInput *self, ESteamInputType eDestinationInputType,
    EInputActionOrigin eSourceOrigin) {
	TRACE_FUNCTION_CALL();
	return k_EInputActionOrigin_None;
}
S_API bool SteamAPI_ISteamInput_GetDeviceBindingRevision(
    ISteamInput *self, InputHandle_t inputHandle, int *pMajor, int *pMinor) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API uint32 SteamAPI_ISteamInput_GetRemotePlaySessionID(
    ISteamInput *self, InputHandle_t inputHandle) {
	TRACE_FUNCTION_CALL();
	return 0u;
}
S_API uint16
SteamAPI_ISteamInput_GetSessionInputConfigurationSettings(ISteamInput *self) {
	TRACE_FUNCTION_CALL();
	return 0u;
}


S_API ISteamController *SteamAPI_SteamController_v008() {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API bool SteamAPI_ISteamController_Init(ISteamController *self) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamController_Shutdown(ISteamController *self) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API void SteamAPI_ISteamController_RunFrame(ISteamController *self) {
	TRACE_FUNCTION_CALL();
}
S_API int SteamAPI_ISteamController_GetConnectedControllers(
    ISteamController *self, ControllerHandle_t *handlesOut) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API ControllerActionSetHandle_t SteamAPI_ISteamController_GetActionSetHandle(
    ISteamController *self, const char *pszActionSetName) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API void SteamAPI_ISteamController_ActivateActionSet(
    ISteamController *self, ControllerHandle_t controllerHandle,
    ControllerActionSetHandle_t actionSetHandle) {
	TRACE_FUNCTION_CALL();
}
S_API ControllerActionSetHandle_t SteamAPI_ISteamController_GetCurrentActionSet(
    ISteamController *self, ControllerHandle_t controllerHandle) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API void SteamAPI_ISteamController_ActivateActionSetLayer(
    ISteamController *self, ControllerHandle_t controllerHandle,
    ControllerActionSetHandle_t actionSetLayerHandle) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamController_DeactivateActionSetLayer(
    ISteamController *self, ControllerHandle_t controllerHandle,
    ControllerActionSetHandle_t actionSetLayerHandle) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamController_DeactivateAllActionSetLayers(
    ISteamController *self, ControllerHandle_t controllerHandle) {
	TRACE_FUNCTION_CALL();
}
S_API int SteamAPI_ISteamController_GetActiveActionSetLayers(
    ISteamController *self, ControllerHandle_t controllerHandle,
    ControllerActionSetHandle_t *handlesOut) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API ControllerDigitalActionHandle_t
SteamAPI_ISteamController_GetDigitalActionHandle(ISteamController *self,
                                                 const char *pszActionName) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API InputDigitalActionData_t SteamAPI_ISteamController_GetDigitalActionData(
    ISteamController *self, ControllerHandle_t controllerHandle,
    ControllerDigitalActionHandle_t digitalActionHandle) {
	TRACE_FUNCTION_CALL();
	return {};
}
S_API int SteamAPI_ISteamController_GetDigitalActionOrigins(
    ISteamController *self, ControllerHandle_t controllerHandle,
    ControllerActionSetHandle_t actionSetHandle,
    ControllerDigitalActionHandle_t digitalActionHandle,
    EControllerActionOrigin *originsOut) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API ControllerAnalogActionHandle_t
SteamAPI_ISteamController_GetAnalogActionHandle(ISteamController *self,
                                                const char *pszActionName) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API InputAnalogActionData_t SteamAPI_ISteamController_GetAnalogActionData(
    ISteamController *self, ControllerHandle_t controllerHandle,
    ControllerAnalogActionHandle_t analogActionHandle) {
	TRACE_FUNCTION_CALL();
	return {};
}
S_API int SteamAPI_ISteamController_GetAnalogActionOrigins(
    ISteamController *self, ControllerHandle_t controllerHandle,
    ControllerActionSetHandle_t actionSetHandle,
    ControllerAnalogActionHandle_t analogActionHandle,
    EControllerActionOrigin *originsOut) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API const char *SteamAPI_ISteamController_GetGlyphForActionOrigin(
    ISteamController *self, EControllerActionOrigin eOrigin) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API const char *SteamAPI_ISteamController_GetStringForActionOrigin(
    ISteamController *self, EControllerActionOrigin eOrigin) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API void SteamAPI_ISteamController_StopAnalogActionMomentum(
    ISteamController *self, ControllerHandle_t controllerHandle,
    ControllerAnalogActionHandle_t eAction) {
	TRACE_FUNCTION_CALL();
}
S_API InputMotionData_t SteamAPI_ISteamController_GetMotionData(
    ISteamController *self, ControllerHandle_t controllerHandle) {
	TRACE_FUNCTION_CALL();
	return {};
}
S_API void SteamAPI_ISteamController_TriggerHapticPulse(
    ISteamController *self, ControllerHandle_t controllerHandle,
    ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamController_TriggerRepeatedHapticPulse(
    ISteamController *self, ControllerHandle_t controllerHandle,
    ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec,
    unsigned short usOffMicroSec, unsigned short unRepeat,
    unsigned int nFlags) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamController_TriggerVibration(
    ISteamController *self, ControllerHandle_t controllerHandle,
    unsigned short usLeftSpeed, unsigned short usRightSpeed) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamController_SetLEDColor(
    ISteamController *self, ControllerHandle_t controllerHandle, uint8 nColorR,
    uint8 nColorG, uint8 nColorB, unsigned int nFlags) {
	TRACE_FUNCTION_CALL();
}
S_API bool SteamAPI_ISteamController_ShowBindingPanel(
    ISteamController *self, ControllerHandle_t controllerHandle) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API ESteamInputType SteamAPI_ISteamController_GetInputTypeForHandle(
    ISteamController *self, ControllerHandle_t controllerHandle) {
	TRACE_FUNCTION_CALL();
	return k_ESteamInputType_XBox360Controller;
}
S_API ControllerHandle_t SteamAPI_ISteamController_GetControllerForGamepadIndex(
    ISteamController *self, int nIndex) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API int SteamAPI_ISteamController_GetGamepadIndexForController(
    ISteamController *self, ControllerHandle_t ulControllerHandle) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API const char *
SteamAPI_ISteamController_GetStringForXboxOrigin(ISteamController *self,
                                                 EXboxOrigin eOrigin) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API const char *
SteamAPI_ISteamController_GetGlyphForXboxOrigin(ISteamController *self,
                                                EXboxOrigin eOrigin) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API EControllerActionOrigin
SteamAPI_ISteamController_GetActionOriginFromXboxOrigin(
    ISteamController *self, ControllerHandle_t controllerHandle,
    EXboxOrigin eOrigin) {
	TRACE_FUNCTION_CALL();
	return k_EControllerActionOrigin_None;
}
S_API EControllerActionOrigin SteamAPI_ISteamController_TranslateActionOrigin(
    ISteamController *self, ESteamInputType eDestinationInputType,
    EControllerActionOrigin eSourceOrigin) {
	TRACE_FUNCTION_CALL();
	return k_EControllerActionOrigin_None;
}
S_API bool SteamAPI_ISteamController_GetControllerBindingRevision(
    ISteamController *self, ControllerHandle_t controllerHandle, int *pMajor,
    int *pMinor) {
	TRACE_FUNCTION_CALL();
	return false;
}


S_API ISteamUGC *SteamAPI_SteamUGC_v016() {
	TRACE_FUNCTION_CALL();
	return nullptr;
}

S_API ISteamUGC *SteamAPI_SteamGameServerUGC_v016() {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API UGCQueryHandle_t SteamAPI_ISteamUGC_CreateQueryUserUGCRequest(
    ISteamUGC *self, AccountID_t unAccountID, EUserUGCList eListType,
    EUGCMatchingUGCType eMatchingUGCType, EUserUGCListSortOrder eSortOrder,
    AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API UGCQueryHandle_t SteamAPI_ISteamUGC_CreateQueryAllUGCRequestPage(
    ISteamUGC *self, EUGCQuery eQueryType,
    EUGCMatchingUGCType eMatchingeMatchingUGCTypeFileType,
    AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API UGCQueryHandle_t SteamAPI_ISteamUGC_CreateQueryAllUGCRequestCursor(
    ISteamUGC *self, EUGCQuery eQueryType,
    EUGCMatchingUGCType eMatchingeMatchingUGCTypeFileType,
    AppId_t nCreatorAppID, AppId_t nConsumerAppID, const char *pchCursor) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API UGCQueryHandle_t SteamAPI_ISteamUGC_CreateQueryUGCDetailsRequest(
    ISteamUGC *self, PublishedFileId_t *pvecPublishedFileID,
    uint32 unNumPublishedFileIDs) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API SteamAPICall_t SteamAPI_ISteamUGC_SendQueryUGCRequest(
    ISteamUGC *self, UGCQueryHandle_t handle) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API bool SteamAPI_ISteamUGC_GetQueryUGCResult(ISteamUGC *self,
                                                UGCQueryHandle_t handle,
                                                uint32 index,
                                                SteamUGCDetails_t *pDetails) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API uint32 SteamAPI_ISteamUGC_GetQueryUGCNumTags(ISteamUGC *self,
                                                   UGCQueryHandle_t handle,
                                                   uint32 index) {
	TRACE_FUNCTION_CALL();
	return 0u;
}
S_API bool SteamAPI_ISteamUGC_GetQueryUGCTag(ISteamUGC *self,
                                             UGCQueryHandle_t handle,
                                             uint32 index, uint32 indexTag,
                                             char *pchValue,
                                             uint32 cchValueSize) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamUGC_GetQueryUGCTagDisplayName(
    ISteamUGC *self, UGCQueryHandle_t handle, uint32 index, uint32 indexTag,
    char *pchValue, uint32 cchValueSize) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamUGC_GetQueryUGCPreviewURL(ISteamUGC *self,
                                                    UGCQueryHandle_t handle,
                                                    uint32 index, char *pchURL,
                                                    uint32 cchURLSize) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamUGC_GetQueryUGCMetadata(ISteamUGC *self,
                                                  UGCQueryHandle_t handle,
                                                  uint32 index,
                                                  char *pchMetadata,
                                                  uint32 cchMetadatasize) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamUGC_GetQueryUGCChildren(
    ISteamUGC *self, UGCQueryHandle_t handle, uint32 index,
    PublishedFileId_t *pvecPublishedFileID, uint32 cMaxEntries) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamUGC_GetQueryUGCStatistic(ISteamUGC *self,
                                                   UGCQueryHandle_t handle,
                                                   uint32 index,
                                                   EItemStatistic eStatType,
                                                   uint64 *pStatValue) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API uint32 SteamAPI_ISteamUGC_GetQueryUGCNumAdditionalPreviews(
    ISteamUGC *self, UGCQueryHandle_t handle, uint32 index) {
	TRACE_FUNCTION_CALL();
	return 0u;
}
S_API bool SteamAPI_ISteamUGC_GetQueryUGCAdditionalPreview(
    ISteamUGC *self, UGCQueryHandle_t handle, uint32 index, uint32 previewIndex,
    char *pchURLOrVideoID, uint32 cchURLSize, char *pchOriginalFileName,
    uint32 cchOriginalFileNameSize, EItemPreviewType *pPreviewType) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API uint32 SteamAPI_ISteamUGC_GetQueryUGCNumKeyValueTags(
    ISteamUGC *self, UGCQueryHandle_t handle, uint32 index) {
	TRACE_FUNCTION_CALL();
	return 0u;
}
S_API bool SteamAPI_ISteamUGC_GetQueryUGCKeyValueTag(
    ISteamUGC *self, UGCQueryHandle_t handle, uint32 index,
    uint32 keyValueTagIndex, char *pchKey, uint32 cchKeySize, char *pchValue,
    uint32 cchValueSize) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamUGC_GetQueryFirstUGCKeyValueTag(
    ISteamUGC *self, UGCQueryHandle_t handle, uint32 index, const char *pchKey,
    char *pchValue, uint32 cchValueSize) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamUGC_ReleaseQueryUGCRequest(ISteamUGC *self,
                                                     UGCQueryHandle_t handle) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamUGC_AddRequiredTag(ISteamUGC *self,
                                             UGCQueryHandle_t handle,
                                             const char *pTagName) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamUGC_AddRequiredTagGroup(
    ISteamUGC *self, UGCQueryHandle_t handle,
    const SteamParamStringArray_t *pTagGroups) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamUGC_AddExcludedTag(ISteamUGC *self,
                                             UGCQueryHandle_t handle,
                                             const char *pTagName) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamUGC_SetReturnOnlyIDs(ISteamUGC *self,
                                               UGCQueryHandle_t handle,
                                               bool bReturnOnlyIDs) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamUGC_SetReturnKeyValueTags(ISteamUGC *self,
                                                    UGCQueryHandle_t handle,
                                                    bool bReturnKeyValueTags) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamUGC_SetReturnLongDescription(
    ISteamUGC *self, UGCQueryHandle_t handle, bool bReturnLongDescription) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamUGC_SetReturnMetadata(ISteamUGC *self,
                                                UGCQueryHandle_t handle,
                                                bool bReturnMetadata) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamUGC_SetReturnChildren(ISteamUGC *self,
                                                UGCQueryHandle_t handle,
                                                bool bReturnChildren) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamUGC_SetReturnAdditionalPreviews(
    ISteamUGC *self, UGCQueryHandle_t handle, bool bReturnAdditionalPreviews) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamUGC_SetReturnTotalOnly(ISteamUGC *self,
                                                 UGCQueryHandle_t handle,
                                                 bool bReturnTotalOnly) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamUGC_SetReturnPlaytimeStats(ISteamUGC *self,
                                                     UGCQueryHandle_t handle,
                                                     uint32 unDays) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamUGC_SetLanguage(ISteamUGC *self,
                                          UGCQueryHandle_t handle,
                                          const char *pchLanguage) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamUGC_SetAllowCachedResponse(ISteamUGC *self,
                                                     UGCQueryHandle_t handle,
                                                     uint32 unMaxAgeSeconds) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamUGC_SetCloudFileNameFilter(
    ISteamUGC *self, UGCQueryHandle_t handle, const char *pMatchCloudFileName) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamUGC_SetMatchAnyTag(ISteamUGC *self,
                                             UGCQueryHandle_t handle,
                                             bool bMatchAnyTag) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamUGC_SetSearchText(ISteamUGC *self,
                                            UGCQueryHandle_t handle,
                                            const char *pSearchText) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamUGC_SetRankedByTrendDays(ISteamUGC *self,
                                                   UGCQueryHandle_t handle,
                                                   uint32 unDays) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamUGC_SetTimeCreatedDateRange(ISteamUGC *self,
                                                      UGCQueryHandle_t handle,
                                                      RTime32 rtStart,
                                                      RTime32 rtEnd) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamUGC_SetTimeUpdatedDateRange(ISteamUGC *self,
                                                      UGCQueryHandle_t handle,
                                                      RTime32 rtStart,
                                                      RTime32 rtEnd) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamUGC_AddRequiredKeyValueTag(ISteamUGC *self,
                                                     UGCQueryHandle_t handle,
                                                     const char *pKey,
                                                     const char *pValue) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API SteamAPICall_t SteamAPI_ISteamUGC_RequestUGCDetails(
    ISteamUGC *self, PublishedFileId_t nPublishedFileID,
    uint32 unMaxAgeSeconds) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API SteamAPICall_t SteamAPI_ISteamUGC_CreateItem(
    ISteamUGC *self, AppId_t nConsumerAppId, EWorkshopFileType eFileType) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API UGCUpdateHandle_t
SteamAPI_ISteamUGC_StartItemUpdate(ISteamUGC *self, AppId_t nConsumerAppId,
                                   PublishedFileId_t nPublishedFileID) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API bool SteamAPI_ISteamUGC_SetItemTitle(ISteamUGC *self,
                                           UGCUpdateHandle_t handle,
                                           const char *pchTitle) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamUGC_SetItemDescription(ISteamUGC *self,
                                                 UGCUpdateHandle_t handle,
                                                 const char *pchDescription) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamUGC_SetItemUpdateLanguage(ISteamUGC *self,
                                                    UGCUpdateHandle_t handle,
                                                    const char *pchLanguage) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamUGC_SetItemMetadata(ISteamUGC *self,
                                              UGCUpdateHandle_t handle,
                                              const char *pchMetaData) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamUGC_SetItemVisibility(
    ISteamUGC *self, UGCUpdateHandle_t handle,
    ERemoteStoragePublishedFileVisibility eVisibility) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool
SteamAPI_ISteamUGC_SetItemTags(ISteamUGC *self, UGCUpdateHandle_t updateHandle,
                               const SteamParamStringArray_t *pTags) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamUGC_SetItemContent(ISteamUGC *self,
                                             UGCUpdateHandle_t handle,
                                             const char *pszContentFolder) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamUGC_SetItemPreview(ISteamUGC *self,
                                             UGCUpdateHandle_t handle,
                                             const char *pszPreviewFile) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamUGC_SetAllowLegacyUpload(ISteamUGC *self,
                                                   UGCUpdateHandle_t handle,
                                                   bool bAllowLegacyUpload) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool
SteamAPI_ISteamUGC_RemoveAllItemKeyValueTags(ISteamUGC *self,
                                             UGCUpdateHandle_t handle) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamUGC_RemoveItemKeyValueTags(ISteamUGC *self,
                                                     UGCUpdateHandle_t handle,
                                                     const char *pchKey) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamUGC_AddItemKeyValueTag(ISteamUGC *self,
                                                 UGCUpdateHandle_t handle,
                                                 const char *pchKey,
                                                 const char *pchValue) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamUGC_AddItemPreviewFile(ISteamUGC *self,
                                                 UGCUpdateHandle_t handle,
                                                 const char *pszPreviewFile,
                                                 EItemPreviewType type) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamUGC_AddItemPreviewVideo(ISteamUGC *self,
                                                  UGCUpdateHandle_t handle,
                                                  const char *pszVideoID) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool
SteamAPI_ISteamUGC_UpdateItemPreviewFile(ISteamUGC *self,
                                         UGCUpdateHandle_t handle, uint32 index,
                                         const char *pszPreviewFile) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamUGC_UpdateItemPreviewVideo(ISteamUGC *self,
                                                     UGCUpdateHandle_t handle,
                                                     uint32 index,
                                                     const char *pszVideoID) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamUGC_RemoveItemPreview(ISteamUGC *self,
                                                UGCUpdateHandle_t handle,
                                                uint32 index) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API SteamAPICall_t SteamAPI_ISteamUGC_SubmitItemUpdate(
    ISteamUGC *self, UGCUpdateHandle_t handle, const char *pchChangeNote) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API EItemUpdateStatus SteamAPI_ISteamUGC_GetItemUpdateProgress(
    ISteamUGC *self, UGCUpdateHandle_t handle, uint64 *punBytesProcessed,
    uint64 *punBytesTotal) {
	TRACE_FUNCTION_CALL();
	return k_EItemUpdateStatusInvalid;
}
S_API SteamAPICall_t SteamAPI_ISteamUGC_SetUserItemVote(
    ISteamUGC *self, PublishedFileId_t nPublishedFileID, bool bVoteUp) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API SteamAPICall_t SteamAPI_ISteamUGC_GetUserItemVote(
    ISteamUGC *self, PublishedFileId_t nPublishedFileID) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API SteamAPICall_t SteamAPI_ISteamUGC_AddItemToFavorites(
    ISteamUGC *self, AppId_t nAppId, PublishedFileId_t nPublishedFileID) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API SteamAPICall_t SteamAPI_ISteamUGC_RemoveItemFromFavorites(
    ISteamUGC *self, AppId_t nAppId, PublishedFileId_t nPublishedFileID) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API SteamAPICall_t SteamAPI_ISteamUGC_SubscribeItem(
    ISteamUGC *self, PublishedFileId_t nPublishedFileID) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API SteamAPICall_t SteamAPI_ISteamUGC_UnsubscribeItem(
    ISteamUGC *self, PublishedFileId_t nPublishedFileID) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API uint32 SteamAPI_ISteamUGC_GetNumSubscribedItems(ISteamUGC *self) {
	TRACE_FUNCTION_CALL();
	return 0u;
}
S_API uint32 SteamAPI_ISteamUGC_GetSubscribedItems(
    ISteamUGC *self, PublishedFileId_t *pvecPublishedFileID,
    uint32 cMaxEntries) {
	TRACE_FUNCTION_CALL();
	return 0u;
}
S_API uint32 SteamAPI_ISteamUGC_GetItemState(
    ISteamUGC *self, PublishedFileId_t nPublishedFileID) {
	TRACE_FUNCTION_CALL();
	return 0u;
}
S_API bool SteamAPI_ISteamUGC_GetItemInstallInfo(
    ISteamUGC *self, PublishedFileId_t nPublishedFileID, uint64 *punSizeOnDisk,
    char *pchFolder, uint32 cchFolderSize, uint32 *punTimeStamp) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamUGC_GetItemDownloadInfo(
    ISteamUGC *self, PublishedFileId_t nPublishedFileID,
    uint64 *punBytesDownloaded, uint64 *punBytesTotal) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamUGC_DownloadItem(ISteamUGC *self,
                                           PublishedFileId_t nPublishedFileID,
                                           bool bHighPriority) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamUGC_BInitWorkshopForGameServer(
    ISteamUGC *self, DepotId_t unWorkshopDepotID, const char *pszFolder) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API void SteamAPI_ISteamUGC_SuspendDownloads(ISteamUGC *self, bool bSuspend) {
	TRACE_FUNCTION_CALL();
}
S_API SteamAPICall_t SteamAPI_ISteamUGC_StartPlaytimeTracking(
    ISteamUGC *self, PublishedFileId_t *pvecPublishedFileID,
    uint32 unNumPublishedFileIDs) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API SteamAPICall_t SteamAPI_ISteamUGC_StopPlaytimeTracking(
    ISteamUGC *self, PublishedFileId_t *pvecPublishedFileID,
    uint32 unNumPublishedFileIDs) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API SteamAPICall_t
SteamAPI_ISteamUGC_StopPlaytimeTrackingForAllItems(ISteamUGC *self) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API SteamAPICall_t SteamAPI_ISteamUGC_AddDependency(
    ISteamUGC *self, PublishedFileId_t nParentPublishedFileID,
    PublishedFileId_t nChildPublishedFileID) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API SteamAPICall_t SteamAPI_ISteamUGC_RemoveDependency(
    ISteamUGC *self, PublishedFileId_t nParentPublishedFileID,
    PublishedFileId_t nChildPublishedFileID) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API SteamAPICall_t SteamAPI_ISteamUGC_AddAppDependency(
    ISteamUGC *self, PublishedFileId_t nPublishedFileID, AppId_t nAppID) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API SteamAPICall_t SteamAPI_ISteamUGC_RemoveAppDependency(
    ISteamUGC *self, PublishedFileId_t nPublishedFileID, AppId_t nAppID) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API SteamAPICall_t SteamAPI_ISteamUGC_GetAppDependencies(
    ISteamUGC *self, PublishedFileId_t nPublishedFileID) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API SteamAPICall_t SteamAPI_ISteamUGC_DeleteItem(
    ISteamUGC *self, PublishedFileId_t nPublishedFileID) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API bool SteamAPI_ISteamUGC_ShowWorkshopEULA(ISteamUGC *self) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API SteamAPICall_t SteamAPI_ISteamUGC_GetWorkshopEULAStatus(ISteamUGC *self) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}


S_API ISteamAppList *SteamAPI_SteamAppList_v001() {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API uint32 SteamAPI_ISteamAppList_GetNumInstalledApps(ISteamAppList *self) {
	TRACE_FUNCTION_CALL();
	return 0u;
}
S_API uint32 SteamAPI_ISteamAppList_GetInstalledApps(ISteamAppList *self,
                                                     AppId_t *pvecAppID,
                                                     uint32 unMaxAppIDs) {
	TRACE_FUNCTION_CALL();
	return 0u;
}
S_API int SteamAPI_ISteamAppList_GetAppName(ISteamAppList *self, AppId_t nAppID,
                                            char *pchName, int cchNameMax) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API int SteamAPI_ISteamAppList_GetAppInstallDir(ISteamAppList *self,
                                                  AppId_t nAppID,
                                                  char *pchDirectory,
                                                  int cchNameMax) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API int SteamAPI_ISteamAppList_GetAppBuildId(ISteamAppList *self,
                                               AppId_t nAppID) {
	TRACE_FUNCTION_CALL();
	return 0;
}


S_API ISteamHTMLSurface *SteamAPI_SteamHTMLSurface_v005() {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API bool SteamAPI_ISteamHTMLSurface_Init(ISteamHTMLSurface *self) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamHTMLSurface_Shutdown(ISteamHTMLSurface *self) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API SteamAPICall_t SteamAPI_ISteamHTMLSurface_CreateBrowser(
    ISteamHTMLSurface *self, const char *pchUserAgent, const char *pchUserCSS) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API void
SteamAPI_ISteamHTMLSurface_RemoveBrowser(ISteamHTMLSurface *self,
                                         HHTMLBrowser unBrowserHandle) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamHTMLSurface_LoadURL(ISteamHTMLSurface *self,
                                              HHTMLBrowser unBrowserHandle,
                                              const char *pchURL,
                                              const char *pchPostData) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamHTMLSurface_SetSize(ISteamHTMLSurface *self,
                                              HHTMLBrowser unBrowserHandle,
                                              uint32 unWidth, uint32 unHeight) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamHTMLSurface_StopLoad(ISteamHTMLSurface *self,
                                               HHTMLBrowser unBrowserHandle) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamHTMLSurface_Reload(ISteamHTMLSurface *self,
                                             HHTMLBrowser unBrowserHandle) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamHTMLSurface_GoBack(ISteamHTMLSurface *self,
                                             HHTMLBrowser unBrowserHandle) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamHTMLSurface_GoForward(ISteamHTMLSurface *self,
                                                HHTMLBrowser unBrowserHandle) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamHTMLSurface_AddHeader(ISteamHTMLSurface *self,
                                                HHTMLBrowser unBrowserHandle,
                                                const char *pchKey,
                                                const char *pchValue) {
	TRACE_FUNCTION_CALL();
}
S_API void
SteamAPI_ISteamHTMLSurface_ExecuteJavascript(ISteamHTMLSurface *self,
                                             HHTMLBrowser unBrowserHandle,
                                             const char *pchScript) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamHTMLSurface_MouseUp(
    ISteamHTMLSurface *self, HHTMLBrowser unBrowserHandle,
    ISteamHTMLSurface::EHTMLMouseButton eMouseButton) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamHTMLSurface_MouseDown(
    ISteamHTMLSurface *self, HHTMLBrowser unBrowserHandle,
    ISteamHTMLSurface::EHTMLMouseButton eMouseButton) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamHTMLSurface_MouseDoubleClick(
    ISteamHTMLSurface *self, HHTMLBrowser unBrowserHandle,
    ISteamHTMLSurface::EHTMLMouseButton eMouseButton) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamHTMLSurface_MouseMove(ISteamHTMLSurface *self,
                                                HHTMLBrowser unBrowserHandle,
                                                int x, int y) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamHTMLSurface_MouseWheel(ISteamHTMLSurface *self,
                                                 HHTMLBrowser unBrowserHandle,
                                                 int32 nDelta) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamHTMLSurface_KeyDown(
    ISteamHTMLSurface *self, HHTMLBrowser unBrowserHandle,
    uint32 nNativeKeyCode,
    ISteamHTMLSurface::EHTMLKeyModifiers eHTMLKeyModifiers, bool bIsSystemKey) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamHTMLSurface_KeyUp(
    ISteamHTMLSurface *self, HHTMLBrowser unBrowserHandle,
    uint32 nNativeKeyCode,
    ISteamHTMLSurface::EHTMLKeyModifiers eHTMLKeyModifiers) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamHTMLSurface_KeyChar(
    ISteamHTMLSurface *self, HHTMLBrowser unBrowserHandle, uint32 cUnicodeChar,
    ISteamHTMLSurface::EHTMLKeyModifiers eHTMLKeyModifiers) {
	TRACE_FUNCTION_CALL();
}
S_API void
SteamAPI_ISteamHTMLSurface_SetHorizontalScroll(ISteamHTMLSurface *self,
                                               HHTMLBrowser unBrowserHandle,
                                               uint32 nAbsolutePixelScroll) {
	TRACE_FUNCTION_CALL();
}
S_API void
SteamAPI_ISteamHTMLSurface_SetVerticalScroll(ISteamHTMLSurface *self,
                                             HHTMLBrowser unBrowserHandle,
                                             uint32 nAbsolutePixelScroll) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamHTMLSurface_SetKeyFocus(ISteamHTMLSurface *self,
                                                  HHTMLBrowser unBrowserHandle,
                                                  bool bHasKeyFocus) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamHTMLSurface_ViewSource(ISteamHTMLSurface *self,
                                                 HHTMLBrowser unBrowserHandle) {
	TRACE_FUNCTION_CALL();
}
S_API void
SteamAPI_ISteamHTMLSurface_CopyToClipboard(ISteamHTMLSurface *self,
                                           HHTMLBrowser unBrowserHandle) {
	TRACE_FUNCTION_CALL();
}
S_API void
SteamAPI_ISteamHTMLSurface_PasteFromClipboard(ISteamHTMLSurface *self,
                                              HHTMLBrowser unBrowserHandle) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamHTMLSurface_Find(ISteamHTMLSurface *self,
                                           HHTMLBrowser unBrowserHandle,
                                           const char *pchSearchStr,
                                           bool bCurrentlyInFind,
                                           bool bReverse) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamHTMLSurface_StopFind(ISteamHTMLSurface *self,
                                               HHTMLBrowser unBrowserHandle) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamHTMLSurface_GetLinkAtPosition(
    ISteamHTMLSurface *self, HHTMLBrowser unBrowserHandle, int x, int y) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamHTMLSurface_SetCookie(
    ISteamHTMLSurface *self, const char *pchHostname, const char *pchKey,
    const char *pchValue, const char *pchPath, RTime32 nExpires, bool bSecure,
    bool bHTTPOnly) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamHTMLSurface_SetPageScaleFactor(
    ISteamHTMLSurface *self, HHTMLBrowser unBrowserHandle, float flZoom,
    int nPointX, int nPointY) {
	TRACE_FUNCTION_CALL();
}
S_API void
SteamAPI_ISteamHTMLSurface_SetBackgroundMode(ISteamHTMLSurface *self,
                                             HHTMLBrowser unBrowserHandle,
                                             bool bBackgroundMode) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamHTMLSurface_SetDPIScalingFactor(
    ISteamHTMLSurface *self, HHTMLBrowser unBrowserHandle, float flDPIScaling) {
	TRACE_FUNCTION_CALL();
}
S_API void
SteamAPI_ISteamHTMLSurface_OpenDeveloperTools(ISteamHTMLSurface *self,
                                              HHTMLBrowser unBrowserHandle) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamHTMLSurface_AllowStartRequest(
    ISteamHTMLSurface *self, HHTMLBrowser unBrowserHandle, bool bAllowed) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamHTMLSurface_JSDialogResponse(
    ISteamHTMLSurface *self, HHTMLBrowser unBrowserHandle, bool bResult) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamHTMLSurface_FileLoadDialogResponse(
    ISteamHTMLSurface *self, HHTMLBrowser unBrowserHandle,
    const char **pchSelectedFiles) {
	TRACE_FUNCTION_CALL();
}


S_API ISteamInventory *SteamAPI_SteamInventory_v003() {
	TRACE_FUNCTION_CALL();
	return nullptr;
}

S_API ISteamInventory *SteamAPI_SteamGameServerInventory_v003() {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API EResult SteamAPI_ISteamInventory_GetResultStatus(
    ISteamInventory *self, SteamInventoryResult_t resultHandle) {
	TRACE_FUNCTION_CALL();
	return k_EResultFail;
}
S_API bool SteamAPI_ISteamInventory_GetResultItems(
    ISteamInventory *self, SteamInventoryResult_t resultHandle,
    SteamItemDetails_t *pOutItemsArray, uint32 *punOutItemsArraySize) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamInventory_GetResultItemProperty(
    ISteamInventory *self, SteamInventoryResult_t resultHandle,
    uint32 unItemIndex, const char *pchPropertyName, char *pchValueBuffer,
    uint32 *punValueBufferSizeOut) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API uint32 SteamAPI_ISteamInventory_GetResultTimestamp(
    ISteamInventory *self, SteamInventoryResult_t resultHandle) {
	TRACE_FUNCTION_CALL();
	return 0u;
}
S_API bool
SteamAPI_ISteamInventory_CheckResultSteamID(ISteamInventory *self,
                                            SteamInventoryResult_t resultHandle,
                                            uint64_steamid steamIDExpected) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API void
SteamAPI_ISteamInventory_DestroyResult(ISteamInventory *self,
                                       SteamInventoryResult_t resultHandle) {
	TRACE_FUNCTION_CALL();
}
S_API bool
SteamAPI_ISteamInventory_GetAllItems(ISteamInventory *self,
                                     SteamInventoryResult_t *pResultHandle) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamInventory_GetItemsByID(
    ISteamInventory *self, SteamInventoryResult_t *pResultHandle,
    const SteamItemInstanceID_t *pInstanceIDs, uint32 unCountInstanceIDs) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamInventory_SerializeResult(
    ISteamInventory *self, SteamInventoryResult_t resultHandle,
    void *pOutBuffer, uint32 *punOutBufferSize) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamInventory_DeserializeResult(
    ISteamInventory *self, SteamInventoryResult_t *pOutResultHandle,
    const void *pBuffer, uint32 unBufferSize, bool bRESERVED_MUST_BE_FALSE) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamInventory_GenerateItems(
    ISteamInventory *self, SteamInventoryResult_t *pResultHandle,
    const SteamItemDef_t *pArrayItemDefs, const uint32 *punArrayQuantity,
    uint32 unArrayLength) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamInventory_GrantPromoItems(
    ISteamInventory *self, SteamInventoryResult_t *pResultHandle) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool
SteamAPI_ISteamInventory_AddPromoItem(ISteamInventory *self,
                                      SteamInventoryResult_t *pResultHandle,
                                      SteamItemDef_t itemDef) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamInventory_AddPromoItems(
    ISteamInventory *self, SteamInventoryResult_t *pResultHandle,
    const SteamItemDef_t *pArrayItemDefs, uint32 unArrayLength) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamInventory_ConsumeItem(
    ISteamInventory *self, SteamInventoryResult_t *pResultHandle,
    SteamItemInstanceID_t itemConsume, uint32 unQuantity) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamInventory_ExchangeItems(
    ISteamInventory *self, SteamInventoryResult_t *pResultHandle,
    const SteamItemDef_t *pArrayGenerate,
    const uint32 *punArrayGenerateQuantity, uint32 unArrayGenerateLength,
    const SteamItemInstanceID_t *pArrayDestroy,
    const uint32 *punArrayDestroyQuantity, uint32 unArrayDestroyLength) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamInventory_TransferItemQuantity(
    ISteamInventory *self, SteamInventoryResult_t *pResultHandle,
    SteamItemInstanceID_t itemIdSource, uint32 unQuantity,
    SteamItemInstanceID_t itemIdDest) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API void
SteamAPI_ISteamInventory_SendItemDropHeartbeat(ISteamInventory *self) {
	TRACE_FUNCTION_CALL();
}
S_API bool
SteamAPI_ISteamInventory_TriggerItemDrop(ISteamInventory *self,
                                         SteamInventoryResult_t *pResultHandle,
                                         SteamItemDef_t dropListDefinition) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamInventory_TradeItems(
    ISteamInventory *self, SteamInventoryResult_t *pResultHandle,
    uint64_steamid steamIDTradePartner, const SteamItemInstanceID_t *pArrayGive,
    const uint32 *pArrayGiveQuantity, uint32 nArrayGiveLength,
    const SteamItemInstanceID_t *pArrayGet, const uint32 *pArrayGetQuantity,
    uint32 nArrayGetLength) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamInventory_LoadItemDefinitions(ISteamInventory *self) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool
SteamAPI_ISteamInventory_GetItemDefinitionIDs(ISteamInventory *self,
                                              SteamItemDef_t *pItemDefIDs,
                                              uint32 *punItemDefIDsArraySize) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamInventory_GetItemDefinitionProperty(
    ISteamInventory *self, SteamItemDef_t iDefinition,
    const char *pchPropertyName, char *pchValueBuffer,
    uint32 *punValueBufferSizeOut) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API SteamAPICall_t
SteamAPI_ISteamInventory_RequestEligiblePromoItemDefinitionsIDs(
    ISteamInventory *self, uint64_steamid steamID) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API bool SteamAPI_ISteamInventory_GetEligiblePromoItemDefinitionIDs(
    ISteamInventory *self, uint64_steamid steamID, SteamItemDef_t *pItemDefIDs,
    uint32 *punItemDefIDsArraySize) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API SteamAPICall_t SteamAPI_ISteamInventory_StartPurchase(
    ISteamInventory *self, const SteamItemDef_t *pArrayItemDefs,
    const uint32 *punArrayQuantity, uint32 unArrayLength) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API SteamAPICall_t
SteamAPI_ISteamInventory_RequestPrices(ISteamInventory *self) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API uint32
SteamAPI_ISteamInventory_GetNumItemsWithPrices(ISteamInventory *self) {
	TRACE_FUNCTION_CALL();
	return 0u;
}
S_API bool SteamAPI_ISteamInventory_GetItemsWithPrices(
    ISteamInventory *self, SteamItemDef_t *pArrayItemDefs,
    uint64 *pCurrentPrices, uint64 *pBasePrices, uint32 unArrayLength) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamInventory_GetItemPrice(ISteamInventory *self,
                                                 SteamItemDef_t iDefinition,
                                                 uint64 *pCurrentPrice,
                                                 uint64 *pBasePrice) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API SteamInventoryUpdateHandle_t
SteamAPI_ISteamInventory_StartUpdateProperties(ISteamInventory *self) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API bool SteamAPI_ISteamInventory_RemoveProperty(
    ISteamInventory *self, SteamInventoryUpdateHandle_t handle,
    SteamItemInstanceID_t nItemID, const char *pchPropertyName) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamInventory_SetPropertyString(
    ISteamInventory *self, SteamInventoryUpdateHandle_t handle,
    SteamItemInstanceID_t nItemID, const char *pchPropertyName,
    const char *pchPropertyValue) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamInventory_SetPropertyBool(
    ISteamInventory *self, SteamInventoryUpdateHandle_t handle,
    SteamItemInstanceID_t nItemID, const char *pchPropertyName, bool bValue) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamInventory_SetPropertyInt64(
    ISteamInventory *self, SteamInventoryUpdateHandle_t handle,
    SteamItemInstanceID_t nItemID, const char *pchPropertyName, int64 nValue) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamInventory_SetPropertyFloat(
    ISteamInventory *self, SteamInventoryUpdateHandle_t handle,
    SteamItemInstanceID_t nItemID, const char *pchPropertyName, float flValue) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamInventory_SubmitUpdateProperties(
    ISteamInventory *self, SteamInventoryUpdateHandle_t handle,
    SteamInventoryResult_t *pResultHandle) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool
SteamAPI_ISteamInventory_InspectItem(ISteamInventory *self,
                                     SteamInventoryResult_t *pResultHandle,
                                     const char *pchItemToken) {
	TRACE_FUNCTION_CALL();
	return false;
}


S_API ISteamVideo *SteamAPI_SteamVideo_v002() {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API void SteamAPI_ISteamVideo_GetVideoURL(ISteamVideo *self,
                                            AppId_t unVideoAppID) {
	TRACE_FUNCTION_CALL();
}
S_API bool SteamAPI_ISteamVideo_IsBroadcasting(ISteamVideo *self,
                                               int *pnNumViewers) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API void SteamAPI_ISteamVideo_GetOPFSettings(ISteamVideo *self,
                                               AppId_t unVideoAppID) {
	TRACE_FUNCTION_CALL();
}
S_API bool SteamAPI_ISteamVideo_GetOPFStringForApp(ISteamVideo *self,
                                                   AppId_t unVideoAppID,
                                                   char *pchBuffer,
                                                   int32 *pnBufferSize) {
	TRACE_FUNCTION_CALL();
	return false;
}


S_API ISteamParentalSettings *SteamAPI_SteamParentalSettings_v001() {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API bool SteamAPI_ISteamParentalSettings_BIsParentalLockEnabled(
    ISteamParentalSettings *self) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamParentalSettings_BIsParentalLockLocked(
    ISteamParentalSettings *self) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool
SteamAPI_ISteamParentalSettings_BIsAppBlocked(ISteamParentalSettings *self,
                                              AppId_t nAppID) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool
SteamAPI_ISteamParentalSettings_BIsAppInBlockList(ISteamParentalSettings *self,
                                                  AppId_t nAppID) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool
SteamAPI_ISteamParentalSettings_BIsFeatureBlocked(ISteamParentalSettings *self,
                                                  EParentalFeature eFeature) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamParentalSettings_BIsFeatureInBlockList(
    ISteamParentalSettings *self, EParentalFeature eFeature) {
	TRACE_FUNCTION_CALL();
	return false;
}


S_API ISteamRemotePlay *SteamAPI_SteamRemotePlay_v001() {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API uint32 SteamAPI_ISteamRemotePlay_GetSessionCount(ISteamRemotePlay *self) {
	TRACE_FUNCTION_CALL();
	return 0u;
}
S_API RemotePlaySessionID_t SteamAPI_ISteamRemotePlay_GetSessionID(
    ISteamRemotePlay *self, int iSessionIndex) {
	TRACE_FUNCTION_CALL();
	return 0u;
}
S_API uint64_steamid SteamAPI_ISteamRemotePlay_GetSessionSteamID(
    ISteamRemotePlay *self, RemotePlaySessionID_t unSessionID) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API const char *SteamAPI_ISteamRemotePlay_GetSessionClientName(
    ISteamRemotePlay *self, RemotePlaySessionID_t unSessionID) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API ESteamDeviceFormFactor
SteamAPI_ISteamRemotePlay_GetSessionClientFormFactor(
    ISteamRemotePlay *self, RemotePlaySessionID_t unSessionID) {
	TRACE_FUNCTION_CALL();
	return k_ESteamDeviceFormFactorUnknown;
}
S_API bool SteamAPI_ISteamRemotePlay_BGetSessionClientResolution(
    ISteamRemotePlay *self, RemotePlaySessionID_t unSessionID,
    int *pnResolutionX, int *pnResolutionY) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamRemotePlay_BSendRemotePlayTogetherInvite(
    ISteamRemotePlay *self, uint64_steamid steamIDFriend) {
	TRACE_FUNCTION_CALL();
	return false;
}


S_API ISteamNetworkingMessages *
SteamAPI_SteamNetworkingMessages_SteamAPI_v002() {
	TRACE_FUNCTION_CALL();
	return nullptr;
}

S_API ISteamNetworkingMessages *
SteamAPI_SteamGameServerNetworkingMessages_SteamAPI_v002() {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API EResult SteamAPI_ISteamNetworkingMessages_SendMessageToUser(
    ISteamNetworkingMessages *self,
    const SteamNetworkingIdentity &identityRemote, const void *pubData,
    uint32 cubData, int nSendFlags, int nRemoteChannel) {
	TRACE_FUNCTION_CALL();
	return k_EResultNoConnection;
}
S_API int SteamAPI_ISteamNetworkingMessages_ReceiveMessagesOnChannel(
    ISteamNetworkingMessages *self, int nLocalChannel,
    SteamNetworkingMessage_t **ppOutMessages, int nMaxMessages) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API bool SteamAPI_ISteamNetworkingMessages_AcceptSessionWithUser(
    ISteamNetworkingMessages *self,
    const SteamNetworkingIdentity &identityRemote) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamNetworkingMessages_CloseSessionWithUser(
    ISteamNetworkingMessages *self,
    const SteamNetworkingIdentity &identityRemote) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamNetworkingMessages_CloseChannelWithUser(
    ISteamNetworkingMessages *self,
    const SteamNetworkingIdentity &identityRemote, int nLocalChannel) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API ESteamNetworkingConnectionState
SteamAPI_ISteamNetworkingMessages_GetSessionConnectionInfo(
    ISteamNetworkingMessages *self,
    const SteamNetworkingIdentity &identityRemote,
    SteamNetConnectionInfo_t *pConnectionInfo,
    SteamNetConnectionRealTimeStatus_t *pQuickStatus) {
	TRACE_FUNCTION_CALL();
	return k_ESteamNetworkingConnectionState_None;
}


S_API ISteamNetworkingSockets *SteamAPI_SteamNetworkingSockets_SteamAPI_v012() {
	TRACE_FUNCTION_CALL();
	return nullptr;
}

S_API ISteamNetworkingSockets *
SteamAPI_SteamGameServerNetworkingSockets_SteamAPI_v012() {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API HSteamListenSocket SteamAPI_ISteamNetworkingSockets_CreateListenSocketIP(
    ISteamNetworkingSockets *self, const SteamNetworkingIPAddr &localAddress,
    int nOptions, const SteamNetworkingConfigValue_t *pOptions) {
	TRACE_FUNCTION_CALL();
	return 0u;
}
S_API HSteamNetConnection SteamAPI_ISteamNetworkingSockets_ConnectByIPAddress(
    ISteamNetworkingSockets *self, const SteamNetworkingIPAddr &address,
    int nOptions, const SteamNetworkingConfigValue_t *pOptions) {
	TRACE_FUNCTION_CALL();
	return 0u;
}
S_API HSteamListenSocket SteamAPI_ISteamNetworkingSockets_CreateListenSocketP2P(
    ISteamNetworkingSockets *self, int nLocalVirtualPort, int nOptions,
    const SteamNetworkingConfigValue_t *pOptions) {
	TRACE_FUNCTION_CALL();
	return 0u;
}
S_API HSteamNetConnection SteamAPI_ISteamNetworkingSockets_ConnectP2P(
    ISteamNetworkingSockets *self,
    const SteamNetworkingIdentity &identityRemote, int nRemoteVirtualPort,
    int nOptions, const SteamNetworkingConfigValue_t *pOptions) {
	TRACE_FUNCTION_CALL();
	return 0u;
}
S_API EResult SteamAPI_ISteamNetworkingSockets_AcceptConnection(
    ISteamNetworkingSockets *self, HSteamNetConnection hConn) {
	TRACE_FUNCTION_CALL();
	return k_EResultInvalidParam;
}
S_API bool SteamAPI_ISteamNetworkingSockets_CloseConnection(
    ISteamNetworkingSockets *self, HSteamNetConnection hPeer, int nReason,
    const char *pszDebug, bool bEnableLinger) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamNetworkingSockets_CloseListenSocket(
    ISteamNetworkingSockets *self, HSteamListenSocket hSocket) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamNetworkingSockets_SetConnectionUserData(
    ISteamNetworkingSockets *self, HSteamNetConnection hPeer, int64 nUserData) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API int64 SteamAPI_ISteamNetworkingSockets_GetConnectionUserData(
    ISteamNetworkingSockets *self, HSteamNetConnection hPeer) {
	TRACE_FUNCTION_CALL();
	return 0ll;
}
S_API void SteamAPI_ISteamNetworkingSockets_SetConnectionName(
    ISteamNetworkingSockets *self, HSteamNetConnection hPeer,
    const char *pszName) {
	TRACE_FUNCTION_CALL();
}
S_API bool SteamAPI_ISteamNetworkingSockets_GetConnectionName(
    ISteamNetworkingSockets *self, HSteamNetConnection hPeer, char *pszName,
    int nMaxLen) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API EResult SteamAPI_ISteamNetworkingSockets_SendMessageToConnection(
    ISteamNetworkingSockets *self, HSteamNetConnection hConn, const void *pData,
    uint32 cbData, int nSendFlags, int64 *pOutMessageNumber) {
	TRACE_FUNCTION_CALL();
	return k_EResultInvalidParam;
}
S_API void SteamAPI_ISteamNetworkingSockets_SendMessages(
    ISteamNetworkingSockets *self, int nMessages,
    SteamNetworkingMessage_t *const *pMessages,
    int64 *pOutMessageNumberOrResult) {
	TRACE_FUNCTION_CALL();
}
S_API EResult SteamAPI_ISteamNetworkingSockets_FlushMessagesOnConnection(
    ISteamNetworkingSockets *self, HSteamNetConnection hConn) {
	TRACE_FUNCTION_CALL();
	return k_EResultInvalidParam;
}
S_API int SteamAPI_ISteamNetworkingSockets_ReceiveMessagesOnConnection(
    ISteamNetworkingSockets *self, HSteamNetConnection hConn,
    SteamNetworkingMessage_t **ppOutMessages, int nMaxMessages) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API bool SteamAPI_ISteamNetworkingSockets_GetConnectionInfo(
    ISteamNetworkingSockets *self, HSteamNetConnection hConn,
    SteamNetConnectionInfo_t *pInfo) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API EResult SteamAPI_ISteamNetworkingSockets_GetConnectionRealTimeStatus(
    ISteamNetworkingSockets *self, HSteamNetConnection hConn,
    SteamNetConnectionRealTimeStatus_t *pStatus, int nLanes,
    SteamNetConnectionRealTimeLaneStatus_t *pLanes) {
	TRACE_FUNCTION_CALL();
	return k_EResultInvalidParam;
}
S_API int SteamAPI_ISteamNetworkingSockets_GetDetailedConnectionStatus(
    ISteamNetworkingSockets *self, HSteamNetConnection hConn, char *pszBuf,
    int cbBuf) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API bool SteamAPI_ISteamNetworkingSockets_GetListenSocketAddress(
    ISteamNetworkingSockets *self, HSteamListenSocket hSocket,
    SteamNetworkingIPAddr *address) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamNetworkingSockets_CreateSocketPair(
    ISteamNetworkingSockets *self, HSteamNetConnection *pOutConnection1,
    HSteamNetConnection *pOutConnection2, bool bUseNetworkLoopback,
    const SteamNetworkingIdentity *pIdentity1,
    const SteamNetworkingIdentity *pIdentity2) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API EResult SteamAPI_ISteamNetworkingSockets_ConfigureConnectionLanes(
    ISteamNetworkingSockets *self, HSteamNetConnection hConn, int nNumLanes,
    const int *pLanePriorities, const uint16 *pLaneWeights) {
	TRACE_FUNCTION_CALL();
	return k_EResultInvalidParam;
}
S_API bool SteamAPI_ISteamNetworkingSockets_GetIdentity(
    ISteamNetworkingSockets *self, SteamNetworkingIdentity *pIdentity) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API ESteamNetworkingAvailability
SteamAPI_ISteamNetworkingSockets_InitAuthentication(
    ISteamNetworkingSockets *self) {
	TRACE_FUNCTION_CALL();
	return k_ESteamNetworkingAvailability_Unknown;
}
S_API ESteamNetworkingAvailability
SteamAPI_ISteamNetworkingSockets_GetAuthenticationStatus(
    ISteamNetworkingSockets *self, SteamNetAuthenticationStatus_t *pDetails) {
	TRACE_FUNCTION_CALL();
	return k_ESteamNetworkingAvailability_Unknown;
}
S_API HSteamNetPollGroup SteamAPI_ISteamNetworkingSockets_CreatePollGroup(
    ISteamNetworkingSockets *self) {
	TRACE_FUNCTION_CALL();
	return 0u;
}
S_API bool SteamAPI_ISteamNetworkingSockets_DestroyPollGroup(
    ISteamNetworkingSockets *self, HSteamNetPollGroup hPollGroup) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamNetworkingSockets_SetConnectionPollGroup(
    ISteamNetworkingSockets *self, HSteamNetConnection hConn,
    HSteamNetPollGroup hPollGroup) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API int SteamAPI_ISteamNetworkingSockets_ReceiveMessagesOnPollGroup(
    ISteamNetworkingSockets *self, HSteamNetPollGroup hPollGroup,
    SteamNetworkingMessage_t **ppOutMessages, int nMaxMessages) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API bool SteamAPI_ISteamNetworkingSockets_ReceivedRelayAuthTicket(
    ISteamNetworkingSockets *self, const void *pvTicket, int cbTicket,
    SteamDatagramRelayAuthTicket *pOutParsedTicket) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API int SteamAPI_ISteamNetworkingSockets_FindRelayAuthTicketForServer(
    ISteamNetworkingSockets *self,
    const SteamNetworkingIdentity &identityGameServer, int nRemoteVirtualPort,
    SteamDatagramRelayAuthTicket *pOutParsedTicket) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API HSteamNetConnection
SteamAPI_ISteamNetworkingSockets_ConnectToHostedDedicatedServer(
    ISteamNetworkingSockets *self,
    const SteamNetworkingIdentity &identityTarget, int nRemoteVirtualPort,
    int nOptions, const SteamNetworkingConfigValue_t *pOptions) {
	TRACE_FUNCTION_CALL();
	return 0u;
}
S_API uint16 SteamAPI_ISteamNetworkingSockets_GetHostedDedicatedServerPort(
    ISteamNetworkingSockets *self) {
	TRACE_FUNCTION_CALL();
	return 0u;
}
S_API SteamNetworkingPOPID
SteamAPI_ISteamNetworkingSockets_GetHostedDedicatedServerPOPID(
    ISteamNetworkingSockets *self) {
	TRACE_FUNCTION_CALL();
	return 0u;
}
S_API EResult SteamAPI_ISteamNetworkingSockets_GetHostedDedicatedServerAddress(
    ISteamNetworkingSockets *self, SteamDatagramHostedAddress *pRouting) {
	TRACE_FUNCTION_CALL();
	return k_EResultInvalidState;
}
S_API HSteamListenSocket
SteamAPI_ISteamNetworkingSockets_CreateHostedDedicatedServerListenSocket(
    ISteamNetworkingSockets *self, int nLocalVirtualPort, int nOptions,
    const SteamNetworkingConfigValue_t *pOptions) {
	TRACE_FUNCTION_CALL();
	return 0u;
}
S_API EResult SteamAPI_ISteamNetworkingSockets_GetGameCoordinatorServerLogin(
    ISteamNetworkingSockets *self,
    SteamDatagramGameCoordinatorServerLogin *pLoginInfo, int *pcbSignedBlob,
    void *pBlob) {
	TRACE_FUNCTION_CALL();
	return k_EResultInvalidState;
}
S_API HSteamNetConnection
SteamAPI_ISteamNetworkingSockets_ConnectP2PCustomSignaling(
    ISteamNetworkingSockets *self,
    ISteamNetworkingConnectionSignaling *pSignaling,
    const SteamNetworkingIdentity *pPeerIdentity, int nRemoteVirtualPort,
    int nOptions, const SteamNetworkingConfigValue_t *pOptions) {
	TRACE_FUNCTION_CALL();
	return 0u;
}
S_API bool SteamAPI_ISteamNetworkingSockets_ReceivedP2PCustomSignal(
    ISteamNetworkingSockets *self, const void *pMsg, int cbMsg,
    ISteamNetworkingSignalingRecvContext *pContext) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamNetworkingSockets_GetCertificateRequest(
    ISteamNetworkingSockets *self, int *pcbBlob, void *pBlob,
    SteamNetworkingErrMsg &errMsg) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamNetworkingSockets_SetCertificate(
    ISteamNetworkingSockets *self, const void *pCertificate, int cbCertificate,
    SteamNetworkingErrMsg &errMsg) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API void SteamAPI_ISteamNetworkingSockets_ResetIdentity(
    ISteamNetworkingSockets *self, const SteamNetworkingIdentity *pIdentity) {
	TRACE_FUNCTION_CALL();
}
S_API void
SteamAPI_ISteamNetworkingSockets_RunCallbacks(ISteamNetworkingSockets *self) {
	TRACE_FUNCTION_CALL();
}
S_API bool SteamAPI_ISteamNetworkingSockets_BeginAsyncRequestFakeIP(
    ISteamNetworkingSockets *self, int nNumPorts) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API void SteamAPI_ISteamNetworkingSockets_GetFakeIP(
    ISteamNetworkingSockets *self, int idxFirstPort,
    SteamNetworkingFakeIPResult_t *pInfo) {
	TRACE_FUNCTION_CALL();
}
S_API HSteamListenSocket
SteamAPI_ISteamNetworkingSockets_CreateListenSocketP2PFakeIP(
    ISteamNetworkingSockets *self, int idxFakePort, int nOptions,
    const SteamNetworkingConfigValue_t *pOptions) {
	TRACE_FUNCTION_CALL();
	return 0u;
}
S_API EResult SteamAPI_ISteamNetworkingSockets_GetRemoteFakeIPForConnection(
    ISteamNetworkingSockets *self, HSteamNetConnection hConn,
    SteamNetworkingIPAddr *pOutAddr) {
	TRACE_FUNCTION_CALL();
	return k_EResultInvalidState;
}
S_API ISteamNetworkingFakeUDPPort *
SteamAPI_ISteamNetworkingSockets_CreateFakeUDPPort(
    ISteamNetworkingSockets *self, int idxFakeServerPort) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}


S_API ISteamNetworkingUtils *SteamAPI_SteamNetworkingUtils_SteamAPI_v004() {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API SteamNetworkingMessage_t *
SteamAPI_ISteamNetworkingUtils_AllocateMessage(ISteamNetworkingUtils *self,
                                               int cbAllocateBuffer) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API void SteamAPI_ISteamNetworkingUtils_InitRelayNetworkAccess(
    ISteamNetworkingUtils *self) {
	TRACE_FUNCTION_CALL();
}
S_API ESteamNetworkingAvailability
SteamAPI_ISteamNetworkingUtils_GetRelayNetworkStatus(
    ISteamNetworkingUtils *self, SteamRelayNetworkStatus_t *pDetails) {
	TRACE_FUNCTION_CALL();
	return k_ESteamNetworkingAvailability_Unknown;
}
S_API float SteamAPI_ISteamNetworkingUtils_GetLocalPingLocation(
    ISteamNetworkingUtils *self, SteamNetworkPingLocation_t &result) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API int SteamAPI_ISteamNetworkingUtils_EstimatePingTimeBetweenTwoLocations(
    ISteamNetworkingUtils *self, const SteamNetworkPingLocation_t &location1,
    const SteamNetworkPingLocation_t &location2) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API int SteamAPI_ISteamNetworkingUtils_EstimatePingTimeFromLocalHost(
    ISteamNetworkingUtils *self,
    const SteamNetworkPingLocation_t &remoteLocation) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API void SteamAPI_ISteamNetworkingUtils_ConvertPingLocationToString(
    ISteamNetworkingUtils *self, const SteamNetworkPingLocation_t &location,
    char *pszBuf, int cchBufSize) {
	TRACE_FUNCTION_CALL();
}
S_API bool SteamAPI_ISteamNetworkingUtils_ParsePingLocationString(
    ISteamNetworkingUtils *self, const char *pszString,
    SteamNetworkPingLocation_t &result) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamNetworkingUtils_CheckPingDataUpToDate(
    ISteamNetworkingUtils *self, float flMaxAgeSeconds) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API int SteamAPI_ISteamNetworkingUtils_GetPingToDataCenter(
    ISteamNetworkingUtils *self, SteamNetworkingPOPID popID,
    SteamNetworkingPOPID *pViaRelayPoP) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API int
SteamAPI_ISteamNetworkingUtils_GetDirectPingToPOP(ISteamNetworkingUtils *self,
                                                  SteamNetworkingPOPID popID) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API int
SteamAPI_ISteamNetworkingUtils_GetPOPCount(ISteamNetworkingUtils *self) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API int SteamAPI_ISteamNetworkingUtils_GetPOPList(ISteamNetworkingUtils *self,
                                                    SteamNetworkingPOPID *list,
                                                    int nListSz) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API SteamNetworkingMicroseconds
SteamAPI_ISteamNetworkingUtils_GetLocalTimestamp(ISteamNetworkingUtils *self) {
	TRACE_FUNCTION_CALL();
	return 0ll;
}
S_API void SteamAPI_ISteamNetworkingUtils_SetDebugOutputFunction(
    ISteamNetworkingUtils *self,
    ESteamNetworkingSocketsDebugOutputType eDetailLevel,
    FSteamNetworkingSocketsDebugOutput pfnFunc) {
	TRACE_FUNCTION_CALL();
}
S_API bool
SteamAPI_ISteamNetworkingUtils_IsFakeIPv4(ISteamNetworkingUtils *self,
                                          uint32 nIPv4) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API ESteamNetworkingFakeIPType
SteamAPI_ISteamNetworkingUtils_GetIPv4FakeIPType(ISteamNetworkingUtils *self,
                                                 uint32 nIPv4) {
	TRACE_FUNCTION_CALL();
	return k_ESteamNetworkingFakeIPType_Invalid;
}
S_API EResult SteamAPI_ISteamNetworkingUtils_GetRealIdentityForFakeIP(
    ISteamNetworkingUtils *self, const SteamNetworkingIPAddr &fakeIP,
    SteamNetworkingIdentity *pOutRealIdentity) {
	TRACE_FUNCTION_CALL();
	return k_EResultInvalidParam;
}
S_API bool SteamAPI_ISteamNetworkingUtils_SetGlobalConfigValueInt32(
    ISteamNetworkingUtils *self, ESteamNetworkingConfigValue eValue,
    int32 val) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamNetworkingUtils_SetGlobalConfigValueFloat(
    ISteamNetworkingUtils *self, ESteamNetworkingConfigValue eValue,
    float val) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamNetworkingUtils_SetGlobalConfigValueString(
    ISteamNetworkingUtils *self, ESteamNetworkingConfigValue eValue,
    const char *val) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamNetworkingUtils_SetGlobalConfigValuePtr(
    ISteamNetworkingUtils *self, ESteamNetworkingConfigValue eValue,
    void *val) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamNetworkingUtils_SetConnectionConfigValueInt32(
    ISteamNetworkingUtils *self, HSteamNetConnection hConn,
    ESteamNetworkingConfigValue eValue, int32 val) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamNetworkingUtils_SetConnectionConfigValueFloat(
    ISteamNetworkingUtils *self, HSteamNetConnection hConn,
    ESteamNetworkingConfigValue eValue, float val) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamNetworkingUtils_SetConnectionConfigValueString(
    ISteamNetworkingUtils *self, HSteamNetConnection hConn,
    ESteamNetworkingConfigValue eValue, const char *val) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool
SteamAPI_ISteamNetworkingUtils_SetGlobalCallback_SteamNetConnectionStatusChanged(
    ISteamNetworkingUtils *self, FnSteamNetConnectionStatusChanged fnCallback) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool
SteamAPI_ISteamNetworkingUtils_SetGlobalCallback_SteamNetAuthenticationStatusChanged(
    ISteamNetworkingUtils *self,
    FnSteamNetAuthenticationStatusChanged fnCallback) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool
SteamAPI_ISteamNetworkingUtils_SetGlobalCallback_SteamRelayNetworkStatusChanged(
    ISteamNetworkingUtils *self, FnSteamRelayNetworkStatusChanged fnCallback) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamNetworkingUtils_SetGlobalCallback_FakeIPResult(
    ISteamNetworkingUtils *self, FnSteamNetworkingFakeIPResult fnCallback) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool
SteamAPI_ISteamNetworkingUtils_SetGlobalCallback_MessagesSessionRequest(
    ISteamNetworkingUtils *self,
    FnSteamNetworkingMessagesSessionRequest fnCallback) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool
SteamAPI_ISteamNetworkingUtils_SetGlobalCallback_MessagesSessionFailed(
    ISteamNetworkingUtils *self,
    FnSteamNetworkingMessagesSessionFailed fnCallback) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamNetworkingUtils_SetConfigValue(
    ISteamNetworkingUtils *self, ESteamNetworkingConfigValue eValue,
    ESteamNetworkingConfigScope eScopeType, intptr_t scopeObj,
    ESteamNetworkingConfigDataType eDataType, const void *pArg) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamNetworkingUtils_SetConfigValueStruct(
    ISteamNetworkingUtils *self, const SteamNetworkingConfigValue_t &opt,
    ESteamNetworkingConfigScope eScopeType, intptr_t scopeObj) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API ESteamNetworkingGetConfigValueResult
SteamAPI_ISteamNetworkingUtils_GetConfigValue(
    ISteamNetworkingUtils *self, ESteamNetworkingConfigValue eValue,
    ESteamNetworkingConfigScope eScopeType, intptr_t scopeObj,
    ESteamNetworkingConfigDataType *pOutDataType, void *pResult,
    size_t *cbResult) {
	TRACE_FUNCTION_CALL();
	return k_ESteamNetworkingGetConfigValue_BadScopeObj;
}
S_API const char *SteamAPI_ISteamNetworkingUtils_GetConfigValueInfo(
    ISteamNetworkingUtils *self, ESteamNetworkingConfigValue eValue,
    ESteamNetworkingConfigDataType *pOutDataType,
    ESteamNetworkingConfigScope *pOutScope) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API ESteamNetworkingConfigValue
SteamAPI_ISteamNetworkingUtils_IterateGenericEditableConfigValues(
    ISteamNetworkingUtils *self, ESteamNetworkingConfigValue eCurrent,
    bool bEnumerateDevVars) {
	TRACE_FUNCTION_CALL();
	return k_ESteamNetworkingConfig_Invalid;
}
S_API void SteamAPI_ISteamNetworkingUtils_SteamNetworkingIPAddr_ToString(
    ISteamNetworkingUtils *self, const SteamNetworkingIPAddr &addr, char *buf,
    uint32 cbBuf, bool bWithPort) {
	TRACE_FUNCTION_CALL();
}
S_API bool SteamAPI_ISteamNetworkingUtils_SteamNetworkingIPAddr_ParseString(
    ISteamNetworkingUtils *self, SteamNetworkingIPAddr *pAddr,
    const char *pszStr) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API ESteamNetworkingFakeIPType
SteamAPI_ISteamNetworkingUtils_SteamNetworkingIPAddr_GetFakeIPType(
    ISteamNetworkingUtils *self, const SteamNetworkingIPAddr &addr) {
	TRACE_FUNCTION_CALL();
	return k_ESteamNetworkingFakeIPType_Invalid;
}
S_API void SteamAPI_ISteamNetworkingUtils_SteamNetworkingIdentity_ToString(
    ISteamNetworkingUtils *self, const SteamNetworkingIdentity &identity,
    char *buf, uint32 cbBuf) {
	TRACE_FUNCTION_CALL();
}
S_API bool SteamAPI_ISteamNetworkingUtils_SteamNetworkingIdentity_ParseString(
    ISteamNetworkingUtils *self, SteamNetworkingIdentity *pIdentity,
    const char *pszStr) {
	TRACE_FUNCTION_CALL();
	return false;
}


S_API ISteamGameServer *SteamAPI_SteamGameServer_v014() {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API void SteamAPI_ISteamGameServer_SetProduct(ISteamGameServer *self,
                                                const char *pszProduct) {
	TRACE_FUNCTION_CALL();
}
S_API void
SteamAPI_ISteamGameServer_SetGameDescription(ISteamGameServer *self,
                                             const char *pszGameDescription) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamGameServer_SetModDir(ISteamGameServer *self,
                                               const char *pszModDir) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamGameServer_SetDedicatedServer(ISteamGameServer *self,
                                                        bool bDedicated) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamGameServer_LogOn(ISteamGameServer *self,
                                           const char *pszToken) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamGameServer_LogOnAnonymous(ISteamGameServer *self) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamGameServer_LogOff(ISteamGameServer *self) {
	TRACE_FUNCTION_CALL();
}
S_API bool SteamAPI_ISteamGameServer_BLoggedOn(ISteamGameServer *self) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamGameServer_BSecure(ISteamGameServer *self) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API uint64_steamid
SteamAPI_ISteamGameServer_GetSteamID(ISteamGameServer *self) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API bool
SteamAPI_ISteamGameServer_WasRestartRequested(ISteamGameServer *self) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API void SteamAPI_ISteamGameServer_SetMaxPlayerCount(ISteamGameServer *self,
                                                       int cPlayersMax) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamGameServer_SetBotPlayerCount(ISteamGameServer *self,
                                                       int cBotplayers) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamGameServer_SetServerName(ISteamGameServer *self,
                                                   const char *pszServerName) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamGameServer_SetMapName(ISteamGameServer *self,
                                                const char *pszMapName) {
	TRACE_FUNCTION_CALL();
}
S_API void
SteamAPI_ISteamGameServer_SetPasswordProtected(ISteamGameServer *self,
                                               bool bPasswordProtected) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamGameServer_SetSpectatorPort(ISteamGameServer *self,
                                                      uint16 unSpectatorPort) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamGameServer_SetSpectatorServerName(
    ISteamGameServer *self, const char *pszSpectatorServerName) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamGameServer_ClearAllKeyValues(ISteamGameServer *self) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamGameServer_SetKeyValue(ISteamGameServer *self,
                                                 const char *pKey,
                                                 const char *pValue) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamGameServer_SetGameTags(ISteamGameServer *self,
                                                 const char *pchGameTags) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamGameServer_SetGameData(ISteamGameServer *self,
                                                 const char *pchGameData) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamGameServer_SetRegion(ISteamGameServer *self,
                                               const char *pszRegion) {
	TRACE_FUNCTION_CALL();
}
S_API void
SteamAPI_ISteamGameServer_SetAdvertiseServerActive(ISteamGameServer *self,
                                                   bool bActive) {
	TRACE_FUNCTION_CALL();
}
S_API HAuthTicket SteamAPI_ISteamGameServer_GetAuthSessionTicket(
    ISteamGameServer *self, void *pTicket, int cbMaxTicket, uint32 *pcbTicket) {
	TRACE_FUNCTION_CALL();
	return 0u;
}
S_API EBeginAuthSessionResult SteamAPI_ISteamGameServer_BeginAuthSession(
    ISteamGameServer *self, const void *pAuthTicket, int cbAuthTicket,
    uint64_steamid steamID) {
	TRACE_FUNCTION_CALL();
	return k_EBeginAuthSessionResultInvalidTicket;
}
S_API void SteamAPI_ISteamGameServer_EndAuthSession(ISteamGameServer *self,
                                                    uint64_steamid steamID) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_ISteamGameServer_CancelAuthTicket(ISteamGameServer *self,
                                                      HAuthTicket hAuthTicket) {
	TRACE_FUNCTION_CALL();
}
S_API EUserHasLicenseForAppResult
SteamAPI_ISteamGameServer_UserHasLicenseForApp(ISteamGameServer *self,
                                               uint64_steamid steamID,
                                               AppId_t appID) {
	TRACE_FUNCTION_CALL();
	return k_EUserHasLicenseResultNoAuth;
}
S_API bool
SteamAPI_ISteamGameServer_RequestUserGroupStatus(ISteamGameServer *self,
                                                 uint64_steamid steamIDUser,
                                                 uint64_steamid steamIDGroup) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API void SteamAPI_ISteamGameServer_GetGameplayStats(ISteamGameServer *self) {
	TRACE_FUNCTION_CALL();
}
S_API SteamAPICall_t
SteamAPI_ISteamGameServer_GetServerReputation(ISteamGameServer *self) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API SteamIPAddress_t
SteamAPI_ISteamGameServer_GetPublicIP(ISteamGameServer *self) {
	TRACE_FUNCTION_CALL();
	return {};
}
S_API bool
SteamAPI_ISteamGameServer_HandleIncomingPacket(ISteamGameServer *self,
                                               const void *pData, int cbData,
                                               uint32 srcIP, uint16 srcPort) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API int SteamAPI_ISteamGameServer_GetNextOutgoingPacket(
    ISteamGameServer *self, void *pOut, int cbMaxOut, uint32 *pNetAdr,
    uint16 *pPort) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API SteamAPICall_t SteamAPI_ISteamGameServer_AssociateWithClan(
    ISteamGameServer *self, uint64_steamid steamIDClan) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API SteamAPICall_t SteamAPI_ISteamGameServer_ComputeNewPlayerCompatibility(
    ISteamGameServer *self, uint64_steamid steamIDNewPlayer) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API bool SteamAPI_ISteamGameServer_SendUserConnectAndAuthenticate_DEPRECATED(
    ISteamGameServer *self, uint32 unIPClient, const void *pvAuthBlob,
    uint32 cubAuthBlobSize, CSteamID *pSteamIDUser) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API uint64_steamid
SteamAPI_ISteamGameServer_CreateUnauthenticatedUserConnection(
    ISteamGameServer *self) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API void SteamAPI_ISteamGameServer_SendUserDisconnect_DEPRECATED(
    ISteamGameServer *self, uint64_steamid steamIDUser) {
	TRACE_FUNCTION_CALL();
}
S_API bool SteamAPI_ISteamGameServer_BUpdateUserData(ISteamGameServer *self,
                                                     uint64_steamid steamIDUser,
                                                     const char *pchPlayerName,
                                                     uint32 uScore) {
	TRACE_FUNCTION_CALL();
	return false;
}


S_API ISteamGameServerStats *SteamAPI_SteamGameServerStats_v001() {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API SteamAPICall_t SteamAPI_ISteamGameServerStats_RequestUserStats(
    ISteamGameServerStats *self, uint64_steamid steamIDUser) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API bool SteamAPI_ISteamGameServerStats_GetUserStatInt32(
    ISteamGameServerStats *self, uint64_steamid steamIDUser,
    const char *pchName, int32 *pData) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamGameServerStats_GetUserStatFloat(
    ISteamGameServerStats *self, uint64_steamid steamIDUser,
    const char *pchName, float *pData) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamGameServerStats_GetUserAchievement(
    ISteamGameServerStats *self, uint64_steamid steamIDUser,
    const char *pchName, bool *pbAchieved) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamGameServerStats_SetUserStatInt32(
    ISteamGameServerStats *self, uint64_steamid steamIDUser,
    const char *pchName, int32 nData) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamGameServerStats_SetUserStatFloat(
    ISteamGameServerStats *self, uint64_steamid steamIDUser,
    const char *pchName, float fData) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool SteamAPI_ISteamGameServerStats_UpdateUserAvgRateStat(
    ISteamGameServerStats *self, uint64_steamid steamIDUser,
    const char *pchName, float flCountThisSession, double dSessionLength) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool
SteamAPI_ISteamGameServerStats_SetUserAchievement(ISteamGameServerStats *self,
                                                  uint64_steamid steamIDUser,
                                                  const char *pchName) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool
SteamAPI_ISteamGameServerStats_ClearUserAchievement(ISteamGameServerStats *self,
                                                    uint64_steamid steamIDUser,
                                                    const char *pchName) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API SteamAPICall_t SteamAPI_ISteamGameServerStats_StoreUserStats(
    ISteamGameServerStats *self, uint64_steamid steamIDUser) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}

S_API void SteamAPI_ISteamNetworkingFakeUDPPort_DestroyFakeUDPPort(
    ISteamNetworkingFakeUDPPort *self) {
	TRACE_FUNCTION_CALL();
}
S_API EResult SteamAPI_ISteamNetworkingFakeUDPPort_SendMessageToFakeIP(
    ISteamNetworkingFakeUDPPort *self,
    const SteamNetworkingIPAddr &remoteAddress, const void *pData,
    uint32 cbData, int nSendFlags) {
	TRACE_FUNCTION_CALL();
	return k_EResultBusy;
}
S_API int SteamAPI_ISteamNetworkingFakeUDPPort_ReceiveMessages(
    ISteamNetworkingFakeUDPPort *self, SteamNetworkingMessage_t **ppOutMessages,
    int nMaxMessages) {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API void SteamAPI_ISteamNetworkingFakeUDPPort_ScheduleCleanup(
    ISteamNetworkingFakeUDPPort *self,
    const SteamNetworkingIPAddr &remoteAddress) {
	TRACE_FUNCTION_CALL();
}

S_API bool SteamAPI_SteamIPAddress_t_IsSet(SteamIPAddress_t *self) {
	TRACE_FUNCTION_CALL();
	return false;
}

S_API void
SteamAPI_MatchMakingKeyValuePair_t_Construct(MatchMakingKeyValuePair_t *self) {
	TRACE_FUNCTION_CALL();
}

S_API void SteamAPI_servernetadr_t_Construct(servernetadr_t *self) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_servernetadr_t_Init(servernetadr_t *self, unsigned int ip,
                                        uint16 usQueryPort,
                                        uint16 usConnectionPort) {
	TRACE_FUNCTION_CALL();
}
S_API uint16 SteamAPI_servernetadr_t_GetQueryPort(servernetadr_t *self) {
	TRACE_FUNCTION_CALL();
	return 0u;
}
S_API void SteamAPI_servernetadr_t_SetQueryPort(servernetadr_t *self,
                                                uint16 usPort) {
	TRACE_FUNCTION_CALL();
}
S_API uint16 SteamAPI_servernetadr_t_GetConnectionPort(servernetadr_t *self) {
	TRACE_FUNCTION_CALL();
	return 0u;
}
S_API void SteamAPI_servernetadr_t_SetConnectionPort(servernetadr_t *self,
                                                     uint16 usPort) {
	TRACE_FUNCTION_CALL();
}
S_API uint32 SteamAPI_servernetadr_t_GetIP(servernetadr_t *self) {
	TRACE_FUNCTION_CALL();
	return 0u;
}
S_API void SteamAPI_servernetadr_t_SetIP(servernetadr_t *self, uint32 unIP) {
	TRACE_FUNCTION_CALL();
}
S_API const char *
SteamAPI_servernetadr_t_GetConnectionAddressString(servernetadr_t *self) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API const char *
SteamAPI_servernetadr_t_GetQueryAddressString(servernetadr_t *self) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API bool SteamAPI_servernetadr_t_IsLessThan(servernetadr_t *self,
                                              const servernetadr_t &netadr) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API void SteamAPI_servernetadr_t_Assign(servernetadr_t *self,
                                          const servernetadr_t &that) {
	TRACE_FUNCTION_CALL();
}

S_API void SteamAPI_gameserveritem_t_Construct(gameserveritem_t *self) {
	TRACE_FUNCTION_CALL();
}
S_API const char *SteamAPI_gameserveritem_t_GetName(gameserveritem_t *self) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API void SteamAPI_gameserveritem_t_SetName(gameserveritem_t *self,
                                             const char *pName) {
	TRACE_FUNCTION_CALL();
}

S_API void SteamAPI_SteamNetworkingIPAddr_Clear(SteamNetworkingIPAddr *self) {
	TRACE_FUNCTION_CALL();
}
S_API bool
SteamAPI_SteamNetworkingIPAddr_IsIPv6AllZeros(SteamNetworkingIPAddr *self) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API void SteamAPI_SteamNetworkingIPAddr_SetIPv6(SteamNetworkingIPAddr *self,
                                                  const uint8 *ipv6,
                                                  uint16 nPort) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_SteamNetworkingIPAddr_SetIPv4(SteamNetworkingIPAddr *self,
                                                  uint32 nIP, uint16 nPort) {
	TRACE_FUNCTION_CALL();
}
S_API bool SteamAPI_SteamNetworkingIPAddr_IsIPv4(SteamNetworkingIPAddr *self) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API uint32
SteamAPI_SteamNetworkingIPAddr_GetIPv4(SteamNetworkingIPAddr *self) {
	TRACE_FUNCTION_CALL();
	return 0u;
}
S_API void
SteamAPI_SteamNetworkingIPAddr_SetIPv6LocalHost(SteamNetworkingIPAddr *self,
                                                uint16 nPort) {
	TRACE_FUNCTION_CALL();
}
S_API bool
SteamAPI_SteamNetworkingIPAddr_IsLocalHost(SteamNetworkingIPAddr *self) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API void SteamAPI_SteamNetworkingIPAddr_ToString(SteamNetworkingIPAddr *self,
                                                   char *buf, uint32 cbBuf,
                                                   bool bWithPort) {
	TRACE_FUNCTION_CALL();
}
S_API bool
SteamAPI_SteamNetworkingIPAddr_ParseString(SteamNetworkingIPAddr *self,
                                           const char *pszStr) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool
SteamAPI_SteamNetworkingIPAddr_IsEqualTo(SteamNetworkingIPAddr *self,
                                         const SteamNetworkingIPAddr &x) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API ESteamNetworkingFakeIPType
SteamAPI_SteamNetworkingIPAddr_GetFakeIPType(SteamNetworkingIPAddr *self) {
	TRACE_FUNCTION_CALL();
	return k_ESteamNetworkingFakeIPType_Invalid;
}
S_API bool
SteamAPI_SteamNetworkingIPAddr_IsFakeIP(SteamNetworkingIPAddr *self) {
	TRACE_FUNCTION_CALL();
	return false;
}

S_API void
SteamAPI_SteamNetworkingIdentity_Clear(SteamNetworkingIdentity *self) {
	TRACE_FUNCTION_CALL();
}
S_API bool
SteamAPI_SteamNetworkingIdentity_IsInvalid(SteamNetworkingIdentity *self) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API void
SteamAPI_SteamNetworkingIdentity_SetSteamID(SteamNetworkingIdentity *self,
                                            uint64_steamid steamID) {
	TRACE_FUNCTION_CALL();
}
S_API uint64_steamid
SteamAPI_SteamNetworkingIdentity_GetSteamID(SteamNetworkingIdentity *self) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API void
SteamAPI_SteamNetworkingIdentity_SetSteamID64(SteamNetworkingIdentity *self,
                                              uint64 steamID) {
	TRACE_FUNCTION_CALL();
}
S_API uint64
SteamAPI_SteamNetworkingIdentity_GetSteamID64(SteamNetworkingIdentity *self) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API bool SteamAPI_SteamNetworkingIdentity_SetXboxPairwiseID(
    SteamNetworkingIdentity *self, const char *pszString) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API const char *SteamAPI_SteamNetworkingIdentity_GetXboxPairwiseID(
    SteamNetworkingIdentity *self) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API void
SteamAPI_SteamNetworkingIdentity_SetPSNID(SteamNetworkingIdentity *self,
                                          uint64 id) {
	TRACE_FUNCTION_CALL();
}
S_API uint64
SteamAPI_SteamNetworkingIdentity_GetPSNID(SteamNetworkingIdentity *self) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API void
SteamAPI_SteamNetworkingIdentity_SetStadiaID(SteamNetworkingIdentity *self,
                                             uint64 id) {
	TRACE_FUNCTION_CALL();
}
S_API uint64
SteamAPI_SteamNetworkingIdentity_GetStadiaID(SteamNetworkingIdentity *self) {
	TRACE_FUNCTION_CALL();
	return 0ull;
}
S_API void
SteamAPI_SteamNetworkingIdentity_SetIPAddr(SteamNetworkingIdentity *self,
                                           const SteamNetworkingIPAddr &addr) {
	TRACE_FUNCTION_CALL();
}
S_API const SteamNetworkingIPAddr *
SteamAPI_SteamNetworkingIdentity_GetIPAddr(SteamNetworkingIdentity *self) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API void
SteamAPI_SteamNetworkingIdentity_SetIPv4Addr(SteamNetworkingIdentity *self,
                                             uint32 nIPv4, uint16 nPort) {
	TRACE_FUNCTION_CALL();
}
S_API uint32
SteamAPI_SteamNetworkingIdentity_GetIPv4(SteamNetworkingIdentity *self) {
	TRACE_FUNCTION_CALL();
	return 0u;
}
S_API ESteamNetworkingFakeIPType
SteamAPI_SteamNetworkingIdentity_GetFakeIPType(SteamNetworkingIdentity *self) {
	TRACE_FUNCTION_CALL();
	return k_ESteamNetworkingFakeIPType_Invalid;
}
S_API bool
SteamAPI_SteamNetworkingIdentity_IsFakeIP(SteamNetworkingIdentity *self) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API void
SteamAPI_SteamNetworkingIdentity_SetLocalHost(SteamNetworkingIdentity *self) {
	TRACE_FUNCTION_CALL();
}
S_API bool
SteamAPI_SteamNetworkingIdentity_IsLocalHost(SteamNetworkingIdentity *self) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API bool
SteamAPI_SteamNetworkingIdentity_SetGenericString(SteamNetworkingIdentity *self,
                                                  const char *pszString) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API const char *SteamAPI_SteamNetworkingIdentity_GetGenericString(
    SteamNetworkingIdentity *self) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API bool SteamAPI_SteamNetworkingIdentity_SetGenericBytes(
    SteamNetworkingIdentity *self, const void *data, uint32 cbLen) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API const uint8 *
SteamAPI_SteamNetworkingIdentity_GetGenericBytes(SteamNetworkingIdentity *self,
                                                 int &cbLen) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API bool
SteamAPI_SteamNetworkingIdentity_IsEqualTo(SteamNetworkingIdentity *self,
                                           const SteamNetworkingIdentity &x) {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API void
SteamAPI_SteamNetworkingIdentity_ToString(SteamNetworkingIdentity *self,
                                          char *buf, uint32 cbBuf) {
	TRACE_FUNCTION_CALL();
}
S_API bool
SteamAPI_SteamNetworkingIdentity_ParseString(SteamNetworkingIdentity *self,
                                             const char *pszStr) {
	TRACE_FUNCTION_CALL();
	return false;
}

S_API void
SteamAPI_SteamNetworkingMessage_t_Release(SteamNetworkingMessage_t *self) {
	TRACE_FUNCTION_CALL();
}

S_API void SteamAPI_SteamNetworkingConfigValue_t_SetInt32(
    SteamNetworkingConfigValue_t *self, ESteamNetworkingConfigValue eVal,
    int32_t data) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_SteamNetworkingConfigValue_t_SetInt64(
    SteamNetworkingConfigValue_t *self, ESteamNetworkingConfigValue eVal,
    int64_t data) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_SteamNetworkingConfigValue_t_SetFloat(
    SteamNetworkingConfigValue_t *self, ESteamNetworkingConfigValue eVal,
    float data) {
	TRACE_FUNCTION_CALL();
}
S_API void
SteamAPI_SteamNetworkingConfigValue_t_SetPtr(SteamNetworkingConfigValue_t *self,
                                             ESteamNetworkingConfigValue eVal,
                                             void *data) {
	TRACE_FUNCTION_CALL();
}
S_API void SteamAPI_SteamNetworkingConfigValue_t_SetString(
    SteamNetworkingConfigValue_t *self, ESteamNetworkingConfigValue eVal,
    const char *data) {
	TRACE_FUNCTION_CALL();
}

S_API void
SteamAPI_SteamDatagramHostedAddress_Clear(SteamDatagramHostedAddress *self) {
	TRACE_FUNCTION_CALL();
}
S_API SteamNetworkingPOPID
SteamAPI_SteamDatagramHostedAddress_GetPopID(SteamDatagramHostedAddress *self) {
	TRACE_FUNCTION_CALL();
	return 0u;
}
S_API void SteamAPI_SteamDatagramHostedAddress_SetDevAddress(
    SteamDatagramHostedAddress *self, uint32 nIP, uint16 nPort,
    SteamNetworkingPOPID popid) {
	TRACE_FUNCTION_CALL();
}


#endif   