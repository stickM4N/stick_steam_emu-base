#include "HTMLSurface.hpp"


#if defined(_stick_steam_emu_interface_html_surface_)


#	include "../common.hpp"


namespace emu {


	bool HTMLSurface::Init() {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool HTMLSurface::Shutdown() {
		TRACE_FUNCTION_CALL();
		return false;
	}

	SteamAPICall_t HTMLSurface::CreateBrowser(const char *pchUserAgent,
	                                          const char *pchUserCSS) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}

	void HTMLSurface::RemoveBrowser(HHTMLBrowser unBrowserHandle) {
		TRACE_FUNCTION_CALL();
	}

	void HTMLSurface::LoadURL(HHTMLBrowser unBrowserHandle, const char *pchURL,
	                          const char *pchPostData) {
		TRACE_FUNCTION_CALL();
	}

	void HTMLSurface::SetSize(HHTMLBrowser unBrowserHandle, uint32 unWidth,
	                          uint32 unHeight) {
		TRACE_FUNCTION_CALL();
	}

	void HTMLSurface::StopLoad(HHTMLBrowser unBrowserHandle) {
		TRACE_FUNCTION_CALL();
	}
	void HTMLSurface::Reload(HHTMLBrowser unBrowserHandle) {
		TRACE_FUNCTION_CALL();
	}
	void HTMLSurface::GoBack(HHTMLBrowser unBrowserHandle) {
		TRACE_FUNCTION_CALL();
	}
	void HTMLSurface::GoForward(HHTMLBrowser unBrowserHandle) {
		TRACE_FUNCTION_CALL();
	}

	void HTMLSurface::AddHeader(HHTMLBrowser unBrowserHandle,
	                            const char *pchKey, const char *pchValue) {
		TRACE_FUNCTION_CALL();
	}
	void HTMLSurface::ExecuteJavascript(HHTMLBrowser unBrowserHandle,
	                                    const char *pchScript) {
		TRACE_FUNCTION_CALL();
	}
	void
	HTMLSurface::MouseUp(HHTMLBrowser unBrowserHandle,
	                     ISteamHTMLSurface::EHTMLMouseButton eMouseButton) {
		TRACE_FUNCTION_CALL();
	}
	void
	HTMLSurface::MouseDown(HHTMLBrowser unBrowserHandle,
	                       ISteamHTMLSurface::EHTMLMouseButton eMouseButton) {
		TRACE_FUNCTION_CALL();
	}
	void HTMLSurface::MouseDoubleClick(
	    HHTMLBrowser unBrowserHandle,
	    ISteamHTMLSurface::EHTMLMouseButton eMouseButton) {
		TRACE_FUNCTION_CALL();
	}
	void HTMLSurface::MouseMove(HHTMLBrowser unBrowserHandle, int x, int y) {
		TRACE_FUNCTION_CALL();
	}
	void HTMLSurface::MouseWheel(HHTMLBrowser unBrowserHandle, int32 nDelta) {
		TRACE_FUNCTION_CALL();
	}

	void
	HTMLSurface::KeyDown(HHTMLBrowser unBrowserHandle, uint32 nNativeKeyCode,
	                     ISteamHTMLSurface::EHTMLKeyModifiers eHTMLKeyModifiers,
	                     bool bIsSystemKey) {
		TRACE_FUNCTION_CALL();
	}
	void
	HTMLSurface::KeyUp(HHTMLBrowser unBrowserHandle, uint32 nNativeKeyCode,
	                   ISteamHTMLSurface::EHTMLKeyModifiers eHTMLKeyModifiers) {

	}
	void HTMLSurface::KeyChar(
	    HHTMLBrowser unBrowserHandle, uint32 cUnicodeChar,
	    ISteamHTMLSurface::EHTMLKeyModifiers eHTMLKeyModifiers) {
		TRACE_FUNCTION_CALL();
	}

	void HTMLSurface::SetHorizontalScroll(HHTMLBrowser unBrowserHandle,
	                                      uint32 nAbsolutePixelScroll) {
		TRACE_FUNCTION_CALL();
	}
	void HTMLSurface::SetVerticalScroll(HHTMLBrowser unBrowserHandle,
	                                    uint32 nAbsolutePixelScroll) {
		TRACE_FUNCTION_CALL();
	}

	void HTMLSurface::SetKeyFocus(HHTMLBrowser unBrowserHandle,
	                              bool bHasKeyFocus) {
		TRACE_FUNCTION_CALL();
	}

	void HTMLSurface::ViewSource(HHTMLBrowser unBrowserHandle) {
		TRACE_FUNCTION_CALL();
	}
	void HTMLSurface::CopyToClipboard(HHTMLBrowser unBrowserHandle) {
		TRACE_FUNCTION_CALL();
	}
	void HTMLSurface::PasteFromClipboard(HHTMLBrowser unBrowserHandle) {
		TRACE_FUNCTION_CALL();
	}

	void HTMLSurface::Find(HHTMLBrowser unBrowserHandle,
	                       const char *pchSearchStr, bool bCurrentlyInFind,
	                       bool bReverse) {
		TRACE_FUNCTION_CALL();
	}
	void HTMLSurface::StopFind(HHTMLBrowser unBrowserHandle) {
		TRACE_FUNCTION_CALL();
	}

	void HTMLSurface::GetLinkAtPosition(HHTMLBrowser unBrowserHandle, int x,
	                                    int y) {
		TRACE_FUNCTION_CALL();
	}

	void HTMLSurface::SetCookie(const char *pchHostname, const char *pchKey,
	                            const char *pchValue, const char *pchPath,
	                            RTime32 nExpires, bool bSecure,
	                            bool bHTTPOnly) {
		TRACE_FUNCTION_CALL();
	}

	void HTMLSurface::SetPageScaleFactor(HHTMLBrowser unBrowserHandle,
	                                     float flZoom, int nPointX,
	                                     int nPointY) {
		TRACE_FUNCTION_CALL();
	}

	void HTMLSurface::SetBackgroundMode(HHTMLBrowser unBrowserHandle,
	                                    bool bBackgroundMode) {
		TRACE_FUNCTION_CALL();
	}

	void HTMLSurface::SetDPIScalingFactor(HHTMLBrowser unBrowserHandle,
	                                      float flDPIScaling) {
		TRACE_FUNCTION_CALL();
	}

	void HTMLSurface::OpenDeveloperTools(HHTMLBrowser unBrowserHandle) {
		TRACE_FUNCTION_CALL();
	}

	void HTMLSurface::AllowStartRequest(HHTMLBrowser unBrowserHandle,
	                                    bool bAllowed) {
		TRACE_FUNCTION_CALL();
	}

	void HTMLSurface::JSDialogResponse(HHTMLBrowser unBrowserHandle,
	                                   bool bResult) {
		TRACE_FUNCTION_CALL();
	}

	void HTMLSurface::FileLoadDialogResponse(HHTMLBrowser unBrowserHandle,
	                                         const char **pchSelectedFiles) {
		TRACE_FUNCTION_CALL();
	}


}   // namespace emu


#endif   //_stick_steam_emu_interface_html_surface_
