#include "Apps.hpp"


#if defined(_stick_steam_emu_interface_apps_)


#	include "../common.hpp"


namespace emu {


	bool emu::Apps::BIsSubscribed() {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool emu::Apps::BIsLowViolence() {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool emu::Apps::BIsCybercafe() {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool emu::Apps::BIsVACBanned() {
		TRACE_FUNCTION_CALL();
		return false;
	}
	const char *emu::Apps::GetCurrentGameLanguage() {
		TRACE_FUNCTION_CALL();
		return nullptr;
	}
	const char *emu::Apps::GetAvailableGameLanguages() {
		TRACE_FUNCTION_CALL();
		return nullptr;
	}

	bool emu::Apps::BIsSubscribedApp(AppId_t appID) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool emu::Apps::BIsDlcInstalled(AppId_t appID) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	uint32 emu::Apps::GetEarliestPurchaseUnixTime(AppId_t nAppID) {
		TRACE_FUNCTION_CALL();
		return 0u;
	}

	bool emu::Apps::BIsSubscribedFromFreeWeekend() {
		TRACE_FUNCTION_CALL();
		return false;
	}

	int emu::Apps::GetDLCCount() {
		TRACE_FUNCTION_CALL();
		return 0;
	}

	bool emu::Apps::BGetDLCDataByIndex(int iDLC, AppId_t *pAppID,
	                                   bool *pbAvailable, char *pchName,
	                                   int cchNameBufferSize) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	void emu::Apps::InstallDLC(AppId_t nAppID) {
		TRACE_FUNCTION_CALL();
	}
	void emu::Apps::UninstallDLC(AppId_t nAppID) {
		TRACE_FUNCTION_CALL();
	}

	void emu::Apps::RequestAppProofOfPurchaseKey(AppId_t nAppID) {
		TRACE_FUNCTION_CALL();
	}

	bool emu::Apps::GetCurrentBetaName(char *pchName, int cchNameBufferSize) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool emu::Apps::MarkContentCorrupt(bool bMissingFilesOnly) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	uint32 emu::Apps::GetInstalledDepots(AppId_t appID, DepotId_t *pvecDepots,
	                                     uint32 cMaxDepots) {
		TRACE_FUNCTION_CALL();
		return 0u;
	}

	uint32 emu::Apps::GetAppInstallDir(AppId_t appID, char *pchFolder,
	                                   uint32 cchFolderBufferSize) {
		TRACE_FUNCTION_CALL();
		return 0u;
	}
	bool emu::Apps::BIsAppInstalled(AppId_t appID) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	CSteamID emu::Apps::GetAppOwner() {
		TRACE_FUNCTION_CALL();
		return {};
	}

	const char *emu::Apps::GetLaunchQueryParam(const char *pchKey) {
		TRACE_FUNCTION_CALL();
		return nullptr;
	}

	bool emu::Apps::GetDlcDownloadProgress(AppId_t nAppID,
	                                       uint64 *punBytesDownloaded,
	                                       uint64 *punBytesTotal) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	int emu::Apps::GetAppBuildId() {
		TRACE_FUNCTION_CALL();
		return 0;
	}

	void emu::Apps::RequestAllProofOfPurchaseKeys() {
		TRACE_FUNCTION_CALL();
	}

	SteamAPICall_t emu::Apps::GetFileDetails(const char *pszFileName) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}

	int emu::Apps::GetLaunchCommandLine(char *pszCommandLine,
	                                    int cubCommandLine) {
		TRACE_FUNCTION_CALL();
		return 0;
	}

	bool emu::Apps::BIsSubscribedFromFamilySharing() {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool emu::Apps::BIsTimedTrial(uint32 *punSecondsAllowed,
	                              uint32 *punSecondsPlayed) {
		TRACE_FUNCTION_CALL();
		return false;
	}


}   // namespace emu


#endif   //_stick_steam_emu_interface_apps_
