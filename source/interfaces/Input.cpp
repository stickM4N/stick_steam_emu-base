#include "Input.hpp"


#if defined(_stick_steam_emu_interface_input_)


#	include "../common.hpp"


namespace emu {


	bool Input::Init(bool bExplicitlyCallRunFrame) {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool Input::Shutdown() {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool Input::SetInputActionManifestFilePath(
	    const char *pchInputActionManifestAbsolutePath) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	void Input::RunFrame(bool bReservedValue) {
		TRACE_FUNCTION_CALL();
	}

	bool Input::BWaitForData(bool bWaitForever, uint32 unTimeout) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool Input::BNewDataAvailable() {
		TRACE_FUNCTION_CALL();
		return false;
	}

	int Input::GetConnectedControllers(InputHandle_t *handlesOut) {
		TRACE_FUNCTION_CALL();
		return 0;
	}

	void Input::EnableDeviceCallbacks() {
		TRACE_FUNCTION_CALL();
	}

	void Input::EnableActionEventCallbacks(
	    SteamInputActionEventCallbackPointer pCallback) {
		TRACE_FUNCTION_CALL();
	}

	InputActionSetHandle_t
	Input::GetActionSetHandle(const char *pszActionSetName) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}

	void Input::ActivateActionSet(InputHandle_t inputHandle,
	                              InputActionSetHandle_t actionSetHandle) {
		TRACE_FUNCTION_CALL();
	}

	InputActionSetHandle_t
	Input::GetCurrentActionSet(InputHandle_t inputHandle) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}

	void
	Input::ActivateActionSetLayer(InputHandle_t inputHandle,
	                              InputActionSetHandle_t actionSetLayerHandle) {

	}
	void Input::DeactivateActionSetLayer(
	    InputHandle_t inputHandle,
	    InputActionSetHandle_t actionSetLayerHandle) {
		TRACE_FUNCTION_CALL();
	}
	void Input::DeactivateAllActionSetLayers(InputHandle_t inputHandle) {
		TRACE_FUNCTION_CALL();
	}

	int Input::GetActiveActionSetLayers(InputHandle_t inputHandle,
	                                    InputActionSetHandle_t *handlesOut) {
		TRACE_FUNCTION_CALL();
		return 0;
	}

	InputDigitalActionHandle_t
	Input::GetDigitalActionHandle(const char *pszActionName) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}

	InputDigitalActionData_t Input::GetDigitalActionData(
	    InputHandle_t inputHandle,
	    InputDigitalActionHandle_t digitalActionHandle) {
		TRACE_FUNCTION_CALL();
		return {};
	}

	int Input::GetDigitalActionOrigins(
	    InputHandle_t inputHandle, InputActionSetHandle_t actionSetHandle,
	    InputDigitalActionHandle_t digitalActionHandle,
	    EInputActionOrigin *originsOut) {
		TRACE_FUNCTION_CALL();
		return 0;
	}

	const char *Input::GetStringForDigitalActionName(
	    InputDigitalActionHandle_t eActionHandle) {
		TRACE_FUNCTION_CALL();
		return nullptr;
	}

	InputAnalogActionHandle_t
	Input::GetAnalogActionHandle(const char *pszActionName) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}

	InputAnalogActionData_t
	Input::GetAnalogActionData(InputHandle_t inputHandle,
	                           InputAnalogActionHandle_t analogActionHandle) {
		TRACE_FUNCTION_CALL();
		return {};
	}

	int
	Input::GetAnalogActionOrigins(InputHandle_t inputHandle,
	                              InputActionSetHandle_t actionSetHandle,
	                              InputAnalogActionHandle_t analogActionHandle,
	                              EInputActionOrigin *originsOut) {
		TRACE_FUNCTION_CALL();
		return 0;
	}

	const char *Input::GetGlyphPNGForActionOrigin(EInputActionOrigin eOrigin,
	                                              ESteamInputGlyphSize eSize,
	                                              uint32 unFlags) {
		TRACE_FUNCTION_CALL();
		return nullptr;
	}

	const char *Input::GetGlyphSVGForActionOrigin(EInputActionOrigin eOrigin,
	                                              uint32 unFlags) {
		TRACE_FUNCTION_CALL();
		return nullptr;
	}

	const char *
	Input::GetGlyphForActionOrigin_Legacy(EInputActionOrigin eOrigin) {
		TRACE_FUNCTION_CALL();
		return nullptr;
	}

	const char *Input::GetStringForActionOrigin(EInputActionOrigin eOrigin) {
		TRACE_FUNCTION_CALL();
		return nullptr;
	}

	const char *Input::GetStringForAnalogActionName(
	    InputAnalogActionHandle_t eActionHandle) {
		TRACE_FUNCTION_CALL();
		return nullptr;
	}

	void Input::StopAnalogActionMomentum(InputHandle_t inputHandle,
	                                     InputAnalogActionHandle_t eAction) {
		TRACE_FUNCTION_CALL();
	}

	InputMotionData_t Input::GetMotionData(InputHandle_t inputHandle) {
		TRACE_FUNCTION_CALL();
		return {};
	}

	void Input::TriggerVibration(InputHandle_t inputHandle,
	                             unsigned short usLeftSpeed,
	                             unsigned short usRightSpeed) {
		TRACE_FUNCTION_CALL();
	}

	void Input::TriggerVibrationExtended(InputHandle_t inputHandle,
	                                     unsigned short usLeftSpeed,
	                                     unsigned short usRightSpeed,
	                                     unsigned short usLeftTriggerSpeed,
	                                     unsigned short usRightTriggerSpeed) {
		TRACE_FUNCTION_CALL();
	}

	void
	Input::TriggerSimpleHapticEvent(InputHandle_t inputHandle,
	                                EControllerHapticLocation eHapticLocation,
	                                uint8 nIntensity, char nGainDB,
	                                uint8 nOtherIntensity, char nOtherGainDB) {

	}

	void Input::SetLEDColor(InputHandle_t inputHandle, uint8 nColorR,
	                        uint8 nColorG, uint8 nColorB, unsigned int nFlags) {

	}

	void Input::Legacy_TriggerHapticPulse(InputHandle_t inputHandle,
	                                      ESteamControllerPad eTargetPad,
	                                      unsigned short usDurationMicroSec) {
		TRACE_FUNCTION_CALL();
	}

	void Input::Legacy_TriggerRepeatedHapticPulse(
	    InputHandle_t inputHandle, ESteamControllerPad eTargetPad,
	    unsigned short usDurationMicroSec, unsigned short usOffMicroSec,
	    unsigned short unRepeat, unsigned int nFlags) {
		TRACE_FUNCTION_CALL();
	}

	bool Input::ShowBindingPanel(InputHandle_t inputHandle) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	ESteamInputType Input::GetInputTypeForHandle(InputHandle_t inputHandle) {
		TRACE_FUNCTION_CALL();
		return k_ESteamInputType_Unknown;
	}

	InputHandle_t Input::GetControllerForGamepadIndex(int nIndex) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}

	int Input::GetGamepadIndexForController(InputHandle_t ulinputHandle) {
		TRACE_FUNCTION_CALL();
		return 0;
	}

	const char *Input::GetStringForXboxOrigin(EXboxOrigin eOrigin) {
		TRACE_FUNCTION_CALL();
		return nullptr;
	}

	const char *Input::GetGlyphForXboxOrigin(EXboxOrigin eOrigin) {
		TRACE_FUNCTION_CALL();
		return nullptr;
	}

	EInputActionOrigin
	Input::GetActionOriginFromXboxOrigin(InputHandle_t inputHandle,
	                                     EXboxOrigin eOrigin) {
		TRACE_FUNCTION_CALL();
		return k_EInputActionOrigin_None;
	}

	EInputActionOrigin
	Input::TranslateActionOrigin(ESteamInputType eDestinationInputType,
	                             EInputActionOrigin eSourceOrigin) {
		TRACE_FUNCTION_CALL();
		return k_EInputActionOrigin_None;
	}

	bool Input::GetDeviceBindingRevision(InputHandle_t inputHandle, int *pMajor,
	                                     int *pMinor) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	uint32 Input::GetRemotePlaySessionID(InputHandle_t inputHandle) {
		TRACE_FUNCTION_CALL();
		return 0u;
	}

	uint16 Input::GetSessionInputConfigurationSettings() {
		TRACE_FUNCTION_CALL();
		return 0u;
	}


}   // namespace emu


#endif   //_stick_steam_emu_interface_input_
