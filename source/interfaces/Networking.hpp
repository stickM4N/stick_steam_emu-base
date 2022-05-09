#if not defined(_stick_steam_emu_interface_networking_)
#	define _stick_steam_emu_interface_networking_


#	include <steamworks_sdk/isteamnetworking.h>


namespace emu {


	class Networking final : public ISteamNetworking {

	public:
		bool SendP2PPacket(CSteamID steamIDRemote, const void *pubData,
		                   uint32 cubData, EP2PSend eP2PSendType,
		                   int nChannel) override;

		bool IsP2PPacketAvailable(uint32 *pcubMsgSize, int nChannel) override;

		bool ReadP2PPacket(void *pubDest, uint32 cubDest, uint32 *pcubMsgSize,
		                   CSteamID *psteamIDRemote, int nChannel) override;

		bool AcceptP2PSessionWithUser(CSteamID steamIDRemote) override;

		bool CloseP2PSessionWithUser(CSteamID steamIDRemote) override;

		bool CloseP2PChannelWithUser(CSteamID steamIDRemote,
		                             int nChannel) override;

		bool GetP2PSessionState(CSteamID steamIDRemote,
		                        P2PSessionState_t *pConnectionState) override;

		bool AllowP2PPacketRelay(bool bAllow) override;


		SNetListenSocket_t
		CreateListenSocket(int nP2PPort, SteamIPAddress_t nIP, uint16 nPort,
		                   bool bAllowUseOfPacketRelay) override;

		SNetSocket_t
		CreateP2PConnectionSocket(CSteamID steamIDTarget, int nPort,
		                          int nTimeoutSec,
		                          bool bAllowUseOfPacketRelay) override;
		SNetSocket_t CreateConnectionSocket(SteamIPAddress_t nIP, uint16 nPort,
		                                    int nTimeoutSec) override;

		bool DestroySocket(SNetSocket_t hSocket,
		                   bool bNotifyRemoteEnd) override;
		bool DestroyListenSocket(SNetListenSocket_t hSocket,
		                         bool bNotifyRemoteEnd) override;

		bool SendDataOnSocket(SNetSocket_t hSocket, void *pubData,
		                      uint32 cubData, bool bReliable) override;

		bool IsDataAvailableOnSocket(SNetSocket_t hSocket,
		                             uint32 *pcubMsgSize) override;

		bool RetrieveDataFromSocket(SNetSocket_t hSocket, void *pubDest,
		                            uint32 cubDest,
		                            uint32 *pcubMsgSize) override;

		bool IsDataAvailable(SNetListenSocket_t hListenSocket,
		                     uint32 *pcubMsgSize,
		                     SNetSocket_t *phSocket) override;

		bool RetrieveData(SNetListenSocket_t hListenSocket, void *pubDest,
		                  uint32 cubDest, uint32 *pcubMsgSize,
		                  SNetSocket_t *phSocket) override;

		bool GetSocketInfo(SNetSocket_t hSocket, CSteamID *pSteamIDRemote,
		                   int *peSocketStatus, SteamIPAddress_t *punIPRemote,
		                   uint16 *punPortRemote) override;

		bool GetListenSocketInfo(SNetListenSocket_t hListenSocket,
		                         SteamIPAddress_t *pnIP,
		                         uint16 *pnPort) override;

		ESNetSocketConnectionType
		GetSocketConnectionType(SNetSocket_t hSocket) override;

		int GetMaxPacketSize(SNetSocket_t hSocket) override;
	};


}   // namespace emu


#endif   //_stick_steam_emu_interface_networking_
