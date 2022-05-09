#if not defined(_stick_steam_emu_interface_remote_storage_)
#	define _stick_steam_emu_interface_remote_storage_


#	include <steamworks_sdk/isteamremotestorage.h>


namespace emu {


	class RemoteStorage final : public ISteamRemoteStorage {

	public:
		bool FileWrite(const char *pchFile, const void *pvData,
		               int32 cubData) override;
		int32 FileRead(const char *pchFile, void *pvData,
		               int32 cubDataToRead) override;

		STEAM_CALL_RESULT(RemoteStorageFileWriteAsyncComplete_t)
		SteamAPICall_t FileWriteAsync(const char *pchFile, const void *pvData,
		                              uint32 cubData) override;

		STEAM_CALL_RESULT(RemoteStorageFileReadAsyncComplete_t)
		SteamAPICall_t FileReadAsync(const char *pchFile, uint32 nOffset,
		                             uint32 cubToRead) override;
		bool FileReadAsyncComplete(SteamAPICall_t hReadCall, void *pvBuffer,
		                           uint32 cubToRead) override;

		bool FileForget(const char *pchFile) override;
		bool FileDelete(const char *pchFile) override;
		STEAM_CALL_RESULT(RemoteStorageFileShareResult_t)
		SteamAPICall_t FileShare(const char *pchFile) override;
		bool SetSyncPlatforms(
		    const char *pchFile,
		    ERemoteStoragePlatform eRemoteStoragePlatform) override;

		UGCFileWriteStreamHandle_t
		FileWriteStreamOpen(const char *pchFile) override;
		bool FileWriteStreamWriteChunk(UGCFileWriteStreamHandle_t writeHandle,
		                               const void *pvData,
		                               int32 cubData) override;
		bool
		FileWriteStreamClose(UGCFileWriteStreamHandle_t writeHandle) override;
		bool
		FileWriteStreamCancel(UGCFileWriteStreamHandle_t writeHandle) override;

		bool FileExists(const char *pchFile) override;
		bool FilePersisted(const char *pchFile) override;
		int32 GetFileSize(const char *pchFile) override;
		int64 GetFileTimestamp(const char *pchFile) override;
		ERemoteStoragePlatform GetSyncPlatforms(const char *pchFile) override;

		int32 GetFileCount() override;
		const char *GetFileNameAndSize(int iFile,
		                               int32 *pnFileSizeInBytes) override;

		bool GetQuota(uint64 *pnTotalBytes, uint64 *puAvailableBytes) override;
		bool IsCloudEnabledForAccount() override;
		bool IsCloudEnabledForApp() override;
		void SetCloudEnabledForApp(bool bEnabled) override;


		STEAM_CALL_RESULT(RemoteStorageDownloadUGCResult_t)
		SteamAPICall_t UGCDownload(UGCHandle_t hContent,
		                           uint32 unPriority) override;

		bool GetUGCDownloadProgress(UGCHandle_t hContent,
		                            int32 *pnBytesDownloaded,
		                            int32 *pnBytesExpected) override;

		bool GetUGCDetails(UGCHandle_t hContent, AppId_t *pnAppID,
		                   char **ppchName, int32 *pnFileSizeInBytes,
		                   CSteamID *pSteamIDOwner) override;

		int32 UGCRead(UGCHandle_t hContent, void *pvData, int32 cubDataToRead,
		              uint32 cOffset, EUGCReadAction eAction) override;

		int32 GetCachedUGCCount() override;
		UGCHandle_t GetCachedUGCHandle(int32 iCachedContent) override;

		STEAM_CALL_RESULT(RemoteStoragePublishFileProgress_t)
		SteamAPICall_t
		PublishWorkshopFile(const char *pchFile, const char *pchPreviewFile,
		                    AppId_t nConsumerAppId, const char *pchTitle,
		                    const char *pchDescription,
		                    ERemoteStoragePublishedFileVisibility eVisibility,
		                    SteamParamStringArray_t *pTags,
		                    EWorkshopFileType eWorkshopFileType) override;
		PublishedFileUpdateHandle_t CreatePublishedFileUpdateRequest(
		    PublishedFileId_t unPublishedFileId) override;
		bool UpdatePublishedFileFile(PublishedFileUpdateHandle_t updateHandle,
		                             const char *pchFile) override;
		bool
		UpdatePublishedFilePreviewFile(PublishedFileUpdateHandle_t updateHandle,
		                               const char *pchPreviewFile) override;
		bool UpdatePublishedFileTitle(PublishedFileUpdateHandle_t updateHandle,
		                              const char *pchTitle) override;
		bool
		UpdatePublishedFileDescription(PublishedFileUpdateHandle_t updateHandle,
		                               const char *pchDescription) override;
		bool UpdatePublishedFileVisibility(
		    PublishedFileUpdateHandle_t updateHandle,
		    ERemoteStoragePublishedFileVisibility eVisibility) override;
		bool UpdatePublishedFileTags(PublishedFileUpdateHandle_t updateHandle,
		                             SteamParamStringArray_t *pTags) override;
		STEAM_CALL_RESULT(RemoteStorageUpdatePublishedFileResult_t)
		SteamAPICall_t CommitPublishedFileUpdate(
		    PublishedFileUpdateHandle_t updateHandle) override;
		STEAM_CALL_RESULT(RemoteStorageGetPublishedFileDetailsResult_t)
		SteamAPICall_t
		GetPublishedFileDetails(PublishedFileId_t unPublishedFileId,
		                        uint32 unMaxSecondsOld) override;
		STEAM_CALL_RESULT(RemoteStorageDeletePublishedFileResult_t)
		SteamAPICall_t
		DeletePublishedFile(PublishedFileId_t unPublishedFileId) override;
		STEAM_CALL_RESULT(RemoteStorageEnumerateUserPublishedFilesResult_t)
		SteamAPICall_t
		EnumerateUserPublishedFiles(uint32 unStartIndex) override;
		STEAM_CALL_RESULT(RemoteStorageSubscribePublishedFileResult_t)
		SteamAPICall_t
		SubscribePublishedFile(PublishedFileId_t unPublishedFileId) override;
		STEAM_CALL_RESULT(RemoteStorageEnumerateUserSubscribedFilesResult_t)
		SteamAPICall_t
		EnumerateUserSubscribedFiles(uint32 unStartIndex) override;
		STEAM_CALL_RESULT(RemoteStorageUnsubscribePublishedFileResult_t)
		SteamAPICall_t
		UnsubscribePublishedFile(PublishedFileId_t unPublishedFileId) override;
		bool UpdatePublishedFileSetChangeDescription(
		    PublishedFileUpdateHandle_t updateHandle,
		    const char *pchChangeDescription) override;
		STEAM_CALL_RESULT(RemoteStorageGetPublishedItemVoteDetailsResult_t)
		SteamAPICall_t GetPublishedItemVoteDetails(
		    PublishedFileId_t unPublishedFileId) override;
		STEAM_CALL_RESULT(RemoteStorageUpdateUserPublishedItemVoteResult_t)
		SteamAPICall_t
		UpdateUserPublishedItemVote(PublishedFileId_t unPublishedFileId,
		                            bool bVoteUp) override;
		STEAM_CALL_RESULT(RemoteStorageGetPublishedItemVoteDetailsResult_t)
		SteamAPICall_t GetUserPublishedItemVoteDetails(
		    PublishedFileId_t unPublishedFileId) override;
		STEAM_CALL_RESULT(RemoteStorageEnumerateUserPublishedFilesResult_t)
		SteamAPICall_t EnumerateUserSharedWorkshopFiles(
		    CSteamID steamId, uint32 unStartIndex,
		    SteamParamStringArray_t *pRequiredTags,
		    SteamParamStringArray_t *pExcludedTags) override;
		STEAM_CALL_RESULT(RemoteStoragePublishFileProgress_t)
		SteamAPICall_t
		PublishVideo(EWorkshopVideoProvider eVideoProvider,
		             const char *pchVideoAccount,
		             const char *pchVideoIdentifier, const char *pchPreviewFile,
		             AppId_t nConsumerAppId, const char *pchTitle,
		             const char *pchDescription,
		             ERemoteStoragePublishedFileVisibility eVisibility,
		             SteamParamStringArray_t *pTags) override;
		STEAM_CALL_RESULT(RemoteStorageSetUserPublishedFileActionResult_t)
		SteamAPICall_t
		SetUserPublishedFileAction(PublishedFileId_t unPublishedFileId,
		                           EWorkshopFileAction eAction) override;
		STEAM_CALL_RESULT(
		    RemoteStorageEnumeratePublishedFilesByUserActionResult_t)
		SteamAPICall_t
		EnumeratePublishedFilesByUserAction(EWorkshopFileAction eAction,
		                                    uint32 unStartIndex) override;
		STEAM_CALL_RESULT(RemoteStorageEnumerateWorkshopFilesResult_t)
		SteamAPICall_t EnumeratePublishedWorkshopFiles(
		    EWorkshopEnumerationType eEnumerationType, uint32 unStartIndex,
		    uint32 unCount, uint32 unDays, SteamParamStringArray_t *pTags,
		    SteamParamStringArray_t *pUserTags) override;

		STEAM_CALL_RESULT(RemoteStorageDownloadUGCResult_t)
		SteamAPICall_t UGCDownloadToLocation(UGCHandle_t hContent,
		                                     const char *pchLocation,
		                                     uint32 unPriority) override;

		int32 GetLocalFileChangeCount() override;
		const char *
		GetLocalFileChange(int iFile,
		                   ERemoteStorageLocalFileChange *pEChangeType,
		                   ERemoteStorageFilePathType *pEFilePathType) override;

		bool BeginFileWriteBatch() override;
		bool EndFileWriteBatch() override;
	};


}   // namespace emu


#endif   //_stick_steam_emu_interface_remote_storage_
