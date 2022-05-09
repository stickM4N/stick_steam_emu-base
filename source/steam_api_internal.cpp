#include <steamworks_sdk/steam_api_common.h>


#if defined(STEAM_API_COMMON_H)


#	include "common.hpp"


S_API HSteamPipe S_CALLTYPE SteamAPI_GetHSteamPipe() {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API HSteamUser S_CALLTYPE SteamAPI_GetHSteamUser() {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API HSteamPipe S_CALLTYPE SteamGameServer_GetHSteamPipe() {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API HSteamUser S_CALLTYPE SteamGameServer_GetHSteamUser() {
	TRACE_FUNCTION_CALL();
	return 0;
}
S_API void *S_CALLTYPE SteamInternal_ContextInit(void *pContextInitData) {
	TRACE_FUNCTION_CALL();

	struct ContextInitData {
		void (*interface_accessor_callback)(void *interface);
		uintptr_t counter;
		void *interface;
	} *context_data = static_cast<ContextInitData *>(pContextInitData);

	context_data->interface_accessor_callback(context_data->interface);

	return context_data->interface;
}
S_API void *S_CALLTYPE SteamInternal_CreateInterface(const char *ver) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API void *S_CALLTYPE SteamInternal_FindOrCreateUserInterface(
    HSteamUser hSteamUser, const char *pszVersion) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}
S_API void *S_CALLTYPE SteamInternal_FindOrCreateGameServerInterface(
    HSteamUser hSteamUser, const char *pszVersion) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}


S_API void S_CALLTYPE SteamAPI_RegisterCallback(class CCallbackBase *pCallback,
                                                int iCallback) {
	TRACE_FUNCTION_CALL();
}
S_API void S_CALLTYPE
SteamAPI_UnregisterCallback(class CCallbackBase *pCallback) {
	TRACE_FUNCTION_CALL();
}


S_API void S_CALLTYPE SteamAPI_RegisterCallResult(
    class CCallbackBase *pCallback, SteamAPICall_t hAPICall) {
	TRACE_FUNCTION_CALL();
}
S_API void S_CALLTYPE SteamAPI_UnregisterCallResult(
    class CCallbackBase *pCallback, SteamAPICall_t hAPICall) {
	TRACE_FUNCTION_CALL();
}


#endif   