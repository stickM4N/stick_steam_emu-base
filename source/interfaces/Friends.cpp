#include "Friends.hpp"


#if defined(_stick_steam_emu_interface_friends_)


#	include "../common.hpp"


namespace emu {

	const char *Friends::GetPersonaName() {
		TRACE_FUNCTION_CALL();
		return nullptr;
	}

	SteamAPICall_t Friends::SetPersonaName(const char *pchPersonaName) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}

	EPersonaState Friends::GetPersonaState() {
		TRACE_FUNCTION_CALL();
		return k_EPersonaStateOffline;
	}

	int Friends::GetFriendCount(int iFriendFlags) {
		TRACE_FUNCTION_CALL();
		return 0;
	}

	CSteamID Friends::GetFriendByIndex(int iFriend, int iFriendFlags) {
		TRACE_FUNCTION_CALL();
		return {};
	}

	EFriendRelationship Friends::GetFriendRelationship(CSteamID steamIDFriend) {
		TRACE_FUNCTION_CALL();
		return k_EFriendRelationshipNone;
	}

	EPersonaState Friends::GetFriendPersonaState(CSteamID steamIDFriend) {
		TRACE_FUNCTION_CALL();
		return k_EPersonaStateOffline;
	}

	const char *Friends::GetFriendPersonaName(CSteamID steamIDFriend) {
		TRACE_FUNCTION_CALL();
		return nullptr;
	}

	bool Friends::GetFriendGamePlayed(CSteamID steamIDFriend,
	                                  FriendGameInfo_t *pFriendGameInfo) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	const char *Friends::GetFriendPersonaNameHistory(CSteamID steamIDFriend,
	                                                 int iPersonaName) {
		TRACE_FUNCTION_CALL();
		return nullptr;
	}

	int Friends::GetFriendSteamLevel(CSteamID steamIDFriend) {
		TRACE_FUNCTION_CALL();
		return 0;
	}

	const char *Friends::GetPlayerNickname(CSteamID steamIDPlayer) {
		TRACE_FUNCTION_CALL();
		return nullptr;
	}

	int Friends::GetFriendsGroupCount() {
		TRACE_FUNCTION_CALL();
		return 0;
	}
	FriendsGroupID_t Friends::GetFriendsGroupIDByIndex(int iFG) {
		TRACE_FUNCTION_CALL();
		return 0;
	}
	const char *Friends::GetFriendsGroupName(FriendsGroupID_t friendsGroupID) {
		TRACE_FUNCTION_CALL();
		return nullptr;
	}
	int Friends::GetFriendsGroupMembersCount(FriendsGroupID_t friendsGroupID) {
		TRACE_FUNCTION_CALL();
		return 0;
	}
	void Friends::GetFriendsGroupMembersList(FriendsGroupID_t friendsGroupID,
	                                         CSteamID *pOutSteamIDMembers,
	                                         int nMembersCount) {
		TRACE_FUNCTION_CALL();
	}

	bool Friends::HasFriend(CSteamID steamIDFriend, int iFriendFlags) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	int Friends::GetClanCount() {
		TRACE_FUNCTION_CALL();
		return 0;
	}
	CSteamID Friends::GetClanByIndex(int iClan) {
		TRACE_FUNCTION_CALL();
		return {};
	}
	const char *Friends::GetClanName(CSteamID steamIDClan) {
		TRACE_FUNCTION_CALL();
		return nullptr;
	}
	const char *Friends::GetClanTag(CSteamID steamIDClan) {
		TRACE_FUNCTION_CALL();
		return nullptr;
	}
	bool Friends::GetClanActivityCounts(CSteamID steamIDClan, int *pnOnline,
	                                    int *pnInGame, int *pnChatting) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	SteamAPICall_t Friends::DownloadClanActivityCounts(CSteamID *psteamIDClans,
	                                                   int cClansToRequest) {
		return 0;
	}

	int Friends::GetFriendCountFromSource(CSteamID steamIDSource) {
		TRACE_FUNCTION_CALL();
		return 0;
	}
	CSteamID Friends::GetFriendFromSourceByIndex(CSteamID steamIDSource,
	                                             int iFriend) {
		TRACE_FUNCTION_CALL();
		return {};
	}

	bool Friends::IsUserInSource(CSteamID steamIDUser, CSteamID steamIDSource) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	void Friends::SetInGameVoiceSpeaking(CSteamID steamIDUser, bool bSpeaking) {
		TRACE_FUNCTION_CALL();
	}

	void Friends::ActivateGameOverlay(const char *pchDialog) {
		TRACE_FUNCTION_CALL();
	}

	void Friends::ActivateGameOverlayToUser(const char *pchDialog,
	                                        CSteamID steamID) {
		TRACE_FUNCTION_CALL();
	}

	void Friends::ActivateGameOverlayToWebPage(
	    const char *pchURL, EActivateGameOverlayToWebPageMode eMode) {
		TRACE_FUNCTION_CALL();
	}

	void Friends::ActivateGameOverlayToStore(AppId_t nAppID,
	                                         EOverlayToStoreFlag eFlag) {
		TRACE_FUNCTION_CALL();
	}

	void Friends::SetPlayedWith(CSteamID steamIDUserPlayedWith) {
		TRACE_FUNCTION_CALL();
	}

	void Friends::ActivateGameOverlayInviteDialog(CSteamID steamIDLobby) {
		TRACE_FUNCTION_CALL();
	}

	int Friends::GetSmallFriendAvatar(CSteamID steamIDFriend) {
		TRACE_FUNCTION_CALL();
		return 0;
	}

	int Friends::GetMediumFriendAvatar(CSteamID steamIDFriend) {
		TRACE_FUNCTION_CALL();
		return 0;
	}

	int Friends::GetLargeFriendAvatar(CSteamID steamIDFriend) {
		TRACE_FUNCTION_CALL();
		return 0;
	}

	bool Friends::RequestUserInformation(CSteamID steamIDUser,
	                                     bool bRequireNameOnly) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	SteamAPICall_t Friends::RequestClanOfficerList(CSteamID steamIDClan) {
		TRACE_FUNCTION_CALL();
		return 0;
	}


	CSteamID Friends::GetClanOwner(CSteamID steamIDClan) {
		TRACE_FUNCTION_CALL();
		return {};
	}
	int Friends::GetClanOfficerCount(CSteamID steamIDClan) {
		TRACE_FUNCTION_CALL();
		return 0;
	}
	CSteamID Friends::GetClanOfficerByIndex(CSteamID steamIDClan,
	                                        int iOfficer) {
		TRACE_FUNCTION_CALL();
		return {};
	}
	uint32 Friends::GetUserRestrictions() {
		TRACE_FUNCTION_CALL();
		return 0u;
	}

	bool Friends::SetRichPresence(const char *pchKey, const char *pchValue) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	void Friends::ClearRichPresence() {
		TRACE_FUNCTION_CALL();
	}
	const char *Friends::GetFriendRichPresence(CSteamID steamIDFriend,
	                                           const char *pchKey) {
		TRACE_FUNCTION_CALL();
		return nullptr;
	}
	int Friends::GetFriendRichPresenceKeyCount(CSteamID steamIDFriend) {
		TRACE_FUNCTION_CALL();
		return 0;
	}
	const char *Friends::GetFriendRichPresenceKeyByIndex(CSteamID steamIDFriend,
	                                                     int iKey) {
		TRACE_FUNCTION_CALL();
		return nullptr;
	}
	void Friends::RequestFriendRichPresence(CSteamID steamIDFriend) {
		TRACE_FUNCTION_CALL();
	}

	bool Friends::InviteUserToGame(CSteamID steamIDFriend,
	                               const char *pchConnectString) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	int Friends::GetCoplayFriendCount() {
		TRACE_FUNCTION_CALL();
		return 0;
	}
	CSteamID Friends::GetCoplayFriend(int iCoplayFriend) {
		TRACE_FUNCTION_CALL();
		return {};
	}
	int Friends::GetFriendCoplayTime(CSteamID steamIDFriend) {
		TRACE_FUNCTION_CALL();
		return 0;
	}
	AppId_t Friends::GetFriendCoplayGame(CSteamID steamIDFriend) {
		TRACE_FUNCTION_CALL();
		return 0u;
	}
	SteamAPICall_t Friends::JoinClanChatRoom(CSteamID steamIDClan) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}
	bool Friends::LeaveClanChatRoom(CSteamID steamIDClan) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	int Friends::GetClanChatMemberCount(CSteamID steamIDClan) {
		TRACE_FUNCTION_CALL();
		return 0;
	}
	CSteamID Friends::GetChatMemberByIndex(CSteamID steamIDClan, int iUser) {
		TRACE_FUNCTION_CALL();
		return {};
	}
	bool Friends::SendClanChatMessage(CSteamID steamIDClanChat,
	                                  const char *pchText) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	int Friends::GetClanChatMessage(CSteamID steamIDClanChat, int iMessage,
	                                void *prgchText, int cchTextMax,
	                                EChatEntryType *peChatEntryType,
	                                CSteamID *psteamidChatter) {
		TRACE_FUNCTION_CALL();
		return 0;
	}
	bool Friends::IsClanChatAdmin(CSteamID steamIDClanChat,
	                              CSteamID steamIDUser) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool Friends::IsClanChatWindowOpenInSteam(CSteamID steamIDClanChat) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool Friends::OpenClanChatWindowInSteam(CSteamID steamIDClanChat) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool Friends::CloseClanChatWindowInSteam(CSteamID steamIDClanChat) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool Friends::SetListenForFriendsMessages(bool bInterceptEnabled) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool Friends::ReplyToFriendMessage(CSteamID steamIDFriend,
	                                   const char *pchMsgToSend) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	int Friends::GetFriendMessage(CSteamID steamIDFriend, int iMessageID,
	                              void *pvData, int cubData,
	                              EChatEntryType *peChatEntryType) {
		TRACE_FUNCTION_CALL();
		return 0;
	}

	SteamAPICall_t Friends::GetFollowerCount(CSteamID steamID) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}
	SteamAPICall_t Friends::IsFollowing(CSteamID steamID) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}
	SteamAPICall_t Friends::EnumerateFollowingList(uint32 unStartIndex) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}

	bool Friends::IsClanPublic(CSteamID steamIDClan) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool Friends::IsClanOfficialGameGroup(CSteamID steamIDClan) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	int Friends::GetNumChatsWithUnreadPriorityMessages() {
		TRACE_FUNCTION_CALL();
		return 0;
	}

	void Friends::ActivateGameOverlayRemotePlayTogetherInviteDialog(
	    CSteamID steamIDLobby) {
		TRACE_FUNCTION_CALL();
	}

	bool Friends::RegisterProtocolInOverlayBrowser(const char *pchProtocol) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	void Friends::ActivateGameOverlayInviteDialogConnectString(
	    const char *pchConnectString) {
		TRACE_FUNCTION_CALL();
	}


}   // namespace emu


#endif   //_stick_steam_emu_interface_friends_
