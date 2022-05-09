#include "GameServerStats.hpp"


#if defined(_stick_steam_emu_interface_game_server_stats_)


#	include "../common.hpp"


namespace emu {


	SteamAPICall_t GameServerStats::RequestUserStats(CSteamID steamIDUser) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}

	bool GameServerStats::GetUserStat(CSteamID steamIDUser, const char *pchName,
	                                  int32 *pData) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool GameServerStats::GetUserStat(CSteamID steamIDUser, const char *pchName,
	                                  float *pData) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool GameServerStats::GetUserAchievement(CSteamID steamIDUser,
	                                         const char *pchName,
	                                         bool *pbAchieved) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool GameServerStats::SetUserStat(CSteamID steamIDUser, const char *pchName,
	                                  int32 nData) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool GameServerStats::SetUserStat(CSteamID steamIDUser, const char *pchName,
	                                  float fData) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool GameServerStats::UpdateUserAvgRateStat(CSteamID steamIDUser,
	                                            const char *pchName,
	                                            float flCountThisSession,
	                                            double dSessionLength) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool GameServerStats::SetUserAchievement(CSteamID steamIDUser,
	                                         const char *pchName) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool GameServerStats::ClearUserAchievement(CSteamID steamIDUser,
	                                           const char *pchName) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	SteamAPICall_t GameServerStats::StoreUserStats(CSteamID steamIDUser) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}


}   // namespace emu


#endif   //_stick_steam_emu_interface_game_server_stats_
