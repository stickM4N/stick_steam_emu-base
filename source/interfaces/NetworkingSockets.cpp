#include "NetworkingSockets.hpp"


#if defined(_stick_steam_emu_interface_networking_sockets_)


#	include "../common.hpp"


namespace emu {


	HSteamListenSocket NetworkingSockets::CreateListenSocketIP(
	    const SteamNetworkingIPAddr &localAddress, int nOptions,
	    const SteamNetworkingConfigValue_t *pOptions) {
		TRACE_FUNCTION_CALL();
		return 0u;
	}

	HSteamNetConnection NetworkingSockets::ConnectByIPAddress(
	    const SteamNetworkingIPAddr &address, int nOptions,
	    const SteamNetworkingConfigValue_t *pOptions) {
		TRACE_FUNCTION_CALL();
		return 0u;
	}

	HSteamListenSocket NetworkingSockets::CreateListenSocketP2P(
	    int nLocalPort, int nOptions,
	    const SteamNetworkingConfigValue_t *pOptions) {
		TRACE_FUNCTION_CALL();
		return 0u;
	}

	HSteamNetConnection NetworkingSockets::ConnectP2P(
	    const SteamNetworkingIdentity &identityRemote, int nRemotePort,
	    int nOptions, const SteamNetworkingConfigValue_t *pOptions) {
		TRACE_FUNCTION_CALL();
		return 0u;
	}

	EResult NetworkingSockets::AcceptConnection(HSteamNetConnection hConn) {
		TRACE_FUNCTION_CALL();
		return k_EResultInvalidParam;
	}

	bool NetworkingSockets::CloseConnection(HSteamNetConnection hPeer,
	                                        int nReason, const char *pszDebug,
	                                        bool bEnableLinger) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool NetworkingSockets::CloseListenSocket(HSteamListenSocket hSocket) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool NetworkingSockets::SetConnectionUserData(HSteamNetConnection hPeer,
	                                              int64 nUserData) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	int64 NetworkingSockets::GetConnectionUserData(HSteamNetConnection hPeer) {
		TRACE_FUNCTION_CALL();
		return 0ll;
	}

	void NetworkingSockets::SetConnectionName(HSteamNetConnection hPeer,
	                                          const char *pszName) {
		TRACE_FUNCTION_CALL();
	}

	bool NetworkingSockets::GetConnectionName(HSteamNetConnection hPeer,
	                                          char *pszName, int nMaxLen) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	EResult NetworkingSockets::SendMessageToConnection(
	    HSteamNetConnection hConn, const void *pData, uint32 cbData,
	    int nSendFlags, int64 *pOutMessageNumber) {
		TRACE_FUNCTION_CALL();
		return k_EResultInvalidParam;
	}

	void
	NetworkingSockets::SendMessages(int nMessages,
	                                SteamNetworkingMessage_t *const *pMessages,
	                                int64 *pOutMessageNumberOrResult) {
		TRACE_FUNCTION_CALL();
	}

	EResult
	NetworkingSockets::FlushMessagesOnConnection(HSteamNetConnection hConn) {
		TRACE_FUNCTION_CALL();
		return k_EResultInvalidParam;
	}

	int NetworkingSockets::ReceiveMessagesOnConnection(
	    HSteamNetConnection hConn, SteamNetworkingMessage_t **ppOutMessages,
	    int nMaxMessages) {
		TRACE_FUNCTION_CALL();
		return 0;
	}

	bool NetworkingSockets::GetConnectionInfo(HSteamNetConnection hConn,
	                                          SteamNetConnectionInfo_t *pInfo) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	EResult NetworkingSockets::GetConnectionRealTimeStatus(
	    HSteamNetConnection hConn, SteamNetConnectionRealTimeStatus_t *pStatus,
	    int nLanes, SteamNetConnectionRealTimeLaneStatus_t *pLanes) {
		TRACE_FUNCTION_CALL();
		return k_EResultInvalidParam;
	}

	int
	NetworkingSockets::GetDetailedConnectionStatus(HSteamNetConnection hConn,
	                                               char *pszBuf, int cbBuf) {
		TRACE_FUNCTION_CALL();
		return 0;
	}

	bool
	NetworkingSockets::GetListenSocketAddress(HSteamListenSocket hSocket,
	                                          SteamNetworkingIPAddr *address) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool NetworkingSockets::CreateSocketPair(
	    HSteamNetConnection *pOutConnection1,
	    HSteamNetConnection *pOutConnection2, bool bUseNetworkLoopback,
	    const SteamNetworkingIdentity *pIdentity1,
	    const SteamNetworkingIdentity *pIdentity2) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	EResult NetworkingSockets::ConfigureConnectionLanes(
	    HSteamNetConnection hConn, int nNumLanes, const int *pLanePriorities,
	    const uint16 *pLaneWeights) {
		TRACE_FUNCTION_CALL();
		return k_EResultInvalidParam;
	}


	bool NetworkingSockets::GetIdentity(SteamNetworkingIdentity *pIdentity) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	ESteamNetworkingAvailability NetworkingSockets::InitAuthentication() {
		TRACE_FUNCTION_CALL();
		return k_ESteamNetworkingAvailability_Failed;
	}

	ESteamNetworkingAvailability NetworkingSockets::GetAuthenticationStatus(
	    SteamNetAuthenticationStatus_t *pDetails) {
		TRACE_FUNCTION_CALL();
		return k_ESteamNetworkingAvailability_Failed;
	}


	HSteamNetPollGroup NetworkingSockets::CreatePollGroup() {
		TRACE_FUNCTION_CALL();
		return 0u;
	}

	bool NetworkingSockets::DestroyPollGroup(HSteamNetPollGroup hPollGroup) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool
	NetworkingSockets::SetConnectionPollGroup(HSteamNetConnection hConn,
	                                          HSteamNetPollGroup hPollGroup) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	int NetworkingSockets::ReceiveMessagesOnPollGroup(
	    HSteamNetPollGroup hPollGroup, SteamNetworkingMessage_t **ppOutMessages,
	    int nMaxMessages) {
		TRACE_FUNCTION_CALL();
		return 0;
	}


	bool NetworkingSockets::ReceivedRelayAuthTicket(
	    const void *pvTicket, int cbTicket,
	    SteamDatagramRelayAuthTicket *pOutParsedTicket) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	int NetworkingSockets::FindRelayAuthTicketForServer(
	    const SteamNetworkingIdentity &identityGameServer, int nRemotePort,
	    SteamDatagramRelayAuthTicket *pOutParsedTicket) {
		TRACE_FUNCTION_CALL();
		return 0;
	}

	HSteamNetConnection NetworkingSockets::ConnectToHostedDedicatedServer(
	    const SteamNetworkingIdentity &identityTarget, int nRemotePort,
	    int nOptions, const SteamNetworkingConfigValue_t *pOptions) {
		TRACE_FUNCTION_CALL();
		return 0u;
	}


	uint16 NetworkingSockets::GetHostedDedicatedServerPort() {
		TRACE_FUNCTION_CALL();
		return 0u;
	}

	SteamNetworkingPOPID NetworkingSockets::GetHostedDedicatedServerPOPID() {
		TRACE_FUNCTION_CALL();
		return 0u;
	}

	EResult NetworkingSockets::GetHostedDedicatedServerAddress(
	    SteamDatagramHostedAddress *pRouting) {
		TRACE_FUNCTION_CALL();
		return k_EResultInvalidState;
	}

	HSteamListenSocket
	NetworkingSockets::CreateHostedDedicatedServerListenSocket(
	    int nLocalPort, int nOptions,
	    const SteamNetworkingConfigValue_t *pOptions) {
		TRACE_FUNCTION_CALL();
		return 0u;
	}

	EResult NetworkingSockets::GetGameCoordinatorServerLogin(
	    SteamDatagramGameCoordinatorServerLogin *pLoginInfo, int *pcbSignedBlob,
	    void *pBlob) {
		TRACE_FUNCTION_CALL();
		return k_EResultNotLoggedOn;
	}



	HSteamNetConnection NetworkingSockets::ConnectP2PCustomSignaling(
	    ISteamNetworkingConnectionSignaling *pSignaling,
	    const SteamNetworkingIdentity *pPeerIdentity, int nRemotePort,
	    int nOptions, const SteamNetworkingConfigValue_t *pOptions) {
		TRACE_FUNCTION_CALL();
		return 0u;
	}

	bool NetworkingSockets::ReceivedP2PCustomSignal(
	    const void *pMsg, int cbMsg,
	    ISteamNetworkingSignalingRecvContext *pContext) {
		TRACE_FUNCTION_CALL();
		return false;
	}


	bool
	NetworkingSockets::GetCertificateRequest(int *pcbBlob, void *pBlob,
	                                         SteamNetworkingErrMsg &errMsg) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool NetworkingSockets::SetCertificate(const void *pCertificate,
	                                       int cbCertificate,
	                                       SteamNetworkingErrMsg &errMsg) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	void
	NetworkingSockets::ResetIdentity(const SteamNetworkingIdentity *pIdentity) {
		TRACE_FUNCTION_CALL();
	}

	void NetworkingSockets::RunCallbacks() {
		TRACE_FUNCTION_CALL();
	}

	bool NetworkingSockets::BeginAsyncRequestFakeIP(int nNumPorts) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	void NetworkingSockets::GetFakeIP(int idxFirstPort,
	                                  SteamNetworkingFakeIPResult_t *pInfo) {
		TRACE_FUNCTION_CALL();
	}

	HSteamListenSocket NetworkingSockets::CreateListenSocketP2PFakeIP(
	    int idxFakePort, int nOptions,
	    const SteamNetworkingConfigValue_t *pOptions) {
		TRACE_FUNCTION_CALL();
		return 0u;
	}

	EResult NetworkingSockets::GetRemoteFakeIPForConnection(
	    HSteamNetConnection hConn, SteamNetworkingIPAddr *pOutAddr) {
		TRACE_FUNCTION_CALL();
		return k_EResultInvalidParam;
	}

	ISteamNetworkingFakeUDPPort *
	NetworkingSockets::CreateFakeUDPPort(int idxFakeServerPort) {
		TRACE_FUNCTION_CALL();
		return nullptr;
	}


	void NetworkingFakeUDPPort::DestroyFakeUDPPort() {
		TRACE_FUNCTION_CALL();
	}

	EResult NetworkingFakeUDPPort::SendMessageToFakeIP(
	    const SteamNetworkingIPAddr &remoteAddress, const void *pData,
	    uint32 cbData, int nSendFlags) {
		TRACE_FUNCTION_CALL();
		return k_EResultBusy;
	}

	int NetworkingFakeUDPPort::ReceiveMessages(
	    SteamNetworkingMessage_t **ppOutMessages, int nMaxMessages) {
		TRACE_FUNCTION_CALL();
		return 0;
	}

	void NetworkingFakeUDPPort::ScheduleCleanup(
	    const SteamNetworkingIPAddr &remoteAddress) {
		TRACE_FUNCTION_CALL();
	}


}   // namespace emu


#endif   //_stick_steam_emu_interface_networking_sockets_
