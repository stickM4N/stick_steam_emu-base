#include "MusicRemote.hpp"


#if defined(_stick_steam_emu_interface_music_remote_)


#	include "../common.hpp"


namespace emu {


	bool MusicRemote::RegisterSteamMusicRemote(const char *pchName) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool MusicRemote::DeregisterSteamMusicRemote() {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool MusicRemote::BIsCurrentMusicRemote() {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool MusicRemote::BActivationSuccess(bool bValue) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool MusicRemote::SetDisplayName(const char *pchDisplayName) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool MusicRemote::SetPNGIcon_64x64(void *pvBuffer, uint32 cbBufferLength) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool MusicRemote::EnablePlayPrevious(bool bValue) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool MusicRemote::EnablePlayNext(bool bValue) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool MusicRemote::EnableShuffled(bool bValue) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool MusicRemote::EnableLooped(bool bValue) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool MusicRemote::EnableQueue(bool bValue) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool MusicRemote::EnablePlaylists(bool bValue) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool MusicRemote::UpdatePlaybackStatus(AudioPlayback_Status nStatus) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool MusicRemote::UpdateShuffled(bool bValue) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool MusicRemote::UpdateLooped(bool bValue) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool MusicRemote::UpdateVolume(float flValue) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool MusicRemote::CurrentEntryWillChange() {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool MusicRemote::CurrentEntryIsAvailable(bool bAvailable) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool MusicRemote::UpdateCurrentEntryText(const char *pchText) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool MusicRemote::UpdateCurrentEntryElapsedSeconds(int nValue) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool MusicRemote::UpdateCurrentEntryCoverArt(void *pvBuffer,
	                                             uint32 cbBufferLength) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool MusicRemote::CurrentEntryDidChange() {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool MusicRemote::QueueWillChange() {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool MusicRemote::ResetQueueEntries() {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool MusicRemote::SetQueueEntry(int nID, int nPosition,
	                                const char *pchEntryText) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool MusicRemote::SetCurrentQueueEntry(int nID) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool MusicRemote::QueueDidChange() {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool MusicRemote::PlaylistWillChange() {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool MusicRemote::ResetPlaylistEntries() {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool MusicRemote::SetPlaylistEntry(int nID, int nPosition,
	                                   const char *pchEntryText) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool MusicRemote::SetCurrentPlaylistEntry(int nID) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool MusicRemote::PlaylistDidChange() {
		TRACE_FUNCTION_CALL();
		return false;
	}


}   // namespace emu


#endif   //_stick_steam_emu_interface_music_remote_
