#include "Music.hpp"


#if defined(_stick_steam_emu_interface_music_)


#	include "../common.hpp"


namespace emu {


	bool Music::BIsEnabled() {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool Music::BIsPlaying() {
		TRACE_FUNCTION_CALL();
		return false;
	}

	AudioPlayback_Status Music::GetPlaybackStatus() {
		TRACE_FUNCTION_CALL();
		return AudioPlayback_Undefined;
	}

	void Music::Play() {
		TRACE_FUNCTION_CALL();
	}
	void Music::Pause() {
		TRACE_FUNCTION_CALL();
	}
	void Music::PlayPrevious() {
		TRACE_FUNCTION_CALL();
	}
	void Music::PlayNext() {
		TRACE_FUNCTION_CALL();
	}

	void Music::SetVolume(float flVolume) {
		TRACE_FUNCTION_CALL();
	}
	float Music::GetVolume() {
		TRACE_FUNCTION_CALL();
		return 0.0f;
	}


}   // namespace emu


#endif   //_stick_steam_emu_interface_music_
