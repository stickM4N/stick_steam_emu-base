#if not defined(_stick_steam_emu_library_)
#	define _stick_steam_emu_library_


#	if defined(_WIN32)
#		include <Windows.h>


BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved);
#	endif


#endif   //_stick_steam_emu_library_
