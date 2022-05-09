#include "NetworkingMessages.hpp"


#if defined(_stick_steam_emu_interface_networking_messages_)


#	include "../common.hpp"


namespace emu {


	EResult NetworkingMessages::SendMessageToUser(
	    const SteamNetworkingIdentity &identityRemote, const void *pubData,
	    uint32 cubData, int nSendFlags, int nRemoteChannel) {
		return k_EResultNoConnection;
	}

	int NetworkingMessages::ReceiveMessagesOnChannel(
	    int nLocalChannel, SteamNetworkingMessage_t **ppOutMessages,
	    int nMaxMessages) {
		return 0;
	}

	bool NetworkingMessages::AcceptSessionWithUser(
	    const SteamNetworkingIdentity &identityRemote) {
		return false;
	}

	bool NetworkingMessages::CloseSessionWithUser(
	    const SteamNetworkingIdentity &identityRemote) {
		return false;
	}

	bool NetworkingMessages::CloseChannelWithUser(
	    const SteamNetworkingIdentity &identityRemote, int nLocalChannel) {
		return false;
	}

	ESteamNetworkingConnectionState
	NetworkingMessages::GetSessionConnectionInfo(
	    const SteamNetworkingIdentity &identityRemote,
	    SteamNetConnectionInfo_t *pConnectionInfo,
	    SteamNetConnectionRealTimeStatus_t *pQuickStatus) {
		return k_ESteamNetworkingConnectionState_None;
	}


}   // namespace emu


#endif   //_stick_steam_emu_interface_networking_messages_
