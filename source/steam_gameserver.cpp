#include <steamworks_sdk/steam_gameserver.h>


#if defined(STEAM_GAMESERVER_H)


#	include "common.hpp"


S_API void SteamGameServer_Shutdown() {
	TRACE_FUNCTION_CALL();
}


S_API bool SteamGameServer_BSecure() {
	TRACE_FUNCTION_CALL();
	return false;
}
S_API uint64 SteamGameServer_GetSteamID() {
	TRACE_FUNCTION_CALL();
	return 0ull;
}

S_API bool S_CALLTYPE SteamInternal_GameServer_Init(
    uint32 unIP, uint16 usLegacySteamPort, uint16 usGamePort,
    uint16 usQueryPort, EServerMode eServerMode, const char *pchVersionString) {
	TRACE_FUNCTION_CALL();
	return false;
}


#endif   // STEAM_GAMESERVER_H
