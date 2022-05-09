#if not defined(_stick_steam_emu_interface_music_)
#	define _stick_steam_emu_interface_music_


#	include <steamworks_sdk/isteammusic.h>


namespace emu {


	class Music final : public ISteamMusic {

	public:
		bool BIsEnabled() override;
		bool BIsPlaying() override;

		AudioPlayback_Status GetPlaybackStatus() override;

		void Play() override;
		void Pause() override;
		void PlayPrevious() override;
		void PlayNext() override;

		void SetVolume(float flVolume) override;
		float GetVolume() override;
	};


}   // namespace emu


#endif   //_stick_steam_emu_interface_music_
