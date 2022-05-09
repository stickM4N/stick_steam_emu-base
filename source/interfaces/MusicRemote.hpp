#if not defined(_stick_steam_emu_interface_music_remote_)
#	define _stick_steam_emu_interface_music_remote_


#	include <steamworks_sdk/isteammusicremote.h>


namespace emu {


	class MusicRemote final : public ISteamMusicRemote {

	public:
		bool RegisterSteamMusicRemote(const char *pchName) override;
		bool DeregisterSteamMusicRemote() override;
		bool BIsCurrentMusicRemote() override;
		bool BActivationSuccess(bool bValue) override;

		bool SetDisplayName(const char *pchDisplayName) override;
		bool SetPNGIcon_64x64(void *pvBuffer, uint32 cbBufferLength) override;

		bool EnablePlayPrevious(bool bValue) override;
		bool EnablePlayNext(bool bValue) override;
		bool EnableShuffled(bool bValue) override;
		bool EnableLooped(bool bValue) override;
		bool EnableQueue(bool bValue) override;
		bool EnablePlaylists(bool bValue) override;

		bool UpdatePlaybackStatus(AudioPlayback_Status nStatus) override;
		bool UpdateShuffled(bool bValue) override;
		bool UpdateLooped(bool bValue) override;
		bool UpdateVolume(float flValue) override;

		bool CurrentEntryWillChange() override;
		bool CurrentEntryIsAvailable(bool bAvailable) override;
		bool UpdateCurrentEntryText(const char *pchText) override;
		bool UpdateCurrentEntryElapsedSeconds(int nValue) override;
		bool UpdateCurrentEntryCoverArt(void *pvBuffer,
		                                uint32 cbBufferLength) override;
		bool CurrentEntryDidChange() override;

		bool QueueWillChange() override;
		bool ResetQueueEntries() override;
		bool SetQueueEntry(int nID, int nPosition,
		                   const char *pchEntryText) override;
		bool SetCurrentQueueEntry(int nID) override;
		bool QueueDidChange() override;

		bool PlaylistWillChange() override;
		bool ResetPlaylistEntries() override;
		bool SetPlaylistEntry(int nID, int nPosition,
		                      const char *pchEntryText) override;
		bool SetCurrentPlaylistEntry(int nID) override;
		bool PlaylistDidChange() override;
	};


}   // namespace emu


#endif   //_stick_steam_emu_interface_music_remote_
