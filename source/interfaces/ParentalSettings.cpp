#include "ParentalSettings.hpp"


#if defined(_stick_steam_emu_interface_parental_settings_)


#	include "../common.hpp"


namespace emu {


	bool ParentalSettings::BIsParentalLockEnabled() {
		return false;
	}
	bool ParentalSettings::BIsParentalLockLocked() {
		return false;
	}

	bool ParentalSettings::BIsAppBlocked(AppId_t nAppID) {
		return false;
	}
	bool ParentalSettings::BIsAppInBlockList(AppId_t nAppID) {
		return false;
	}

	bool ParentalSettings::BIsFeatureBlocked(EParentalFeature eFeature) {
		return false;
	}
	bool ParentalSettings::BIsFeatureInBlockList(EParentalFeature eFeature) {
		return false;
	}


}   // namespace emu


#endif   //_stick_steam_emu_interface_parental_settings_
