#if not defined(_stick_steam_emu_interface_ugc_)
#	define _stick_steam_emu_interface_ugc_


#	include <steamworks_sdk/isteamugc.h>


namespace emu {


	class UGC final : public ISteamUGC {

	public:
		UGCQueryHandle_t CreateQueryUserUGCRequest(
		    AccountID_t unAccountID, EUserUGCList eListType,
		    EUGCMatchingUGCType eMatchingUGCType,
		    EUserUGCListSortOrder eSortOrder, AppId_t nCreatorAppID,
		    AppId_t nConsumerAppID, uint32 unPage) override;

		UGCQueryHandle_t CreateQueryAllUGCRequest(
		    EUGCQuery eQueryType,
		    EUGCMatchingUGCType eMatchingeMatchingUGCTypeFileType,
		    AppId_t nCreatorAppID, AppId_t nConsumerAppID,
		    uint32 unPage) override;

		UGCQueryHandle_t CreateQueryAllUGCRequest(
		    EUGCQuery eQueryType,
		    EUGCMatchingUGCType eMatchingeMatchingUGCTypeFileType,
		    AppId_t nCreatorAppID, AppId_t nConsumerAppID,
		    const char *pchCursor) override;

		UGCQueryHandle_t
		CreateQueryUGCDetailsRequest(PublishedFileId_t *pvecPublishedFileID,
		                             uint32 unNumPublishedFileIDs) override;

		STEAM_CALL_RESULT(SteamUGCQueryCompleted_t)
		SteamAPICall_t SendQueryUGCRequest(UGCQueryHandle_t handle) override;

		bool GetQueryUGCResult(UGCQueryHandle_t handle, uint32 index,
		                       SteamUGCDetails_t *pDetails) override;
		uint32 GetQueryUGCNumTags(UGCQueryHandle_t handle,
		                          uint32 index) override;
		bool GetQueryUGCTag(UGCQueryHandle_t handle, uint32 index,
		                    uint32 indexTag, char *pchValue,
		                    uint32 cchValueSize) override;
		bool GetQueryUGCTagDisplayName(UGCQueryHandle_t handle, uint32 index,
		                               uint32 indexTag, char *pchValue,
		                               uint32 cchValueSize) override;
		bool GetQueryUGCPreviewURL(UGCQueryHandle_t handle, uint32 index,
		                           char *pchURL, uint32 cchURLSize) override;
		bool GetQueryUGCMetadata(UGCQueryHandle_t handle, uint32 index,
		                         char *pchMetadata,
		                         uint32 cchMetadatasize) override;
		bool GetQueryUGCChildren(UGCQueryHandle_t handle, uint32 index,
		                         PublishedFileId_t *pvecPublishedFileID,
		                         uint32 cMaxEntries) override;
		bool GetQueryUGCStatistic(UGCQueryHandle_t handle, uint32 index,
		                          EItemStatistic eStatType,
		                          uint64 *pStatValue) override;
		uint32 GetQueryUGCNumAdditionalPreviews(UGCQueryHandle_t handle,
		                                        uint32 index) override;
		bool GetQueryUGCAdditionalPreview(
		    UGCQueryHandle_t handle, uint32 index, uint32 previewIndex,
		    char *pchURLOrVideoID, uint32 cchURLSize, char *pchOriginalFileName,
		    uint32 cchOriginalFileNameSize,
		    EItemPreviewType *pPreviewType) override;
		uint32 GetQueryUGCNumKeyValueTags(UGCQueryHandle_t handle,
		                                  uint32 index) override;
		bool GetQueryUGCKeyValueTag(UGCQueryHandle_t handle, uint32 index,
		                            uint32 keyValueTagIndex, char *pchKey,
		                            uint32 cchKeySize, char *pchValue,
		                            uint32 cchValueSize) override;

		bool GetQueryUGCKeyValueTag(UGCQueryHandle_t handle, uint32 index,
		                            const char *pchKey, char *pchValue,
		                            uint32 cchValueSize) override;

		bool ReleaseQueryUGCRequest(UGCQueryHandle_t handle) override;

		bool AddRequiredTag(UGCQueryHandle_t handle,
		                    const char *pTagName) override;
		bool
		AddRequiredTagGroup(UGCQueryHandle_t handle,
		                    const SteamParamStringArray_t *pTagGroups) override;
		bool AddExcludedTag(UGCQueryHandle_t handle,
		                    const char *pTagName) override;
		bool SetReturnOnlyIDs(UGCQueryHandle_t handle,
		                      bool bReturnOnlyIDs) override;
		bool SetReturnKeyValueTags(UGCQueryHandle_t handle,
		                           bool bReturnKeyValueTags) override;
		bool SetReturnLongDescription(UGCQueryHandle_t handle,
		                              bool bReturnLongDescription) override;
		bool SetReturnMetadata(UGCQueryHandle_t handle,
		                       bool bReturnMetadata) override;
		bool SetReturnChildren(UGCQueryHandle_t handle,
		                       bool bReturnChildren) override;
		bool
		SetReturnAdditionalPreviews(UGCQueryHandle_t handle,
		                            bool bReturnAdditionalPreviews) override;
		bool SetReturnTotalOnly(UGCQueryHandle_t handle,
		                        bool bReturnTotalOnly) override;
		bool SetReturnPlaytimeStats(UGCQueryHandle_t handle,
		                            uint32 unDays) override;
		bool SetLanguage(UGCQueryHandle_t handle,
		                 const char *pchLanguage) override;
		bool SetAllowCachedResponse(UGCQueryHandle_t handle,
		                            uint32 unMaxAgeSeconds) override;

		bool SetCloudFileNameFilter(UGCQueryHandle_t handle,
		                            const char *pMatchCloudFileName) override;

		bool SetMatchAnyTag(UGCQueryHandle_t handle,
		                    bool bMatchAnyTag) override;
		bool SetSearchText(UGCQueryHandle_t handle,
		                   const char *pSearchText) override;
		bool SetRankedByTrendDays(UGCQueryHandle_t handle,
		                          uint32 unDays) override;
		bool SetTimeCreatedDateRange(UGCQueryHandle_t handle, RTime32 rtStart,
		                             RTime32 rtEnd) override;
		bool SetTimeUpdatedDateRange(UGCQueryHandle_t handle, RTime32 rtStart,
		                             RTime32 rtEnd) override;
		bool AddRequiredKeyValueTag(UGCQueryHandle_t handle, const char *pKey,
		                            const char *pValue) override;

		STEAM_CALL_RESULT(SteamUGCRequestUGCDetailsResult_t)
		SteamAPICall_t RequestUGCDetails(PublishedFileId_t nPublishedFileID,
		                                 uint32 unMaxAgeSeconds) override;

		STEAM_CALL_RESULT(CreateItemResult_t)
		SteamAPICall_t CreateItem(AppId_t nConsumerAppId,
		                          EWorkshopFileType eFileType) override;
		UGCUpdateHandle_t
		StartItemUpdate(AppId_t nConsumerAppId,
		                PublishedFileId_t nPublishedFileID) override;
		bool SetItemTitle(UGCUpdateHandle_t handle,
		                  const char *pchTitle) override;
		bool SetItemDescription(UGCUpdateHandle_t handle,
		                        const char *pchDescription) override;
		bool SetItemUpdateLanguage(UGCUpdateHandle_t handle,
		                           const char *pchLanguage) override;
		bool SetItemMetadata(UGCUpdateHandle_t handle,
		                     const char *pchMetaData) override;
		bool SetItemVisibility(
		    UGCUpdateHandle_t handle,
		    ERemoteStoragePublishedFileVisibility eVisibility) override;
		bool SetItemTags(UGCUpdateHandle_t updateHandle,
		                 const SteamParamStringArray_t *pTags) override;
		bool SetItemContent(UGCUpdateHandle_t handle,
		                    const char *pszContentFolder) override;
		bool SetItemPreview(UGCUpdateHandle_t handle,
		                    const char *pszPreviewFile) override;
		bool SetAllowLegacyUpload(UGCUpdateHandle_t handle,
		                          bool bAllowLegacyUpload) override;
		bool RemoveAllItemKeyValueTags(UGCUpdateHandle_t handle) override;
		bool RemoveItemKeyValueTags(UGCUpdateHandle_t handle,
		                            const char *pchKey) override;
		bool AddItemKeyValueTag(UGCUpdateHandle_t handle, const char *pchKey,
		                        const char *pchValue) override;
		bool AddItemPreviewFile(UGCUpdateHandle_t handle,
		                        const char *pszPreviewFile,
		                        EItemPreviewType type) override;
		bool AddItemPreviewVideo(UGCUpdateHandle_t handle,
		                         const char *pszVideoID) override;
		bool UpdateItemPreviewFile(UGCUpdateHandle_t handle, uint32 index,
		                           const char *pszPreviewFile) override;
		bool UpdateItemPreviewVideo(UGCUpdateHandle_t handle, uint32 index,
		                            const char *pszVideoID) override;
		bool RemoveItemPreview(UGCUpdateHandle_t handle, uint32 index) override;
		STEAM_CALL_RESULT(SubmitItemUpdateResult_t)
		SteamAPICall_t SubmitItemUpdate(UGCUpdateHandle_t handle,
		                                const char *pchChangeNote) override;
		EItemUpdateStatus GetItemUpdateProgress(UGCUpdateHandle_t handle,
		                                        uint64 *punBytesProcessed,
		                                        uint64 *punBytesTotal) override;

		STEAM_CALL_RESULT(SetUserItemVoteResult_t)
		SteamAPICall_t SetUserItemVote(PublishedFileId_t nPublishedFileID,
		                               bool bVoteUp) override;
		STEAM_CALL_RESULT(GetUserItemVoteResult_t)
		SteamAPICall_t
		GetUserItemVote(PublishedFileId_t nPublishedFileID) override;
		STEAM_CALL_RESULT(UserFavoriteItemsListChanged_t)
		SteamAPICall_t
		AddItemToFavorites(AppId_t nAppId,
		                   PublishedFileId_t nPublishedFileID) override;
		STEAM_CALL_RESULT(UserFavoriteItemsListChanged_t)
		SteamAPICall_t
		RemoveItemFromFavorites(AppId_t nAppId,
		                        PublishedFileId_t nPublishedFileID) override;
		STEAM_CALL_RESULT(RemoteStorageSubscribePublishedFileResult_t)
		SteamAPICall_t
		SubscribeItem(PublishedFileId_t nPublishedFileID) override;
		STEAM_CALL_RESULT(RemoteStorageUnsubscribePublishedFileResult_t)
		SteamAPICall_t
		UnsubscribeItem(PublishedFileId_t nPublishedFileID) override;
		uint32 GetNumSubscribedItems() override;
		uint32 GetSubscribedItems(PublishedFileId_t *pvecPublishedFileID,
		                          uint32 cMaxEntries) override;
		uint32 GetItemState(PublishedFileId_t nPublishedFileID) override;

		bool GetItemInstallInfo(PublishedFileId_t nPublishedFileID,
		                        uint64 *punSizeOnDisk, char *pchFolder,
		                        uint32 cchFolderSize,
		                        uint32 *punTimeStamp) override;

		bool GetItemDownloadInfo(PublishedFileId_t nPublishedFileID,
		                         uint64 *punBytesDownloaded,
		                         uint64 *punBytesTotal) override;

		bool DownloadItem(PublishedFileId_t nPublishedFileID,
		                  bool bHighPriority) override;

		bool BInitWorkshopForGameServer(DepotId_t unWorkshopDepotID,
		                                const char *pszFolder) override;

		void SuspendDownloads(bool bSuspend) override;

		STEAM_CALL_RESULT(StartPlaytimeTrackingResult_t)
		SteamAPICall_t
		StartPlaytimeTracking(PublishedFileId_t *pvecPublishedFileID,
		                      uint32 unNumPublishedFileIDs) override;
		STEAM_CALL_RESULT(StopPlaytimeTrackingResult_t)
		SteamAPICall_t
		StopPlaytimeTracking(PublishedFileId_t *pvecPublishedFileID,
		                     uint32 unNumPublishedFileIDs) override;
		STEAM_CALL_RESULT(StopPlaytimeTrackingResult_t)
		SteamAPICall_t StopPlaytimeTrackingForAllItems() override;

		STEAM_CALL_RESULT(AddUGCDependencyResult_t)
		SteamAPICall_t
		AddDependency(PublishedFileId_t nParentPublishedFileID,
		              PublishedFileId_t nChildPublishedFileID) override;
		STEAM_CALL_RESULT(RemoveUGCDependencyResult_t)
		SteamAPICall_t
		RemoveDependency(PublishedFileId_t nParentPublishedFileID,
		                 PublishedFileId_t nChildPublishedFileID) override;

		STEAM_CALL_RESULT(AddAppDependencyResult_t)
		SteamAPICall_t AddAppDependency(PublishedFileId_t nPublishedFileID,
		                                AppId_t nAppID) override;
		STEAM_CALL_RESULT(RemoveAppDependencyResult_t)
		SteamAPICall_t RemoveAppDependency(PublishedFileId_t nPublishedFileID,
		                                   AppId_t nAppID) override;
		STEAM_CALL_RESULT(GetAppDependenciesResult_t)
		SteamAPICall_t
		GetAppDependencies(PublishedFileId_t nPublishedFileID) override;

		STEAM_CALL_RESULT(DeleteItemResult_t)
		SteamAPICall_t DeleteItem(PublishedFileId_t nPublishedFileID) override;

		bool ShowWorkshopEULA() override;
		STEAM_CALL_RESULT(WorkshopEULAStatus_t)
		SteamAPICall_t GetWorkshopEULAStatus() override;
	};


}   // namespace emu


#endif   //_stick_steam_emu_interface_ugc_
