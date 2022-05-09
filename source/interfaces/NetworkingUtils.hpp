#if not defined(_stick_steam_emu_interface_networking_utils_)
#	define _stick_steam_emu_interface_networking_utils_


#	include <steamworks_sdk/isteamnetworkingutils.h>


namespace emu {


	class NetworkingUtils final : public ISteamNetworkingUtils {

	public:
		SteamNetworkingMessage_t *
		AllocateMessage(int cbAllocateBuffer) override;


		ESteamNetworkingAvailability
		GetRelayNetworkStatus(SteamRelayNetworkStatus_t *pDetails) override;


		float GetLocalPingLocation(SteamNetworkPingLocation_t &result) override;

		int EstimatePingTimeBetweenTwoLocations(
		    const SteamNetworkPingLocation_t &location1,
		    const SteamNetworkPingLocation_t &location2) override;

		int EstimatePingTimeFromLocalHost(
		    const SteamNetworkPingLocation_t &remoteLocation) override;

		void
		ConvertPingLocationToString(const SteamNetworkPingLocation_t &location,
		                            char *pszBuf, int cchBufSize) override;

		bool
		ParsePingLocationString(const char *pszString,
		                        SteamNetworkPingLocation_t &result) override;

		bool CheckPingDataUpToDate(float flMaxAgeSeconds) override;


		int GetPingToDataCenter(SteamNetworkingPOPID popID,
		                        SteamNetworkingPOPID *pViaRelayPoP) override;

		int GetDirectPingToPOP(SteamNetworkingPOPID popID) override;

		int GetPOPCount() override;

		int GetPOPList(SteamNetworkingPOPID *list, int nListSz) override;


		SteamNetworkingMicroseconds GetLocalTimestamp() override;

		void SetDebugOutputFunction(
		    ESteamNetworkingSocketsDebugOutputType eDetailLevel,
		    FSteamNetworkingSocketsDebugOutput pfnFunc) override;


		ESteamNetworkingFakeIPType GetIPv4FakeIPType(uint32 nIPv4) override;

		EResult GetRealIdentityForFakeIP(
		    const SteamNetworkingIPAddr &fakeIP,
		    SteamNetworkingIdentity *pOutRealIdentity) override;

		bool SetConfigValue(ESteamNetworkingConfigValue eValue,
		                    ESteamNetworkingConfigScope eScopeType,
		                    intptr_t scopeObj,
		                    ESteamNetworkingConfigDataType eDataType,
		                    const void *pArg) override;

		ESteamNetworkingGetConfigValueResult
		GetConfigValue(ESteamNetworkingConfigValue eValue,
		               ESteamNetworkingConfigScope eScopeType,
		               intptr_t scopeObj,
		               ESteamNetworkingConfigDataType *pOutDataType,
		               void *pResult, size_t *cbResult) override;

		const char *
		GetConfigValueInfo(ESteamNetworkingConfigValue eValue,
		                   ESteamNetworkingConfigDataType *pOutDataType,
		                   ESteamNetworkingConfigScope *pOutScope) override;

		ESteamNetworkingConfigValue
		IterateGenericEditableConfigValues(ESteamNetworkingConfigValue eCurrent,
		                                   bool bEnumerateDevVars) override;

		void SteamNetworkingIPAddr_ToString(const SteamNetworkingIPAddr &addr,
		                                    char *buf, size_t cbBuf,
		                                    bool bWithPort) override;
		bool SteamNetworkingIPAddr_ParseString(SteamNetworkingIPAddr *pAddr,
		                                       const char *pszStr) override;
		ESteamNetworkingFakeIPType SteamNetworkingIPAddr_GetFakeIPType(
		    const SteamNetworkingIPAddr &addr) override;
		void SteamNetworkingIdentity_ToString(
		    const SteamNetworkingIdentity &identity, char *buf,
		    size_t cbBuf) override;
		bool
		SteamNetworkingIdentity_ParseString(SteamNetworkingIdentity *pIdentity,
		                                    const char *pszStr) override;
	};


}   // namespace emu


#endif   //_stick_steam_emu_interface_networking_utils_
