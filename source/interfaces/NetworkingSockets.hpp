#if not defined(_stick_steam_emu_interface_networking_sockets_)
#	define _stick_steam_emu_interface_networking_sockets_


#	include <steamworks_sdk/isteamnetworkingsockets.h>
#	include <steamworks_sdk/steamnetworkingfakeip.h>


class ISteamNetworkingConnectionSignaling { };


class ISteamNetworkingSignalingRecvContext { };


namespace emu {


	class NetworkingConnectionSignaling final
	    : public ISteamNetworkingConnectionSignaling { };


	class NetworkingSignalingRecvContext final
	    : public ISteamNetworkingSignalingRecvContext { };


	class NetworkingFakeUDPPort final : public ISteamNetworkingFakeUDPPort {

	public:
		void DestroyFakeUDPPort() override;

		EResult SendMessageToFakeIP(const SteamNetworkingIPAddr &remoteAddress,
		                            const void *pData, uint32 cbData,
		                            int nSendFlags) override;

		int ReceiveMessages(SteamNetworkingMessage_t **ppOutMessages,
		                    int nMaxMessages) override;

		void
		ScheduleCleanup(const SteamNetworkingIPAddr &remoteAddress) override;
	};


	class NetworkingSockets final : public ISteamNetworkingSockets {

	public:
		HSteamListenSocket CreateListenSocketIP(
		    const SteamNetworkingIPAddr &localAddress, int nOptions,
		    const SteamNetworkingConfigValue_t *pOptions) override;

		HSteamNetConnection ConnectByIPAddress(
		    const SteamNetworkingIPAddr &address, int nOptions,
		    const SteamNetworkingConfigValue_t *pOptions) override;

		HSteamListenSocket CreateListenSocketP2P(
		    int nLocalPort, int nOptions,
		    const SteamNetworkingConfigValue_t *pOptions) override;

		HSteamNetConnection
		ConnectP2P(const SteamNetworkingIdentity &identityRemote,
		           int nRemotePort, int nOptions,
		           const SteamNetworkingConfigValue_t *pOptions) override;

		EResult AcceptConnection(HSteamNetConnection hConn) override;

		bool CloseConnection(HSteamNetConnection hPeer, int nReason,
		                     const char *pszDebug, bool bEnableLinger) override;

		bool CloseListenSocket(HSteamListenSocket hSocket) override;

		bool SetConnectionUserData(HSteamNetConnection hPeer,
		                           int64 nUserData) override;

		int64 GetConnectionUserData(HSteamNetConnection hPeer) override;

		void SetConnectionName(HSteamNetConnection hPeer,
		                       const char *pszName) override;

		bool GetConnectionName(HSteamNetConnection hPeer, char *pszName,
		                       int nMaxLen) override;

		EResult SendMessageToConnection(HSteamNetConnection hConn,
		                                const void *pData, uint32 cbData,
		                                int nSendFlags,
		                                int64 *pOutMessageNumber) override;

		void SendMessages(int nMessages,
		                  SteamNetworkingMessage_t *const *pMessages,
		                  int64 *pOutMessageNumberOrResult) override;

		EResult FlushMessagesOnConnection(HSteamNetConnection hConn) override;

		int
		ReceiveMessagesOnConnection(HSteamNetConnection hConn,
		                            SteamNetworkingMessage_t **ppOutMessages,
		                            int nMaxMessages) override;

		bool GetConnectionInfo(HSteamNetConnection hConn,
		                       SteamNetConnectionInfo_t *pInfo) override;

		EResult GetConnectionRealTimeStatus(
		    HSteamNetConnection hConn,
		    SteamNetConnectionRealTimeStatus_t *pStatus, int nLanes,
		    SteamNetConnectionRealTimeLaneStatus_t *pLanes) override;

		int GetDetailedConnectionStatus(HSteamNetConnection hConn, char *pszBuf,
		                                int cbBuf) override;

		bool GetListenSocketAddress(HSteamListenSocket hSocket,
		                            SteamNetworkingIPAddr *address) override;

		bool
		CreateSocketPair(HSteamNetConnection *pOutConnection1,
		                 HSteamNetConnection *pOutConnection2,
		                 bool bUseNetworkLoopback,
		                 const SteamNetworkingIdentity *pIdentity1,
		                 const SteamNetworkingIdentity *pIdentity2) override;

		EResult ConfigureConnectionLanes(HSteamNetConnection hConn,
		                                 int nNumLanes,
		                                 const int *pLanePriorities,
		                                 const uint16 *pLaneWeights) override;


		bool GetIdentity(SteamNetworkingIdentity *pIdentity) override;

		ESteamNetworkingAvailability InitAuthentication() override;

		ESteamNetworkingAvailability GetAuthenticationStatus(
		    SteamNetAuthenticationStatus_t *pDetails) override;


		HSteamNetPollGroup CreatePollGroup() override;

		bool DestroyPollGroup(HSteamNetPollGroup hPollGroup) override;

		bool SetConnectionPollGroup(HSteamNetConnection hConn,
		                            HSteamNetPollGroup hPollGroup) override;

		int ReceiveMessagesOnPollGroup(HSteamNetPollGroup hPollGroup,
		                               SteamNetworkingMessage_t **ppOutMessages,
		                               int nMaxMessages) override;


		bool ReceivedRelayAuthTicket(
		    const void *pvTicket, int cbTicket,
		    SteamDatagramRelayAuthTicket *pOutParsedTicket) override;

		int FindRelayAuthTicketForServer(
		    const SteamNetworkingIdentity &identityGameServer, int nRemotePort,
		    SteamDatagramRelayAuthTicket *pOutParsedTicket) override;

		HSteamNetConnection ConnectToHostedDedicatedServer(
		    const SteamNetworkingIdentity &identityTarget, int nRemotePort,
		    int nOptions,
		    const SteamNetworkingConfigValue_t *pOptions) override;


		uint16 GetHostedDedicatedServerPort() override;

		SteamNetworkingPOPID GetHostedDedicatedServerPOPID() override;

		EResult GetHostedDedicatedServerAddress(
		    SteamDatagramHostedAddress *pRouting) override;

		HSteamListenSocket CreateHostedDedicatedServerListenSocket(
		    int nLocalPort, int nOptions,
		    const SteamNetworkingConfigValue_t *pOptions) override;

		EResult GetGameCoordinatorServerLogin(
		    SteamDatagramGameCoordinatorServerLogin *pLoginInfo,
		    int *pcbSignedBlob, void *pBlob) override;



		HSteamNetConnection ConnectP2PCustomSignaling(
		    ISteamNetworkingConnectionSignaling *pSignaling,
		    const SteamNetworkingIdentity *pPeerIdentity, int nRemotePort,
		    int nOptions,
		    const SteamNetworkingConfigValue_t *pOptions) override;

		bool ReceivedP2PCustomSignal(
		    const void *pMsg, int cbMsg,
		    ISteamNetworkingSignalingRecvContext *pContext) override;


		bool GetCertificateRequest(int *pcbBlob, void *pBlob,
		                           SteamNetworkingErrMsg &errMsg) override;

		bool SetCertificate(const void *pCertificate, int cbCertificate,
		                    SteamNetworkingErrMsg &errMsg) override;

		void ResetIdentity(const SteamNetworkingIdentity *pIdentity) override;


		void RunCallbacks() override;


		bool BeginAsyncRequestFakeIP(int nNumPorts) override;

		void GetFakeIP(int idxFirstPort,
		               SteamNetworkingFakeIPResult_t *pInfo) override;

		HSteamListenSocket CreateListenSocketP2PFakeIP(
		    int idxFakePort, int nOptions,
		    const SteamNetworkingConfigValue_t *pOptions) override;

		EResult
		GetRemoteFakeIPForConnection(HSteamNetConnection hConn,
		                             SteamNetworkingIPAddr *pOutAddr) override;

		ISteamNetworkingFakeUDPPort *
		CreateFakeUDPPort(int idxFakeServerPort) override;
	};


}   // namespace emu


#endif   //_stick_steam_emu_interface_networking_sockets_
