#if not defined(_stick_steam_emu_interface_user_stats_)
#	define _stick_steam_emu_interface_user_stats_


#	include <steamworks_sdk/isteamuserstats.h>


namespace emu {


	class UserStats final : public ISteamUserStats {

	public:
		STEAM_CALL_BACK(UserStatsReceived_t)
		bool RequestCurrentStats() override;

		bool GetStat(const char *pchName, int32 *pData) override;

		bool GetStat(const char *pchName, float *pData) override;

		bool SetStat(const char *pchName, int32 nData) override;

		bool SetStat(const char *pchName, float fData) override;

		bool UpdateAvgRateStat(const char *pchName, float flCountThisSession,
		                       double dSessionLength) override;

		bool GetAchievement(const char *pchName, bool *pbAchieved) override;
		bool SetAchievement(const char *pchName) override;
		bool ClearAchievement(const char *pchName) override;

		bool GetAchievementAndUnlockTime(const char *pchName, bool *pbAchieved,
		                                 uint32 *punUnlockTime) override;

		bool StoreStats() override;


		int GetAchievementIcon(const char *pchName) override;

		const char *GetAchievementDisplayAttribute(const char *pchName,
		                                           const char *pchKey) override;

		bool IndicateAchievementProgress(const char *pchName,
		                                 uint32 nCurProgress,
		                                 uint32 nMaxProgress) override;

		uint32 GetNumAchievements() override;
		const char *GetAchievementName(uint32 iAchievement) override;


		STEAM_CALL_RESULT(UserStatsReceived_t)
		SteamAPICall_t RequestUserStats(CSteamID steamIDUser) override;

		bool GetUserStat(CSteamID steamIDUser, const char *pchName,
		                 int32 *pData) override;

		bool GetUserStat(CSteamID steamIDUser, const char *pchName,
		                 float *pData) override;

		bool GetUserAchievement(CSteamID steamIDUser, const char *pchName,
		                        bool *pbAchieved) override;
		bool GetUserAchievementAndUnlockTime(CSteamID steamIDUser,
		                                     const char *pchName,
		                                     bool *pbAchieved,
		                                     uint32 *punUnlockTime) override;

		bool ResetAllStats(bool bAchievementsToo) override;


		STEAM_CALL_RESULT(LeaderboardFindResult_t)
		SteamAPICall_t FindOrCreateLeaderboard(
		    const char *pchLeaderboardName,
		    ELeaderboardSortMethod eLeaderboardSortMethod,
		    ELeaderboardDisplayType eLeaderboardDisplayType) override;

		STEAM_CALL_RESULT(LeaderboardFindResult_t)
		SteamAPICall_t FindLeaderboard(const char *pchLeaderboardName) override;

		const char *
		GetLeaderboardName(SteamLeaderboard_t hSteamLeaderboard) override;

		int
		GetLeaderboardEntryCount(SteamLeaderboard_t hSteamLeaderboard) override;

		ELeaderboardSortMethod
		GetLeaderboardSortMethod(SteamLeaderboard_t hSteamLeaderboard) override;

		ELeaderboardDisplayType GetLeaderboardDisplayType(
		    SteamLeaderboard_t hSteamLeaderboard) override;

		STEAM_CALL_RESULT(LeaderboardScoresDownloaded_t)
		SteamAPICall_t DownloadLeaderboardEntries(
		    SteamLeaderboard_t hSteamLeaderboard,
		    ELeaderboardDataRequest eLeaderboardDataRequest, int nRangeStart,
		    int nRangeEnd) override;
		STEAM_CALL_RESULT(LeaderboardScoresDownloaded_t)
		SteamAPICall_t
		DownloadLeaderboardEntriesForUsers(SteamLeaderboard_t hSteamLeaderboard,
		                                   CSteamID *prgUsers,
		                                   int cUsers) override;

		bool GetDownloadedLeaderboardEntry(
		    SteamLeaderboardEntries_t hSteamLeaderboardEntries, int index,
		    LeaderboardEntry_t *pLeaderboardEntry, int32 *pDetails,
		    int cDetailsMax) override;

		STEAM_CALL_RESULT(LeaderboardScoreUploaded_t)
		SteamAPICall_t UploadLeaderboardScore(
		    SteamLeaderboard_t hSteamLeaderboard,
		    ELeaderboardUploadScoreMethod eLeaderboardUploadScoreMethod,
		    int32 nScore, const int32 *pScoreDetails,
		    int cScoreDetailsCount) override;

		STEAM_CALL_RESULT(LeaderboardUGCSet_t)
		SteamAPICall_t
		AttachLeaderboardUGC(SteamLeaderboard_t hSteamLeaderboard,
		                     UGCHandle_t hUGC) override;

		STEAM_CALL_RESULT(NumberOfCurrentPlayers_t)
		SteamAPICall_t GetNumberOfCurrentPlayers() override;

		STEAM_CALL_RESULT(GlobalAchievementPercentagesReady_t)
		SteamAPICall_t RequestGlobalAchievementPercentages() override;

		int GetMostAchievedAchievementInfo(char *pchName, uint32 unNameBufLen,
		                                   float *pflPercent,
		                                   bool *pbAchieved) override;

		int GetNextMostAchievedAchievementInfo(int iIteratorPrevious,
		                                       char *pchName,
		                                       uint32 unNameBufLen,
		                                       float *pflPercent,
		                                       bool *pbAchieved) override;

		bool GetAchievementAchievedPercent(const char *pchName,
		                                   float *pflPercent) override;

		STEAM_CALL_RESULT(GlobalStatsReceived_t)
		SteamAPICall_t RequestGlobalStats(int nHistoryDays) override;

		bool GetGlobalStat(const char *pchStatName, int64 *pData) override;

		bool GetGlobalStat(const char *pchStatName, double *pData) override;


		int32 GetGlobalStatHistory(const char *pchStatName, int64 *pData,
		                           uint32 cubData) override;

		int32 GetGlobalStatHistory(const char *pchStatName, double *pData,
		                           uint32 cubData) override;

		bool GetAchievementProgressLimits(const char *pchName,
		                                  int32 *pnMinProgress,
		                                  int32 *pnMaxProgress) override;

		bool GetAchievementProgressLimits(const char *pchName,
		                                  float *pfMinProgress,
		                                  float *pfMaxProgress) override;
	};


}   // namespace emu

#endif   //_stick_steam_emu_interface_user_stats_
