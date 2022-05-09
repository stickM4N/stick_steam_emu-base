#if not defined(_stick_steam_emu_interface_parental_settings_)
#	define _stick_steam_emu_interface_parental_settings_


#	include <steamworks_sdk/isteamparentalsettings.h>


namespace emu {


	class ParentalSettings final : public ISteamParentalSettings {

	public:
		bool BIsParentalLockEnabled() override;
		bool BIsParentalLockLocked() override;

		bool BIsAppBlocked(AppId_t nAppID) override;
		bool BIsAppInBlockList(AppId_t nAppID) override;

		bool BIsFeatureBlocked(EParentalFeature eFeature) override;
		bool BIsFeatureInBlockList(EParentalFeature eFeature) override;
	};


}   // namespace emu


#endif   //_stick_steam_emu_interface_parental_settings_
