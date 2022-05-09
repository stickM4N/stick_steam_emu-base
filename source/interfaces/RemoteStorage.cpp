#include "RemoteStorage.hpp"


#if defined(_stick_steam_emu_interface_remote_storage_)


#	include "../common.hpp"


namespace emu {


	bool RemoteStorage::FileWrite(const char *pchFile, const void *pvData,
	                              int32 cubData) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	int32 RemoteStorage::FileRead(const char *pchFile, void *pvData,
	                              int32 cubDataToRead) {
		TRACE_FUNCTION_CALL();
		return 0;
	}

	SteamAPICall_t RemoteStorage::FileWriteAsync(const char *pchFile,
	                                             const void *pvData,
	                                             uint32 cubData) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}
	SteamAPICall_t RemoteStorage::FileReadAsync(const char *pchFile,
	                                            uint32 nOffset,
	                                            uint32 cubToRead) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}
	bool RemoteStorage::FileReadAsyncComplete(SteamAPICall_t hReadCall,
	                                          void *pvBuffer,
	                                          uint32 cubToRead) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool RemoteStorage::FileForget(const char *pchFile) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool RemoteStorage::FileDelete(const char *pchFile) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	SteamAPICall_t RemoteStorage::FileShare(const char *pchFile) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}
	bool RemoteStorage::SetSyncPlatforms(
	    const char *pchFile, ERemoteStoragePlatform eRemoteStoragePlatform) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	UGCFileWriteStreamHandle_t
	RemoteStorage::FileWriteStreamOpen(const char *pchFile) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}
	bool RemoteStorage::FileWriteStreamWriteChunk(
	    UGCFileWriteStreamHandle_t writeHandle, const void *pvData,
	    int32 cubData) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool RemoteStorage::FileWriteStreamClose(
	    UGCFileWriteStreamHandle_t writeHandle) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool RemoteStorage::FileWriteStreamCancel(
	    UGCFileWriteStreamHandle_t writeHandle) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool RemoteStorage::FileExists(const char *pchFile) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool RemoteStorage::FilePersisted(const char *pchFile) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	int32 RemoteStorage::GetFileSize(const char *pchFile) {
		TRACE_FUNCTION_CALL();
		return 0;
	}
	int64 RemoteStorage::GetFileTimestamp(const char *pchFile) {
		TRACE_FUNCTION_CALL();
		return 0ll;
	}
	ERemoteStoragePlatform
	RemoteStorage::GetSyncPlatforms(const char *pchFile) {
		TRACE_FUNCTION_CALL();
		return k_ERemoteStoragePlatformNone;
	}

	int32 RemoteStorage::GetFileCount() {
		TRACE_FUNCTION_CALL();
		return 0;
	}
	const char *RemoteStorage::GetFileNameAndSize(int iFile,
	                                              int32 *pnFileSizeInBytes) {
		TRACE_FUNCTION_CALL();
		return nullptr;
	}

	bool RemoteStorage::GetQuota(uint64 *pnTotalBytes,
	                             uint64 *puAvailableBytes) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool RemoteStorage::IsCloudEnabledForAccount() {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool RemoteStorage::IsCloudEnabledForApp() {
		TRACE_FUNCTION_CALL();
		return false;
	}

	void RemoteStorage::SetCloudEnabledForApp(bool bEnabled) {
		TRACE_FUNCTION_CALL();
	}
	SteamAPICall_t RemoteStorage::UGCDownload(UGCHandle_t hContent,
	                                          uint32 unPriority) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}

	bool RemoteStorage::GetUGCDownloadProgress(UGCHandle_t hContent,
	                                           int32 *pnBytesDownloaded,
	                                           int32 *pnBytesExpected) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool RemoteStorage::GetUGCDetails(UGCHandle_t hContent, AppId_t *pnAppID,
	                                  char **ppchName, int32 *pnFileSizeInBytes,
	                                  CSteamID *pSteamIDOwner) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	int32 RemoteStorage::UGCRead(UGCHandle_t hContent, void *pvData,
	                             int32 cubDataToRead, uint32 cOffset,
	                             EUGCReadAction eAction) {
		TRACE_FUNCTION_CALL();
		return 0;
	}

	int32 RemoteStorage::GetCachedUGCCount() {
		TRACE_FUNCTION_CALL();
		return 0;
	}
	UGCHandle_t RemoteStorage::GetCachedUGCHandle(int32 iCachedContent) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}

	SteamAPICall_t RemoteStorage::PublishWorkshopFile(
	    const char *pchFile, const char *pchPreviewFile, AppId_t nConsumerAppId,
	    const char *pchTitle, const char *pchDescription,
	    ERemoteStoragePublishedFileVisibility eVisibility,
	    SteamParamStringArray_t *pTags, EWorkshopFileType eWorkshopFileType) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}
	PublishedFileUpdateHandle_t RemoteStorage::CreatePublishedFileUpdateRequest(
	    PublishedFileId_t unPublishedFileId) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}
	bool RemoteStorage::UpdatePublishedFileFile(
	    PublishedFileUpdateHandle_t updateHandle, const char *pchFile) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool RemoteStorage::UpdatePublishedFilePreviewFile(
	    PublishedFileUpdateHandle_t updateHandle, const char *pchPreviewFile) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool RemoteStorage::UpdatePublishedFileTitle(
	    PublishedFileUpdateHandle_t updateHandle, const char *pchTitle) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool RemoteStorage::UpdatePublishedFileDescription(
	    PublishedFileUpdateHandle_t updateHandle, const char *pchDescription) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool RemoteStorage::UpdatePublishedFileVisibility(
	    PublishedFileUpdateHandle_t updateHandle,
	    ERemoteStoragePublishedFileVisibility eVisibility) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool RemoteStorage::UpdatePublishedFileTags(
	    PublishedFileUpdateHandle_t updateHandle,
	    SteamParamStringArray_t *pTags) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	SteamAPICall_t RemoteStorage::CommitPublishedFileUpdate(
	    PublishedFileUpdateHandle_t updateHandle) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}
	SteamAPICall_t
	RemoteStorage::GetPublishedFileDetails(PublishedFileId_t unPublishedFileId,
	                                       uint32 unMaxSecondsOld) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}
	SteamAPICall_t
	RemoteStorage::DeletePublishedFile(PublishedFileId_t unPublishedFileId) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}
	SteamAPICall_t
	RemoteStorage::EnumerateUserPublishedFiles(uint32 unStartIndex) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}
	SteamAPICall_t
	RemoteStorage::SubscribePublishedFile(PublishedFileId_t unPublishedFileId) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}
	SteamAPICall_t
	RemoteStorage::EnumerateUserSubscribedFiles(uint32 unStartIndex) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}
	SteamAPICall_t RemoteStorage::UnsubscribePublishedFile(
	    PublishedFileId_t unPublishedFileId) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}
	bool RemoteStorage::UpdatePublishedFileSetChangeDescription(
	    PublishedFileUpdateHandle_t updateHandle,
	    const char *pchChangeDescription) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	SteamAPICall_t RemoteStorage::GetPublishedItemVoteDetails(
	    PublishedFileId_t unPublishedFileId) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}
	SteamAPICall_t RemoteStorage::UpdateUserPublishedItemVote(
	    PublishedFileId_t unPublishedFileId, bool bVoteUp) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}
	SteamAPICall_t RemoteStorage::GetUserPublishedItemVoteDetails(
	    PublishedFileId_t unPublishedFileId) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}
	SteamAPICall_t RemoteStorage::EnumerateUserSharedWorkshopFiles(
	    CSteamID steamId, uint32 unStartIndex,
	    SteamParamStringArray_t *pRequiredTags,
	    SteamParamStringArray_t *pExcludedTags) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}
	SteamAPICall_t RemoteStorage::PublishVideo(
	    EWorkshopVideoProvider eVideoProvider, const char *pchVideoAccount,
	    const char *pchVideoIdentifier, const char *pchPreviewFile,
	    AppId_t nConsumerAppId, const char *pchTitle,
	    const char *pchDescription,
	    ERemoteStoragePublishedFileVisibility eVisibility,
	    SteamParamStringArray_t *pTags) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}
	SteamAPICall_t RemoteStorage::SetUserPublishedFileAction(
	    PublishedFileId_t unPublishedFileId, EWorkshopFileAction eAction) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}
	SteamAPICall_t RemoteStorage::EnumeratePublishedFilesByUserAction(
	    EWorkshopFileAction eAction, uint32 unStartIndex) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}
	SteamAPICall_t RemoteStorage::EnumeratePublishedWorkshopFiles(
	    EWorkshopEnumerationType eEnumerationType, uint32 unStartIndex,
	    uint32 unCount, uint32 unDays, SteamParamStringArray_t *pTags,
	    SteamParamStringArray_t *pUserTags) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}

	SteamAPICall_t RemoteStorage::UGCDownloadToLocation(UGCHandle_t hContent,
	                                                    const char *pchLocation,
	                                                    uint32 unPriority) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}

	int32 RemoteStorage::GetLocalFileChangeCount() {
		TRACE_FUNCTION_CALL();
		return 0;
	}
	const char *RemoteStorage::GetLocalFileChange(
	    int iFile, ERemoteStorageLocalFileChange *pEChangeType,
	    ERemoteStorageFilePathType *pEFilePathType) {
		TRACE_FUNCTION_CALL();
		return nullptr;
	}

	bool RemoteStorage::BeginFileWriteBatch() {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool RemoteStorage::EndFileWriteBatch() {
		TRACE_FUNCTION_CALL();
		return false;
	}


}   // namespace emu


#endif   //_stick_steam_emu_interface_remote_storage_
