#include "UGC.hpp"


#if defined(_stick_steam_emu_interface_ugc_)


#	include "../common.hpp"


namespace emu {


	UGCQueryHandle_t UGC::CreateQueryUserUGCRequest(
	    AccountID_t unAccountID, EUserUGCList eListType,
	    EUGCMatchingUGCType eMatchingUGCType, EUserUGCListSortOrder eSortOrder,
	    AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}

	UGCQueryHandle_t UGC::CreateQueryAllUGCRequest(
	    EUGCQuery eQueryType,
	    EUGCMatchingUGCType eMatchingeMatchingUGCTypeFileType,
	    AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}

	UGCQueryHandle_t UGC::CreateQueryAllUGCRequest(
	    EUGCQuery eQueryType,
	    EUGCMatchingUGCType eMatchingeMatchingUGCTypeFileType,
	    AppId_t nCreatorAppID, AppId_t nConsumerAppID, const char *pchCursor) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}

	UGCQueryHandle_t
	UGC::CreateQueryUGCDetailsRequest(PublishedFileId_t *pvecPublishedFileID,
	                                  uint32 unNumPublishedFileIDs) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}

	SteamAPICall_t UGC::SendQueryUGCRequest(UGCQueryHandle_t handle) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}

	bool UGC::GetQueryUGCResult(UGCQueryHandle_t handle, uint32 index,
	                            SteamUGCDetails_t *pDetails) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	uint32 UGC::GetQueryUGCNumTags(UGCQueryHandle_t handle, uint32 index) {
		TRACE_FUNCTION_CALL();
		return 0u;
	}
	bool UGC::GetQueryUGCTag(UGCQueryHandle_t handle, uint32 index,
	                         uint32 indexTag, char *pchValue,
	                         uint32 cchValueSize) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool UGC::GetQueryUGCTagDisplayName(UGCQueryHandle_t handle, uint32 index,
	                                    uint32 indexTag, char *pchValue,
	                                    uint32 cchValueSize) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool UGC::GetQueryUGCPreviewURL(UGCQueryHandle_t handle, uint32 index,
	                                char *pchURL, uint32 cchURLSize) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool UGC::GetQueryUGCMetadata(UGCQueryHandle_t handle, uint32 index,
	                              char *pchMetadata, uint32 cchMetadatasize) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool UGC::GetQueryUGCChildren(UGCQueryHandle_t handle, uint32 index,
	                              PublishedFileId_t *pvecPublishedFileID,
	                              uint32 cMaxEntries) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool UGC::GetQueryUGCStatistic(UGCQueryHandle_t handle, uint32 index,
	                               EItemStatistic eStatType,
	                               uint64 *pStatValue) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	uint32 UGC::GetQueryUGCNumAdditionalPreviews(UGCQueryHandle_t handle,
	                                             uint32 index) {
		TRACE_FUNCTION_CALL();
		return 0u;
	}
	bool UGC::GetQueryUGCAdditionalPreview(
	    UGCQueryHandle_t handle, uint32 index, uint32 previewIndex,
	    char *pchURLOrVideoID, uint32 cchURLSize, char *pchOriginalFileName,
	    uint32 cchOriginalFileNameSize, EItemPreviewType *pPreviewType) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	uint32 UGC::GetQueryUGCNumKeyValueTags(UGCQueryHandle_t handle,
	                                       uint32 index) {
		TRACE_FUNCTION_CALL();
		return 0u;
	}
	bool UGC::GetQueryUGCKeyValueTag(UGCQueryHandle_t handle, uint32 index,
	                                 uint32 keyValueTagIndex, char *pchKey,
	                                 uint32 cchKeySize, char *pchValue,
	                                 uint32 cchValueSize) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool UGC::GetQueryUGCKeyValueTag(UGCQueryHandle_t handle, uint32 index,
	                                 const char *pchKey, char *pchValue,
	                                 uint32 cchValueSize) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool UGC::ReleaseQueryUGCRequest(UGCQueryHandle_t handle) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool UGC::AddRequiredTag(UGCQueryHandle_t handle, const char *pTagName) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool UGC::AddRequiredTagGroup(UGCQueryHandle_t handle,
	                              const SteamParamStringArray_t *pTagGroups) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool UGC::AddExcludedTag(UGCQueryHandle_t handle, const char *pTagName) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool UGC::SetReturnOnlyIDs(UGCQueryHandle_t handle, bool bReturnOnlyIDs) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool UGC::SetReturnKeyValueTags(UGCQueryHandle_t handle,
	                                bool bReturnKeyValueTags) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool UGC::SetReturnLongDescription(UGCQueryHandle_t handle,
	                                   bool bReturnLongDescription) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool UGC::SetReturnMetadata(UGCQueryHandle_t handle, bool bReturnMetadata) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool UGC::SetReturnChildren(UGCQueryHandle_t handle, bool bReturnChildren) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool UGC::SetReturnAdditionalPreviews(UGCQueryHandle_t handle,
	                                      bool bReturnAdditionalPreviews) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool UGC::SetReturnTotalOnly(UGCQueryHandle_t handle,
	                             bool bReturnTotalOnly) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool UGC::SetReturnPlaytimeStats(UGCQueryHandle_t handle, uint32 unDays) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool UGC::SetLanguage(UGCQueryHandle_t handle, const char *pchLanguage) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool UGC::SetAllowCachedResponse(UGCQueryHandle_t handle,
	                                 uint32 unMaxAgeSeconds) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool UGC::SetCloudFileNameFilter(UGCQueryHandle_t handle,
	                                 const char *pMatchCloudFileName) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool UGC::SetMatchAnyTag(UGCQueryHandle_t handle, bool bMatchAnyTag) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool UGC::SetSearchText(UGCQueryHandle_t handle, const char *pSearchText) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool UGC::SetRankedByTrendDays(UGCQueryHandle_t handle, uint32 unDays) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool UGC::SetTimeCreatedDateRange(UGCQueryHandle_t handle, RTime32 rtStart,
	                                  RTime32 rtEnd) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool UGC::SetTimeUpdatedDateRange(UGCQueryHandle_t handle, RTime32 rtStart,
	                                  RTime32 rtEnd) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool UGC::AddRequiredKeyValueTag(UGCQueryHandle_t handle, const char *pKey,
	                                 const char *pValue) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	SteamAPICall_t UGC::RequestUGCDetails(PublishedFileId_t nPublishedFileID,
	                                      uint32 unMaxAgeSeconds) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}

	SteamAPICall_t UGC::CreateItem(AppId_t nConsumerAppId,
	                               EWorkshopFileType eFileType) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}
	UGCUpdateHandle_t UGC::StartItemUpdate(AppId_t nConsumerAppId,
	                                       PublishedFileId_t nPublishedFileID) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}
	bool UGC::SetItemTitle(UGCUpdateHandle_t handle, const char *pchTitle) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool UGC::SetItemDescription(UGCUpdateHandle_t handle,
	                             const char *pchDescription) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool UGC::SetItemUpdateLanguage(UGCUpdateHandle_t handle,
	                                const char *pchLanguage) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool UGC::SetItemMetadata(UGCUpdateHandle_t handle,
	                          const char *pchMetaData) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool
	UGC::SetItemVisibility(UGCUpdateHandle_t handle,
	                       ERemoteStoragePublishedFileVisibility eVisibility) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool UGC::SetItemTags(UGCUpdateHandle_t updateHandle,
	                      const SteamParamStringArray_t *pTags) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool UGC::SetItemContent(UGCUpdateHandle_t handle,
	                         const char *pszContentFolder) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool UGC::SetItemPreview(UGCUpdateHandle_t handle,
	                         const char *pszPreviewFile) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool UGC::SetAllowLegacyUpload(UGCUpdateHandle_t handle,
	                               bool bAllowLegacyUpload) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool UGC::RemoveAllItemKeyValueTags(UGCUpdateHandle_t handle) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool UGC::RemoveItemKeyValueTags(UGCUpdateHandle_t handle,
	                                 const char *pchKey) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool UGC::AddItemKeyValueTag(UGCUpdateHandle_t handle, const char *pchKey,
	                             const char *pchValue) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool UGC::AddItemPreviewFile(UGCUpdateHandle_t handle,
	                             const char *pszPreviewFile,
	                             EItemPreviewType type) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool UGC::AddItemPreviewVideo(UGCUpdateHandle_t handle,
	                              const char *pszVideoID) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool UGC::UpdateItemPreviewFile(UGCUpdateHandle_t handle, uint32 index,
	                                const char *pszPreviewFile) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool UGC::UpdateItemPreviewVideo(UGCUpdateHandle_t handle, uint32 index,
	                                 const char *pszVideoID) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool UGC::RemoveItemPreview(UGCUpdateHandle_t handle, uint32 index) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	SteamAPICall_t UGC::SubmitItemUpdate(UGCUpdateHandle_t handle,
	                                     const char *pchChangeNote) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}
	EItemUpdateStatus UGC::GetItemUpdateProgress(UGCUpdateHandle_t handle,
	                                             uint64 *punBytesProcessed,
	                                             uint64 *punBytesTotal) {
		TRACE_FUNCTION_CALL();
		return k_EItemUpdateStatusInvalid;
	}

	SteamAPICall_t UGC::SetUserItemVote(PublishedFileId_t nPublishedFileID,
	                                    bool bVoteUp) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}
	SteamAPICall_t UGC::GetUserItemVote(PublishedFileId_t nPublishedFileID) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}
	SteamAPICall_t UGC::AddItemToFavorites(AppId_t nAppId,
	                                       PublishedFileId_t nPublishedFileID) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}
	SteamAPICall_t
	UGC::RemoveItemFromFavorites(AppId_t nAppId,
	                             PublishedFileId_t nPublishedFileID) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}
	SteamAPICall_t UGC::SubscribeItem(PublishedFileId_t nPublishedFileID) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}
	SteamAPICall_t UGC::UnsubscribeItem(PublishedFileId_t nPublishedFileID) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}
	uint32 UGC::GetNumSubscribedItems() {
		TRACE_FUNCTION_CALL();
		return 0u;
	}
	uint32 UGC::GetSubscribedItems(PublishedFileId_t *pvecPublishedFileID,
	                               uint32 cMaxEntries) {
		TRACE_FUNCTION_CALL();
		return 0u;
	}
	uint32 UGC::GetItemState(PublishedFileId_t nPublishedFileID) {
		TRACE_FUNCTION_CALL();
		return 0u;
	}
	bool UGC::GetItemInstallInfo(PublishedFileId_t nPublishedFileID,
	                             uint64 *punSizeOnDisk, char *pchFolder,
	                             uint32 cchFolderSize, uint32 *punTimeStamp) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool UGC::GetItemDownloadInfo(PublishedFileId_t nPublishedFileID,
	                              uint64 *punBytesDownloaded,
	                              uint64 *punBytesTotal) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool UGC::DownloadItem(PublishedFileId_t nPublishedFileID,
	                       bool bHighPriority) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool UGC::BInitWorkshopForGameServer(DepotId_t unWorkshopDepotID,
	                                     const char *pszFolder) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	void UGC::SuspendDownloads(bool bSuspend) {
		TRACE_FUNCTION_CALL();
	}

	SteamAPICall_t
	UGC::StartPlaytimeTracking(PublishedFileId_t *pvecPublishedFileID,
	                           uint32 unNumPublishedFileIDs) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}
	SteamAPICall_t
	UGC::StopPlaytimeTracking(PublishedFileId_t *pvecPublishedFileID,
	                          uint32 unNumPublishedFileIDs) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}
	SteamAPICall_t UGC::StopPlaytimeTrackingForAllItems() {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}

	SteamAPICall_t UGC::AddDependency(PublishedFileId_t nParentPublishedFileID,
	                                  PublishedFileId_t nChildPublishedFileID) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}
	SteamAPICall_t
	UGC::RemoveDependency(PublishedFileId_t nParentPublishedFileID,
	                      PublishedFileId_t nChildPublishedFileID) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}

	SteamAPICall_t UGC::AddAppDependency(PublishedFileId_t nPublishedFileID,
	                                     AppId_t nAppID) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}
	SteamAPICall_t UGC::RemoveAppDependency(PublishedFileId_t nPublishedFileID,
	                                        AppId_t nAppID) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}
	SteamAPICall_t UGC::GetAppDependencies(PublishedFileId_t nPublishedFileID) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}

	SteamAPICall_t UGC::DeleteItem(PublishedFileId_t nPublishedFileID) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}

	bool UGC::ShowWorkshopEULA() {
		TRACE_FUNCTION_CALL();
		return false;
	}
	SteamAPICall_t UGC::GetWorkshopEULAStatus() {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}


}   // namespace emu


#endif   //_stick_steam_emu_interface_ugc_
