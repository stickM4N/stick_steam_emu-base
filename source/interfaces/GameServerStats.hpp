#if not defined(_stick_steam_emu_interface_game_server_stats_)
#	define _stick_steam_emu_interface_game_server_stats_


#	include <steamworks_sdk/isteamgameserverstats.h>


namespace emu {


	class GameServerStats final : public ISteamGameServerStats {

	public:
		STEAM_CALL_RESULT(GSStatsReceived_t)
		SteamAPICall_t RequestUserStats(CSteamID steamIDUser) override;

		bool GetUserStat(CSteamID steamIDUser, const char *pchName,
		                 int32 *pData) override;

		bool GetUserStat(CSteamID steamIDUser, const char *pchName,
		                 float *pData) override;

		bool GetUserAchievement(CSteamID steamIDUser, const char *pchName,
		                        bool *pbAchieved) override;


		bool SetUserStat(CSteamID steamIDUser, const char *pchName,
		                 int32 nData) override;

		bool SetUserStat(CSteamID steamIDUser, const char *pchName,
		                 float fData) override;

		bool UpdateUserAvgRateStat(CSteamID steamIDUser, const char *pchName,
		                           float flCountThisSession,
		                           double dSessionLength) override;

		bool SetUserAchievement(CSteamID steamIDUser,
		                        const char *pchName) override;
		bool ClearUserAchievement(CSteamID steamIDUser,
		                          const char *pchName) override;

		STEAM_CALL_RESULT(GSStatsStored_t)
		SteamAPICall_t StoreUserStats(CSteamID steamIDUser) override;
	};


}   // namespace emu

#endif   //_stick_steam_emu_interface_game_server_stats_
