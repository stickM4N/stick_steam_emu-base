#if not defined(_stick_steam_emu_interface_applist_)
#	define _stick_steam_emu_interface_applist_


#	include <steamworks_sdk/isteamapplist.h>


namespace emu {


	class AppList final : public ISteamAppList {

	public:
		uint32 GetNumInstalledApps() override;
		uint32 GetInstalledApps(AppId_t *pvecAppID,
		                        uint32 unMaxAppIDs) override;

		int GetAppName(AppId_t nAppID, char *pchName, int cchNameMax) override;
		int GetAppInstallDir(AppId_t nAppID, char *pchDirectory,
		                     int cchNameMax) override;

		int GetAppBuildId(AppId_t nAppID) override;
	};


}   // namespace emu


#endif   //_stick_steam_emu_interface_applist_
