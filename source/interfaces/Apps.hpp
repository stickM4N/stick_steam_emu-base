#if not defined(_stick_steam_emu_interface_apps_)
#	define _stick_steam_emu_interface_apps_


#	include <steamworks_sdk/isteamapps.h>


namespace emu {


	class Apps final : public ISteamApps {

	public:
		bool BIsSubscribed() override;
		bool BIsLowViolence() override;
		bool BIsCybercafe() override;
		bool BIsVACBanned() override;
		const char *GetCurrentGameLanguage() override;
		const char *GetAvailableGameLanguages() override;

		bool BIsSubscribedApp(AppId_t appID) override;

		bool BIsDlcInstalled(AppId_t appID) override;

		uint32 GetEarliestPurchaseUnixTime(AppId_t nAppID) override;

		bool BIsSubscribedFromFreeWeekend() override;

		int GetDLCCount() override;

		bool BGetDLCDataByIndex(int iDLC, AppId_t *pAppID, bool *pbAvailable,
		                        char *pchName, int cchNameBufferSize) override;

		void InstallDLC(AppId_t nAppID) override;
		void UninstallDLC(AppId_t nAppID) override;

		void RequestAppProofOfPurchaseKey(AppId_t nAppID) override;

		bool GetCurrentBetaName(char *pchName, int cchNameBufferSize) override;
		bool MarkContentCorrupt(bool bMissingFilesOnly) override;
		uint32 GetInstalledDepots(AppId_t appID, DepotId_t *pvecDepots,
		                          uint32 cMaxDepots) override;
		uint32 GetAppInstallDir(AppId_t appID, char *pchFolder,
		                        uint32 cchFolderBufferSize) override;
		bool BIsAppInstalled(AppId_t appID) override;
		CSteamID GetAppOwner() override;

		const char *GetLaunchQueryParam(const char *pchKey) override;

		bool GetDlcDownloadProgress(AppId_t nAppID, uint64 *punBytesDownloaded,
		                            uint64 *punBytesTotal) override;

		int GetAppBuildId() override;

		void RequestAllProofOfPurchaseKeys() override;

		STEAM_CALL_RESULT(FileDetailsResult_t)
		SteamAPICall_t GetFileDetails(const char *pszFileName) override;

		int GetLaunchCommandLine(char *pszCommandLine,
		                         int cubCommandLine) override;

		bool BIsSubscribedFromFamilySharing() override;

		bool BIsTimedTrial(uint32 *punSecondsAllowed,
		                   uint32 *punSecondsPlayed) override;
	};


}   // namespace emu


#endif   //_stick_steam_emu_interface_apps_
