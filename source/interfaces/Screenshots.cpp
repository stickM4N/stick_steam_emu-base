#include "Screenshots.hpp"


#if defined(_stick_steam_emu_interface_screenshots_)


#	include "../common.hpp"


namespace emu {


	ScreenshotHandle Screenshots::WriteScreenshot(void *pubRGB, uint32 cubRGB,
	                                              int nWidth, int nHeight) {
		TRACE_FUNCTION_CALL();
		return 0u;
	}

	ScreenshotHandle
	Screenshots::AddScreenshotToLibrary(const char *pchFilename,
	                                    const char *pchThumbnailFilename,
	                                    int nWidth, int nHeight) {
		TRACE_FUNCTION_CALL();
		return 0u;
	}

	void Screenshots::TriggerScreenshot() {
		TRACE_FUNCTION_CALL();
	}

	void Screenshots::HookScreenshots(bool bHook) {
		TRACE_FUNCTION_CALL();
	}

	bool Screenshots::SetLocation(ScreenshotHandle hScreenshot,
	                              const char *pchLocation) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool Screenshots::TagUser(ScreenshotHandle hScreenshot, CSteamID steamID) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool Screenshots::TagPublishedFile(ScreenshotHandle hScreenshot,
	                                   PublishedFileId_t unPublishedFileID) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool Screenshots::IsScreenshotsHooked() {
		TRACE_FUNCTION_CALL();
		return false;
	}

	ScreenshotHandle
	Screenshots::AddVRScreenshotToLibrary(EVRScreenshotType eType,
	                                      const char *pchFilename,
	                                      const char *pchVRFilename) {
		TRACE_FUNCTION_CALL();
		return 0u;
	}



}   // namespace emu


#endif   //_stick_steam_emu_interface_screenshots_
