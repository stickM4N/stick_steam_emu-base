#if not defined(_stick_steam_emu_interface_screenshots_)
#	define _stick_steam_emu_interface_screenshots_


#	include <steamworks_sdk/isteamscreenshots.h>


namespace emu {


	class Screenshots final : public ISteamScreenshots {

	public:
		ScreenshotHandle WriteScreenshot(void *pubRGB, uint32 cubRGB,
		                                 int nWidth, int nHeight) override;

		ScreenshotHandle
		AddScreenshotToLibrary(const char *pchFilename,
		                       const char *pchThumbnailFilename, int nWidth,
		                       int nHeight) override;

		void TriggerScreenshot() override;

		void HookScreenshots(bool bHook) override;

		bool SetLocation(ScreenshotHandle hScreenshot,
		                 const char *pchLocation) override;

		bool TagUser(ScreenshotHandle hScreenshot, CSteamID steamID) override;

		bool TagPublishedFile(ScreenshotHandle hScreenshot,
		                      PublishedFileId_t unPublishedFileID) override;

		bool IsScreenshotsHooked() override;

		ScreenshotHandle
		AddVRScreenshotToLibrary(EVRScreenshotType eType,
		                         const char *pchFilename,
		                         const char *pchVRFilename) override;
	};


}   // namespace emu


#endif   //_stick_steam_emu_interface_screenshots_
