#include "Controller.hpp"


#if defined(_stick_steam_emu_interface_controller_)


#	include "../common.hpp"


namespace emu {


	bool Controller::Init() {
		TRACE_FUNCTION_CALL();
		return false;
	}
	bool Controller::Shutdown() {
		TRACE_FUNCTION_CALL();
		return false;
	}

	void Controller::RunFrame() {
		TRACE_FUNCTION_CALL();
	}

	int Controller::GetConnectedControllers(ControllerHandle_t *handlesOut) {
		TRACE_FUNCTION_CALL();
		return 0;
	}

	ControllerActionSetHandle_t
	Controller::GetActionSetHandle(const char *pszActionSetName) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}

	void
	Controller::ActivateActionSet(ControllerHandle_t controllerHandle,
	                              ControllerActionSetHandle_t actionSetHandle) {
		TRACE_FUNCTION_CALL();
	}

	ControllerActionSetHandle_t
	Controller::GetCurrentActionSet(ControllerHandle_t controllerHandle) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}

	void Controller::ActivateActionSetLayer(
	    ControllerHandle_t controllerHandle,
	    ControllerActionSetHandle_t actionSetLayerHandle) {
		TRACE_FUNCTION_CALL();
	}
	void Controller::DeactivateActionSetLayer(
	    ControllerHandle_t controllerHandle,
	    ControllerActionSetHandle_t actionSetLayerHandle) {
		TRACE_FUNCTION_CALL();
	}
	void Controller::DeactivateAllActionSetLayers(
	    ControllerHandle_t controllerHandle) {
		TRACE_FUNCTION_CALL();
	}
	int Controller::GetActiveActionSetLayers(
	    ControllerHandle_t controllerHandle,
	    ControllerActionSetHandle_t *handlesOut) {
		TRACE_FUNCTION_CALL();
		return 0;
	}

	ControllerDigitalActionHandle_t
	Controller::GetDigitalActionHandle(const char *pszActionName) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}

	ControllerDigitalActionData_t Controller::GetDigitalActionData(
	    ControllerHandle_t controllerHandle,
	    ControllerDigitalActionHandle_t digitalActionHandle) {
		TRACE_FUNCTION_CALL();
		return {};
	}

	int Controller::GetDigitalActionOrigins(
	    ControllerHandle_t controllerHandle,
	    ControllerActionSetHandle_t actionSetHandle,
	    ControllerDigitalActionHandle_t digitalActionHandle,
	    EControllerActionOrigin *originsOut) {
		TRACE_FUNCTION_CALL();
		return 0;
	}

	ControllerAnalogActionHandle_t
	Controller::GetAnalogActionHandle(const char *pszActionName) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}

	ControllerAnalogActionData_t Controller::GetAnalogActionData(
	    ControllerHandle_t controllerHandle,
	    ControllerAnalogActionHandle_t analogActionHandle) {
		TRACE_FUNCTION_CALL();
		return {};
	}

	int Controller::GetAnalogActionOrigins(
	    ControllerHandle_t controllerHandle,
	    ControllerActionSetHandle_t actionSetHandle,
	    ControllerAnalogActionHandle_t analogActionHandle,
	    EControllerActionOrigin *originsOut) {
		TRACE_FUNCTION_CALL();
		return 0;
	}

	const char *
	Controller::GetGlyphForActionOrigin(EControllerActionOrigin eOrigin) {
		TRACE_FUNCTION_CALL();
		return nullptr;
	}

	const char *
	Controller::GetStringForActionOrigin(EControllerActionOrigin eOrigin) {
		TRACE_FUNCTION_CALL();
		return nullptr;
	}

	void Controller::StopAnalogActionMomentum(
	    ControllerHandle_t controllerHandle,
	    ControllerAnalogActionHandle_t eAction) {
		TRACE_FUNCTION_CALL();
	}

	ControllerMotionData_t
	Controller::GetMotionData(ControllerHandle_t controllerHandle) {
		TRACE_FUNCTION_CALL();
		return {};
	}

	void Controller::TriggerHapticPulse(ControllerHandle_t controllerHandle,
	                                    ESteamControllerPad eTargetPad,
	                                    unsigned short usDurationMicroSec) {
		TRACE_FUNCTION_CALL();
	}

	void Controller::TriggerRepeatedHapticPulse(
	    ControllerHandle_t controllerHandle, ESteamControllerPad eTargetPad,
	    unsigned short usDurationMicroSec, unsigned short usOffMicroSec,
	    unsigned short unRepeat, unsigned int nFlags) {
		TRACE_FUNCTION_CALL();
	}

	void Controller::TriggerVibration(ControllerHandle_t controllerHandle,
	                                  unsigned short usLeftSpeed,
	                                  unsigned short usRightSpeed) {
		TRACE_FUNCTION_CALL();
	}

	void Controller::SetLEDColor(ControllerHandle_t controllerHandle,
	                             uint8 nColorR, uint8 nColorG, uint8 nColorB,
	                             unsigned int nFlags) {
		TRACE_FUNCTION_CALL();
	}

	bool Controller::ShowBindingPanel(ControllerHandle_t controllerHandle) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	ESteamInputType
	Controller::GetInputTypeForHandle(ControllerHandle_t controllerHandle) {
		TRACE_FUNCTION_CALL();
		return k_ESteamInputType_XBox360Controller;
	}

	ControllerHandle_t Controller::GetControllerForGamepadIndex(int nIndex) {
		TRACE_FUNCTION_CALL();
		return 0;
	}

	int Controller::GetGamepadIndexForController(
	    ControllerHandle_t ulControllerHandle) {
		TRACE_FUNCTION_CALL();
		return 0;
	}

	const char *Controller::GetStringForXboxOrigin(EXboxOrigin eOrigin) {
		TRACE_FUNCTION_CALL();
		return nullptr;
	}

	const char *Controller::GetGlyphForXboxOrigin(EXboxOrigin eOrigin) {
		TRACE_FUNCTION_CALL();
		return nullptr;
	}

	EControllerActionOrigin Controller::GetActionOriginFromXboxOrigin(
	    ControllerHandle_t controllerHandle, EXboxOrigin eOrigin) {
		TRACE_FUNCTION_CALL();
		return k_EControllerActionOrigin_None;
	}

	EControllerActionOrigin
	Controller::TranslateActionOrigin(ESteamInputType eDestinationInputType,
	                                  EControllerActionOrigin eSourceOrigin) {
		TRACE_FUNCTION_CALL();
		return k_EControllerActionOrigin_None;
	}

	bool Controller::GetControllerBindingRevision(
	    ControllerHandle_t controllerHandle, int *pMajor, int *pMinor) {
		TRACE_FUNCTION_CALL();
		return false;
	}


}   // namespace emu


#endif   //_stick_steam_emu_interface_controller_
