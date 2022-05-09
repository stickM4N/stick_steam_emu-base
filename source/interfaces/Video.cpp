#include "Video.hpp"


#if defined(_stick_steam_emu_interface_video_)


#	include "../common.hpp"


namespace emu {


	void Video::GetVideoURL(AppId_t unVideoAppID) {
		TRACE_FUNCTION_CALL();
	}

	bool Video::IsBroadcasting(int *pnNumViewers) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	void Video::GetOPFSettings(AppId_t unVideoAppID) {
		TRACE_FUNCTION_CALL();
	}
	bool Video::GetOPFStringForApp(AppId_t unVideoAppID, char *pchBuffer,
	                               int32 *pnBufferSize) {
		TRACE_FUNCTION_CALL();
		return false;
	}


}   // namespace emu


#endif   //_stick_steam_emu_interface_video_
