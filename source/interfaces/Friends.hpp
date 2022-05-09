#if not defined(_stick_steam_emu_interface_friends_)
#	define _stick_steam_emu_interface_friends_


#	include <steamworks_sdk/isteamfriends.h>


namespace emu {

	class Friends final : public ISteamFriends {

	public:
		const char *GetPersonaName() override;

		STEAM_CALL_RESULT(SetPersonaNameResponse_t)
		SteamAPICall_t SetPersonaName(const char *pchPersonaName) override;

		EPersonaState GetPersonaState() override;

		int GetFriendCount(int iFriendFlags) override;

		CSteamID GetFriendByIndex(int iFriend, int iFriendFlags) override;

		EFriendRelationship
		GetFriendRelationship(CSteamID steamIDFriend) override;

		EPersonaState GetFriendPersonaState(CSteamID steamIDFriend) override;

		const char *GetFriendPersonaName(CSteamID steamIDFriend) override;

		bool GetFriendGamePlayed(CSteamID steamIDFriend,
		                         FriendGameInfo_t *pFriendGameInfo) override;
		const char *GetFriendPersonaNameHistory(CSteamID steamIDFriend,
		                                        int iPersonaName) override;
		int GetFriendSteamLevel(CSteamID steamIDFriend) override;

		const char *GetPlayerNickname(CSteamID steamIDPlayer) override;

		int GetFriendsGroupCount() override;
		FriendsGroupID_t GetFriendsGroupIDByIndex(int iFG) override;
		const char *
		GetFriendsGroupName(FriendsGroupID_t friendsGroupID) override;
		int
		GetFriendsGroupMembersCount(FriendsGroupID_t friendsGroupID) override;
		void GetFriendsGroupMembersList(FriendsGroupID_t friendsGroupID,
		                                CSteamID *pOutSteamIDMembers,
		                                int nMembersCount) override;

		bool HasFriend(CSteamID steamIDFriend, int iFriendFlags) override;

		int GetClanCount() override;
		CSteamID GetClanByIndex(int iClan) override;
		const char *GetClanName(CSteamID steamIDClan) override;
		const char *GetClanTag(CSteamID steamIDClan) override;
		bool GetClanActivityCounts(CSteamID steamIDClan, int *pnOnline,
		                           int *pnInGame, int *pnChatting) override;

		STEAM_CALL_RESULT(DownloadClanActivityCountsResult_t)
		SteamAPICall_t DownloadClanActivityCounts(CSteamID *psteamIDClans,
		                                          int cClansToRequest) override;

		int GetFriendCountFromSource(CSteamID steamIDSource) override;
		CSteamID GetFriendFromSourceByIndex(CSteamID steamIDSource,
		                                    int iFriend) override;

		bool IsUserInSource(CSteamID steamIDUser,
		                    CSteamID steamIDSource) override;

		void SetInGameVoiceSpeaking(CSteamID steamIDUser,
		                            bool bSpeaking) override;

		void ActivateGameOverlay(const char *pchDialog) override;

		void ActivateGameOverlayToUser(const char *pchDialog,
		                               CSteamID steamID) override;

		void ActivateGameOverlayToWebPage(
		    const char *pchURL,
		    EActivateGameOverlayToWebPageMode eMode) override;

		void ActivateGameOverlayToStore(AppId_t nAppID,
		                                EOverlayToStoreFlag eFlag) override;

		void SetPlayedWith(CSteamID steamIDUserPlayedWith) override;

		void ActivateGameOverlayInviteDialog(CSteamID steamIDLobby) override;

		int GetSmallFriendAvatar(CSteamID steamIDFriend) override;

		int GetMediumFriendAvatar(CSteamID steamIDFriend) override;

		int GetLargeFriendAvatar(CSteamID steamIDFriend) override;

		bool RequestUserInformation(CSteamID steamIDUser,
		                            bool bRequireNameOnly) override;

		STEAM_CALL_RESULT(ClanOfficerListResponse_t)
		SteamAPICall_t RequestClanOfficerList(CSteamID steamIDClan) override;


		CSteamID GetClanOwner(CSteamID steamIDClan) override;
		int GetClanOfficerCount(CSteamID steamIDClan) override;
		CSteamID GetClanOfficerByIndex(CSteamID steamIDClan,
		                               int iOfficer) override;
		uint32 GetUserRestrictions() override;

		bool SetRichPresence(const char *pchKey, const char *pchValue) override;
		void ClearRichPresence() override;
		const char *GetFriendRichPresence(CSteamID steamIDFriend,
		                                  const char *pchKey) override;
		int GetFriendRichPresenceKeyCount(CSteamID steamIDFriend) override;
		const char *GetFriendRichPresenceKeyByIndex(CSteamID steamIDFriend,
		                                            int iKey) override;
		void RequestFriendRichPresence(CSteamID steamIDFriend) override;

		bool InviteUserToGame(CSteamID steamIDFriend,
		                      const char *pchConnectString) override;

		int GetCoplayFriendCount() override;
		CSteamID GetCoplayFriend(int iCoplayFriend) override;
		int GetFriendCoplayTime(CSteamID steamIDFriend) override;
		AppId_t GetFriendCoplayGame(CSteamID steamIDFriend) override;

		STEAM_CALL_RESULT(JoinClanChatRoomCompletionResult_t)
		SteamAPICall_t JoinClanChatRoom(CSteamID steamIDClan) override;
		bool LeaveClanChatRoom(CSteamID steamIDClan) override;
		int GetClanChatMemberCount(CSteamID steamIDClan) override;
		CSteamID GetChatMemberByIndex(CSteamID steamIDClan, int iUser) override;
		bool SendClanChatMessage(CSteamID steamIDClanChat,
		                         const char *pchText) override;
		int GetClanChatMessage(CSteamID steamIDClanChat, int iMessage,
		                       void *prgchText, int cchTextMax,
		                       EChatEntryType *peChatEntryType,
		                       CSteamID *psteamidChatter) override;
		bool IsClanChatAdmin(CSteamID steamIDClanChat,
		                     CSteamID steamIDUser) override;

		bool IsClanChatWindowOpenInSteam(CSteamID steamIDClanChat) override;
		bool OpenClanChatWindowInSteam(CSteamID steamIDClanChat) override;
		bool CloseClanChatWindowInSteam(CSteamID steamIDClanChat) override;

		bool SetListenForFriendsMessages(bool bInterceptEnabled) override;
		bool ReplyToFriendMessage(CSteamID steamIDFriend,
		                          const char *pchMsgToSend) override;
		int GetFriendMessage(CSteamID steamIDFriend, int iMessageID,
		                     void *pvData, int cubData,
		                     EChatEntryType *peChatEntryType) override;

		STEAM_CALL_RESULT(FriendsGetFollowerCount_t)
		SteamAPICall_t GetFollowerCount(CSteamID steamID) override;
		STEAM_CALL_RESULT(FriendsIsFollowing_t)
		SteamAPICall_t IsFollowing(CSteamID steamID) override;
		STEAM_CALL_RESULT(FriendsEnumerateFollowingList_t)
		SteamAPICall_t EnumerateFollowingList(uint32 unStartIndex) override;

		bool IsClanPublic(CSteamID steamIDClan) override;
		bool IsClanOfficialGameGroup(CSteamID steamIDClan) override;

		int GetNumChatsWithUnreadPriorityMessages() override;

		void ActivateGameOverlayRemotePlayTogetherInviteDialog(
		    CSteamID steamIDLobby) override;

		bool RegisterProtocolInOverlayBrowser(const char *pchProtocol) override;

		void ActivateGameOverlayInviteDialogConnectString(
		    const char *pchConnectString) override;
	};


}   // namespace emu


#endif   //_stick_steam_emu_interface_friends_
