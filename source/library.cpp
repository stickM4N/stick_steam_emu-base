#include "library.hpp"
#include <steamworks_sdk/steam_api.h>


#if defined(_stick_steam_emu_library_)


#	if defined(_WIN32)
BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved) {

	switch (fdwReason) {
	case DLL_PROCESS_ATTACH:
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		break;
	default:
		return FALSE;
	}

	return TRUE;
}
#	endif


#endif   //_stick_steam_emu_library_
