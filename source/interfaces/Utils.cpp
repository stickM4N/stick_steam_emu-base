#include "Utils.hpp"


#if defined(_stick_steam_emu_interface_utils_)


#	include "../common.hpp"


namespace emu {


	bool Utils::GetCSERIPPort(uint32 *unIP, uint16 *usPort) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	void Utils::RunFrame() {
		TRACE_FUNCTION_CALL();
	}


	uint32 Utils::GetSecondsSinceAppActive() {
		TRACE_FUNCTION_CALL();
		return 0u;
	}
	uint32 Utils::GetSecondsSinceComputerActive() {
		TRACE_FUNCTION_CALL();
		return 0u;
	}

	EUniverse Utils::GetConnectedUniverse() {
		TRACE_FUNCTION_CALL();
		return k_EUniverseInvalid;
	}

	uint32 Utils::GetServerRealTime() {
		TRACE_FUNCTION_CALL();
		return 0u;
	}

	const char *Utils::GetIPCountry() {
		TRACE_FUNCTION_CALL();
		return nullptr;
	}

	bool Utils::GetImageSize(int iImage, uint32 *pnWidth, uint32 *pnHeight) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool Utils::GetImageRGBA(int iImage, uint8 *pubDest, int nDestBufferSize) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	uint8 Utils::GetCurrentBatteryPower() {
		TRACE_FUNCTION_CALL();
		return 0u;
	}

	uint32 Utils::GetAppID() {
		TRACE_FUNCTION_CALL();
		return 0u;
	}

	void Utils::SetOverlayNotificationPosition(
	    ENotificationPosition eNotificationPosition) {
		TRACE_FUNCTION_CALL();
	}

	bool Utils::IsAPICallCompleted(SteamAPICall_t hSteamAPICall,
	                               bool *pbFailed) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	ESteamAPICallFailure
	Utils::GetAPICallFailureReason(SteamAPICall_t hSteamAPICall) {
		TRACE_FUNCTION_CALL();
		return k_ESteamAPICallFailureInvalidHandle;
	}
	bool Utils::GetAPICallResult(SteamAPICall_t hSteamAPICall, void *pCallback,
	                             int cubCallback, int iCallbackExpected,
	                             bool *pbFailed) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	uint32 Utils::GetIPCCallCount() {
		TRACE_FUNCTION_CALL();
		return 0u;
	}

	void Utils::SetWarningMessageHook(SteamAPIWarningMessageHook_t pFunction) {

	}

	bool Utils::IsOverlayEnabled() {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool Utils::BOverlayNeedsPresent() {
		TRACE_FUNCTION_CALL();
		return false;
	}

	SteamAPICall_t Utils::CheckFileSignature(const char *szFileName) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}

	bool Utils::ShowGamepadTextInput(EGamepadTextInputMode eInputMode,
	                                 EGamepadTextInputLineMode eLineInputMode,
	                                 const char *pchDescription,
	                                 uint32 unCharMax,
	                                 const char *pchExistingText) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	uint32 Utils::GetEnteredGamepadTextLength() {
		TRACE_FUNCTION_CALL();
		return 0u;
	}
	bool Utils::GetEnteredGamepadTextInput(char *pchText, uint32 cchText) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	const char *Utils::GetSteamUILanguage() {
		TRACE_FUNCTION_CALL();
		return nullptr;
	}

	bool Utils::IsSteamRunningInVR() {
		TRACE_FUNCTION_CALL();
		return false;
	}

	void Utils::SetOverlayNotificationInset(int nHorizontalInset,
	                                        int nVerticalInset) {
		TRACE_FUNCTION_CALL();
	}

	bool Utils::IsSteamInBigPictureMode() {
		TRACE_FUNCTION_CALL();
		return false;
	}

	void Utils::StartVRDashboard() {
		TRACE_FUNCTION_CALL();
	}

	bool Utils::IsVRHeadsetStreamingEnabled() {
		TRACE_FUNCTION_CALL();
		return false;
	}

	void Utils::SetVRHeadsetStreamingEnabled(bool bEnabled) {
		TRACE_FUNCTION_CALL();
	}

	bool Utils::IsSteamChinaLauncher() {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool Utils::InitFilterText(uint32 unFilterOptions) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	int Utils::FilterText(ETextFilteringContext eContext,
	                      CSteamID sourceSteamID, const char *pchInputMessage,
	                      char *pchOutFilteredText,
	                      uint32 nByteSizeOutFilteredText) {
		TRACE_FUNCTION_CALL();
		return 0;
	}

	ESteamIPv6ConnectivityState
	Utils::GetIPv6ConnectivityState(ESteamIPv6ConnectivityProtocol eProtocol) {
		TRACE_FUNCTION_CALL();
		return k_ESteamIPv6ConnectivityState_Unknown;
	}

	bool Utils::IsSteamRunningOnSteamDeck() {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool Utils::ShowFloatingGamepadTextInput(
	    EFloatingGamepadTextInputMode eKeyboardMode, int nTextFieldXPosition,
	    int nTextFieldYPosition, int nTextFieldWidth, int nTextFieldHeight) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	void Utils::SetGameLauncherMode(bool bLauncherMode) {
		TRACE_FUNCTION_CALL();
	}

	bool Utils::DismissFloatingGamepadTextInput() {
		TRACE_FUNCTION_CALL();
		return false;
	}


}   // namespace emu


#endif   //_stick_steam_emu_interface_utils_
