#if not defined(_stick_steam_emu_interface_video_)
#	define _stick_steam_emu_interface_video_


#	include <steamworks_sdk/isteamvideo.h>


namespace emu {


	class Video final : public ISteamVideo {

	public:
		void GetVideoURL(AppId_t unVideoAppID) override;

		bool IsBroadcasting(int *pnNumViewers) override;

		STEAM_CALL_BACK(GetOPFSettingsResult_t)
		void GetOPFSettings(AppId_t unVideoAppID) override;
		bool GetOPFStringForApp(AppId_t unVideoAppID, char *pchBuffer,
		                        int32 *pnBufferSize) override;
	};


}   // namespace emu


#endif   //_stick_steam_emu_interface_video_
