#include "UserStats.hpp"


#if defined(_stick_steam_emu_interface_user_stats_)


#	include "../common.hpp"


namespace emu {


	bool UserStats::RequestCurrentStats() {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool UserStats::GetStat(const char *pchName, int32 *pData) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool UserStats::GetStat(const char *pchName, float *pData) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool UserStats::SetStat(const char *pchName, int32 nData) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool UserStats::SetStat(const char *pchName, float fData) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool UserStats::UpdateAvgRateStat(const char *pchName,
	                                  float flCountThisSession,
	                                  double dSessionLength) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool UserStats::GetAchievement(const char *pchName, bool *pbAchieved) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool UserStats::SetAchievement(const char *pchName) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool UserStats::ClearAchievement(const char *pchName) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool UserStats::GetAchievementAndUnlockTime(const char *pchName,
	                                            bool *pbAchieved,
	                                            uint32 *punUnlockTime) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool UserStats::StoreStats() {
		TRACE_FUNCTION_CALL();
		return false;
	}

	int UserStats::GetAchievementIcon(const char *pchName) {
		TRACE_FUNCTION_CALL();
		return 0;
	}

	const char *UserStats::GetAchievementDisplayAttribute(const char *pchName,
	                                                      const char *pchKey) {
		TRACE_FUNCTION_CALL();
		return nullptr;
	}

	bool UserStats::IndicateAchievementProgress(const char *pchName,
	                                            uint32 nCurProgress,
	                                            uint32 nMaxProgress) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	uint32 UserStats::GetNumAchievements() {
		TRACE_FUNCTION_CALL();
		return 0u;
	}
	const char *UserStats::GetAchievementName(uint32 iAchievement) {
		TRACE_FUNCTION_CALL();
		return nullptr;
	}


	SteamAPICall_t UserStats::RequestUserStats(CSteamID steamIDUser) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}

	bool UserStats::GetUserStat(CSteamID steamIDUser, const char *pchName,
	                            int32 *pData) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool UserStats::GetUserStat(CSteamID steamIDUser, const char *pchName,
	                            float *pData) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool UserStats::GetUserAchievement(CSteamID steamIDUser,
	                                   const char *pchName, bool *pbAchieved) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool UserStats::GetUserAchievementAndUnlockTime(CSteamID steamIDUser,
	                                                const char *pchName,
	                                                bool *pbAchieved,
	                                                uint32 *punUnlockTime) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool UserStats::ResetAllStats(bool bAchievementsToo) {
		TRACE_FUNCTION_CALL();
		return false;
	}


	SteamAPICall_t UserStats::FindOrCreateLeaderboard(
	    const char *pchLeaderboardName,
	    ELeaderboardSortMethod eLeaderboardSortMethod,
	    ELeaderboardDisplayType eLeaderboardDisplayType) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}

	SteamAPICall_t UserStats::FindLeaderboard(const char *pchLeaderboardName) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}

	const char *
	UserStats::GetLeaderboardName(SteamLeaderboard_t hSteamLeaderboard) {
		TRACE_FUNCTION_CALL();
		return nullptr;
	}

	int
	UserStats::GetLeaderboardEntryCount(SteamLeaderboard_t hSteamLeaderboard) {
		TRACE_FUNCTION_CALL();
		return 0;
	}

	ELeaderboardSortMethod
	UserStats::GetLeaderboardSortMethod(SteamLeaderboard_t hSteamLeaderboard) {
		TRACE_FUNCTION_CALL();
		return k_ELeaderboardSortMethodNone;
	}

	ELeaderboardDisplayType
	UserStats::GetLeaderboardDisplayType(SteamLeaderboard_t hSteamLeaderboard) {
		TRACE_FUNCTION_CALL();
		return k_ELeaderboardDisplayTypeNone;
	}

	SteamAPICall_t UserStats::DownloadLeaderboardEntries(
	    SteamLeaderboard_t hSteamLeaderboard,
	    ELeaderboardDataRequest eLeaderboardDataRequest, int nRangeStart,
	    int nRangeEnd) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}
	SteamAPICall_t UserStats::DownloadLeaderboardEntriesForUsers(
	    SteamLeaderboard_t hSteamLeaderboard, CSteamID *prgUsers, int cUsers) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}

	bool UserStats::GetDownloadedLeaderboardEntry(
	    SteamLeaderboardEntries_t hSteamLeaderboardEntries, int index,
	    LeaderboardEntry_t *pLeaderboardEntry, int32 *pDetails,
	    int cDetailsMax) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	SteamAPICall_t UserStats::UploadLeaderboardScore(
	    SteamLeaderboard_t hSteamLeaderboard,
	    ELeaderboardUploadScoreMethod eLeaderboardUploadScoreMethod,
	    int32 nScore, const int32 *pScoreDetails, int cScoreDetailsCount) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}

	SteamAPICall_t
	UserStats::AttachLeaderboardUGC(SteamLeaderboard_t hSteamLeaderboard,
	                                UGCHandle_t hUGC) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}

	SteamAPICall_t UserStats::GetNumberOfCurrentPlayers() {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}

	SteamAPICall_t UserStats::RequestGlobalAchievementPercentages() {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}

	int UserStats::GetMostAchievedAchievementInfo(char *pchName,
	                                              uint32 unNameBufLen,
	                                              float *pflPercent,
	                                              bool *pbAchieved) {
		TRACE_FUNCTION_CALL();
		return 0;
	}

	int UserStats::GetNextMostAchievedAchievementInfo(int iIteratorPrevious,
	                                                  char *pchName,
	                                                  uint32 unNameBufLen,
	                                                  float *pflPercent,
	                                                  bool *pbAchieved) {
		TRACE_FUNCTION_CALL();
		return 0;
	}

	bool UserStats::GetAchievementAchievedPercent(const char *pchName,
	                                              float *pflPercent) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	SteamAPICall_t UserStats::RequestGlobalStats(int nHistoryDays) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}

	bool UserStats::GetGlobalStat(const char *pchStatName, int64 *pData) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool UserStats::GetGlobalStat(const char *pchStatName, double *pData) {
		TRACE_FUNCTION_CALL();
		return false;
	}


	int32 UserStats::GetGlobalStatHistory(const char *pchStatName, int64 *pData,
	                                      uint32 cubData) {
		TRACE_FUNCTION_CALL();
		return 0;
	}

	int32 UserStats::GetGlobalStatHistory(const char *pchStatName,
	                                      double *pData, uint32 cubData) {
		TRACE_FUNCTION_CALL();
		return 0;
	}

	bool UserStats::GetAchievementProgressLimits(const char *pchName,
	                                             int32 *pnMinProgress,
	                                             int32 *pnMaxProgress) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool UserStats::GetAchievementProgressLimits(const char *pchName,
	                                             float *pfMinProgress,
	                                             float *pfMaxProgress) {
		TRACE_FUNCTION_CALL();
		return false;
	}


}   // namespace emu


#endif   //_stick_steam_emu_interface_user_stats_
