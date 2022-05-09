#if not defined(_stick_steam_emu_interface_networking_messages_)
#	define _stick_steam_emu_interface_networking_messages_


#	include <steamworks_sdk/isteamnetworkingmessages.h>


namespace emu {


	class NetworkingMessages final : public ISteamNetworkingMessages {

	public:
		EResult SendMessageToUser(const SteamNetworkingIdentity &identityRemote,
		                          const void *pubData, uint32 cubData,
		                          int nSendFlags, int nRemoteChannel) override;

		int ReceiveMessagesOnChannel(int nLocalChannel,
		                             SteamNetworkingMessage_t **ppOutMessages,
		                             int nMaxMessages) override;

		bool AcceptSessionWithUser(
		    const SteamNetworkingIdentity &identityRemote) override;

		bool CloseSessionWithUser(
		    const SteamNetworkingIdentity &identityRemote) override;

		bool CloseChannelWithUser(const SteamNetworkingIdentity &identityRemote,
		                          int nLocalChannel) override;

		ESteamNetworkingConnectionState GetSessionConnectionInfo(
		    const SteamNetworkingIdentity &identityRemote,
		    SteamNetConnectionInfo_t *pConnectionInfo,
		    SteamNetConnectionRealTimeStatus_t *pQuickStatus) override;
	};


}   // namespace emu


#endif   //_stick_steam_emu_interface_networking_messages_
