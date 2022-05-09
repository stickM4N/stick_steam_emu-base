#if not defined(_stick_steam_emu_interface_remote_play_)
#	define _stick_steam_emu_interface_remote_play_


#	include <steamworks_sdk/isteamremoteplay.h>


namespace emu {


	class RemotePlay final : public ISteamRemotePlay {

	public:
		uint32 GetSessionCount() override;

		RemotePlaySessionID_t GetSessionID(int iSessionIndex) override;

		CSteamID GetSessionSteamID(RemotePlaySessionID_t unSessionID) override;

		const char *
		GetSessionClientName(RemotePlaySessionID_t unSessionID) override;

		ESteamDeviceFormFactor
		GetSessionClientFormFactor(RemotePlaySessionID_t unSessionID) override;

		bool BGetSessionClientResolution(RemotePlaySessionID_t unSessionID,
		                                 int *pnResolutionX,
		                                 int *pnResolutionY) override;

		bool BSendRemotePlayTogetherInvite(CSteamID steamIDFriend) override;
	};


}   // namespace emu


#endif   //_stick_steam_emu_interface_remote_play_
