#include "NetworkingUtils.hpp"


#if defined(_stick_steam_emu_interface_networking_utils_)


#	include "../common.hpp"


namespace emu {


	SteamNetworkingMessage_t *
	NetworkingUtils::AllocateMessage(int cbAllocateBuffer) {
		TRACE_FUNCTION_CALL();
		return nullptr;
	}


	ESteamNetworkingAvailability NetworkingUtils::GetRelayNetworkStatus(
	    SteamRelayNetworkStatus_t *pDetails) {
		TRACE_FUNCTION_CALL();
		return k_ESteamNetworkingAvailability_Failed;
	}

	float
	NetworkingUtils::GetLocalPingLocation(SteamNetworkPingLocation_t &result) {
		TRACE_FUNCTION_CALL();
		return 0.0f;
	}

	int NetworkingUtils::EstimatePingTimeBetweenTwoLocations(
	    const SteamNetworkPingLocation_t &location1,
	    const SteamNetworkPingLocation_t &location2) {
		TRACE_FUNCTION_CALL();
		return 0;
	}

	int NetworkingUtils::EstimatePingTimeFromLocalHost(
	    const SteamNetworkPingLocation_t &remoteLocation) {
		TRACE_FUNCTION_CALL();
		return 0;
	}

	void NetworkingUtils::ConvertPingLocationToString(
	    const SteamNetworkPingLocation_t &location, char *pszBuf,
	    int cchBufSize) {
		TRACE_FUNCTION_CALL();
	}

	bool NetworkingUtils::ParsePingLocationString(
	    const char *pszString, SteamNetworkPingLocation_t &result) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool NetworkingUtils::CheckPingDataUpToDate(float flMaxAgeSeconds) {
		TRACE_FUNCTION_CALL();
		return false;
	}


	int
	NetworkingUtils::GetPingToDataCenter(SteamNetworkingPOPID popID,
	                                     SteamNetworkingPOPID *pViaRelayPoP) {
		TRACE_FUNCTION_CALL();
		return 0;
	}

	int NetworkingUtils::GetDirectPingToPOP(SteamNetworkingPOPID popID) {
		TRACE_FUNCTION_CALL();
		return 0;
	}

	int NetworkingUtils::GetPOPCount() {
		TRACE_FUNCTION_CALL();
		return 0;
	}

	int NetworkingUtils::GetPOPList(SteamNetworkingPOPID *list, int nListSz) {
		TRACE_FUNCTION_CALL();
		return 0;
	}


	SteamNetworkingMicroseconds NetworkingUtils::GetLocalTimestamp() {
		TRACE_FUNCTION_CALL();
		return 0ll;
	}

	void NetworkingUtils::SetDebugOutputFunction(
	    ESteamNetworkingSocketsDebugOutputType eDetailLevel,
	    FSteamNetworkingSocketsDebugOutput pfnFunc) {
		TRACE_FUNCTION_CALL();
	}


	ESteamNetworkingFakeIPType
	NetworkingUtils::GetIPv4FakeIPType(uint32 nIPv4) {
		TRACE_FUNCTION_CALL();
		return k_ESteamNetworkingFakeIPType_Invalid;
	}

	EResult NetworkingUtils::GetRealIdentityForFakeIP(
	    const SteamNetworkingIPAddr &fakeIP,
	    SteamNetworkingIdentity *pOutRealIdentity) {
		TRACE_FUNCTION_CALL();
		return k_EResultInvalidParam;
	}

	bool NetworkingUtils::SetConfigValue(
	    ESteamNetworkingConfigValue eValue,
	    ESteamNetworkingConfigScope eScopeType, intptr_t scopeObj,
	    ESteamNetworkingConfigDataType eDataType, const void *pArg) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	ESteamNetworkingGetConfigValueResult NetworkingUtils::GetConfigValue(
	    ESteamNetworkingConfigValue eValue,
	    ESteamNetworkingConfigScope eScopeType, intptr_t scopeObj,
	    ESteamNetworkingConfigDataType *pOutDataType, void *pResult,
	    size_t *cbResult) {
		TRACE_FUNCTION_CALL();
		return k_ESteamNetworkingGetConfigValue_BadScopeObj;
	}

	const char *NetworkingUtils::GetConfigValueInfo(
	    ESteamNetworkingConfigValue eValue,
	    ESteamNetworkingConfigDataType *pOutDataType,
	    ESteamNetworkingConfigScope *pOutScope) {
		TRACE_FUNCTION_CALL();
		return nullptr;
	}

	ESteamNetworkingConfigValue
	NetworkingUtils::IterateGenericEditableConfigValues(
	    ESteamNetworkingConfigValue eCurrent, bool bEnumerateDevVars) {
		TRACE_FUNCTION_CALL();
		return k_ESteamNetworkingConfig_Invalid;
	}

	void NetworkingUtils::SteamNetworkingIPAddr_ToString(
	    const SteamNetworkingIPAddr &addr, char *buf, size_t cbBuf,
	    bool bWithPort) {
		TRACE_FUNCTION_CALL();
	}

	bool NetworkingUtils::SteamNetworkingIPAddr_ParseString(
	    SteamNetworkingIPAddr *pAddr, const char *pszStr) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	ESteamNetworkingFakeIPType
	NetworkingUtils::SteamNetworkingIPAddr_GetFakeIPType(
	    const SteamNetworkingIPAddr &addr) {
		TRACE_FUNCTION_CALL();
		return k_ESteamNetworkingFakeIPType_Invalid;
	}

	void NetworkingUtils::SteamNetworkingIdentity_ToString(
	    const SteamNetworkingIdentity &identity, char *buf, size_t cbBuf) {
		TRACE_FUNCTION_CALL();
	}

	bool NetworkingUtils::SteamNetworkingIdentity_ParseString(
	    SteamNetworkingIdentity *pIdentity, const char *pszStr) {
		TRACE_FUNCTION_CALL();
		return false;
	}


}   // namespace emu


#endif   //_stick_steam_emu_interface_networking_utils_
