#include "AppList.hpp"


#if defined(_stick_steam_emu_interface_applist_)


#	include "../common.hpp"


namespace emu {


	uint32 AppList::GetNumInstalledApps() {
		TRACE_FUNCTION_CALL();
		return 0u;
	}
	uint32 AppList::GetInstalledApps(AppId_t *pvecAppID, uint32 unMaxAppIDs) {
		TRACE_FUNCTION_CALL();
		return 0u;
	}

	int AppList::GetAppName(AppId_t nAppID, char *pchName, int cchNameMax) {
		TRACE_FUNCTION_CALL();
		return -1;
	}
	int AppList::GetAppInstallDir(AppId_t nAppID, char *pchDirectory,
	                              int cchNameMax) {
		TRACE_FUNCTION_CALL();
		return -1;
	}

	int AppList::GetAppBuildId(AppId_t nAppID) {
		TRACE_FUNCTION_CALL();
		return 0;
	}


}   // namespace emu


#endif   //_stick_steam_emu_interface_applist_
