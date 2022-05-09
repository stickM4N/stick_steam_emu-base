#include "Networking.hpp"


#if defined(_stick_steam_emu_interface_networking_)


#	include "../common.hpp"


namespace emu {


	bool Networking::SendP2PPacket(CSteamID steamIDRemote, const void *pubData,
	                               uint32 cubData, EP2PSend eP2PSendType,
	                               int nChannel) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool Networking::IsP2PPacketAvailable(uint32 *pcubMsgSize, int nChannel) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool Networking::ReadP2PPacket(void *pubDest, uint32 cubDest,
	                               uint32 *pcubMsgSize,
	                               CSteamID *psteamIDRemote, int nChannel) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool Networking::AcceptP2PSessionWithUser(CSteamID steamIDRemote) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool Networking::CloseP2PSessionWithUser(CSteamID steamIDRemote) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool Networking::CloseP2PChannelWithUser(CSteamID steamIDRemote,
	                                         int nChannel) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool Networking::GetP2PSessionState(CSteamID steamIDRemote,
	                                    P2PSessionState_t *pConnectionState) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool Networking::AllowP2PPacketRelay(bool bAllow) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	SNetListenSocket_t
	Networking::CreateListenSocket(int nP2PPort, SteamIPAddress_t nIP,
	                               uint16 nPort, bool bAllowUseOfPacketRelay) {
		TRACE_FUNCTION_CALL();
		return 0;
	}

	SNetSocket_t
	Networking::CreateP2PConnectionSocket(CSteamID steamIDTarget, int nPort,
	                                      int nTimeoutSec,
	                                      bool bAllowUseOfPacketRelay) {
		TRACE_FUNCTION_CALL();
		return 0;
	}

	SNetSocket_t Networking::CreateConnectionSocket(SteamIPAddress_t nIP,
	                                                uint16 nPort,
	                                                int nTimeoutSec) {
		TRACE_FUNCTION_CALL();
		return 0;
	}

	bool Networking::DestroySocket(SNetSocket_t hSocket,
	                               bool bNotifyRemoteEnd) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool Networking::DestroyListenSocket(SNetListenSocket_t hSocket,
	                                     bool bNotifyRemoteEnd) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool Networking::SendDataOnSocket(SNetSocket_t hSocket, void *pubData,
	                                  uint32 cubData, bool bReliable) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool Networking::IsDataAvailableOnSocket(SNetSocket_t hSocket,
	                                         uint32 *pcubMsgSize) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool Networking::RetrieveDataFromSocket(SNetSocket_t hSocket, void *pubDest,
	                                        uint32 cubDest,
	                                        uint32 *pcubMsgSize) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool Networking::IsDataAvailable(SNetListenSocket_t hListenSocket,
	                                 uint32 *pcubMsgSize,
	                                 SNetSocket_t *phSocket) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool Networking::RetrieveData(SNetListenSocket_t hListenSocket,
	                              void *pubDest, uint32 cubDest,
	                              uint32 *pcubMsgSize, SNetSocket_t *phSocket) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool Networking::GetSocketInfo(SNetSocket_t hSocket,
	                               CSteamID *pSteamIDRemote,
	                               int *peSocketStatus,
	                               SteamIPAddress_t *punIPRemote,
	                               uint16 *punPortRemote) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool Networking::GetListenSocketInfo(SNetListenSocket_t hListenSocket,
	                                     SteamIPAddress_t *pnIP,
	                                     uint16 *pnPort) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	ESNetSocketConnectionType
	Networking::GetSocketConnectionType(SNetSocket_t hSocket) {
		TRACE_FUNCTION_CALL();
		return k_ESNetSocketConnectionTypeNotConnected;
	}

	int Networking::GetMaxPacketSize(SNetSocket_t hSocket) {
		TRACE_FUNCTION_CALL();
		return 0;
	}


}   // namespace emu
    // namespace emu


#endif   //_stick_steam_emu_interface_networking_
