#if not defined(_stick_steam_emu_interface_controller_)
#	define _stick_steam_emu_interface_controller_


#	include <steamworks_sdk/isteamcontroller.h>


namespace emu {


	class Controller final : public ISteamController {

	public:
		bool Init() override;
		bool Shutdown() override;

		void RunFrame() override;

		int GetConnectedControllers(ControllerHandle_t *handlesOut) override;


		ControllerActionSetHandle_t
		GetActionSetHandle(const char *pszActionSetName) override;

		void
		ActivateActionSet(ControllerHandle_t controllerHandle,
		                  ControllerActionSetHandle_t actionSetHandle) override;
		ControllerActionSetHandle_t
		GetCurrentActionSet(ControllerHandle_t controllerHandle) override;

		void ActivateActionSetLayer(
		    ControllerHandle_t controllerHandle,
		    ControllerActionSetHandle_t actionSetLayerHandle) override;
		void DeactivateActionSetLayer(
		    ControllerHandle_t controllerHandle,
		    ControllerActionSetHandle_t actionSetLayerHandle) override;
		void DeactivateAllActionSetLayers(
		    ControllerHandle_t controllerHandle) override;
		int GetActiveActionSetLayers(
		    ControllerHandle_t controllerHandle,
		    ControllerActionSetHandle_t *handlesOut) override;


		ControllerDigitalActionHandle_t
		GetDigitalActionHandle(const char *pszActionName) override;

		ControllerDigitalActionData_t GetDigitalActionData(
		    ControllerHandle_t controllerHandle,
		    ControllerDigitalActionHandle_t digitalActionHandle) override;

		int GetDigitalActionOrigins(
		    ControllerHandle_t controllerHandle,
		    ControllerActionSetHandle_t actionSetHandle,
		    ControllerDigitalActionHandle_t digitalActionHandle,
		    EControllerActionOrigin *originsOut) override;

		ControllerAnalogActionHandle_t
		GetAnalogActionHandle(const char *pszActionName) override;

		ControllerAnalogActionData_t GetAnalogActionData(
		    ControllerHandle_t controllerHandle,
		    ControllerAnalogActionHandle_t analogActionHandle) override;

		int GetAnalogActionOrigins(
		    ControllerHandle_t controllerHandle,
		    ControllerActionSetHandle_t actionSetHandle,
		    ControllerAnalogActionHandle_t analogActionHandle,
		    EControllerActionOrigin *originsOut) override;

		const char *
		GetGlyphForActionOrigin(EControllerActionOrigin eOrigin) override;

		const char *
		GetStringForActionOrigin(EControllerActionOrigin eOrigin) override;

		void StopAnalogActionMomentum(
		    ControllerHandle_t controllerHandle,
		    ControllerAnalogActionHandle_t eAction) override;

		ControllerMotionData_t
		GetMotionData(ControllerHandle_t controllerHandle) override;


		void TriggerHapticPulse(ControllerHandle_t controllerHandle,
		                        ESteamControllerPad eTargetPad,
		                        unsigned short usDurationMicroSec) override;

		void TriggerRepeatedHapticPulse(ControllerHandle_t controllerHandle,
		                                ESteamControllerPad eTargetPad,
		                                unsigned short usDurationMicroSec,
		                                unsigned short usOffMicroSec,
		                                unsigned short unRepeat,
		                                unsigned int nFlags) override;

		void TriggerVibration(ControllerHandle_t controllerHandle,
		                      unsigned short usLeftSpeed,
		                      unsigned short usRightSpeed) override;

		void SetLEDColor(ControllerHandle_t controllerHandle, uint8 nColorR,
		                 uint8 nColorG, uint8 nColorB,
		                 unsigned int nFlags) override;


		bool ShowBindingPanel(ControllerHandle_t controllerHandle) override;

		ESteamInputType
		GetInputTypeForHandle(ControllerHandle_t controllerHandle) override;

		ControllerHandle_t GetControllerForGamepadIndex(int nIndex) override;

		int GetGamepadIndexForController(
		    ControllerHandle_t ulControllerHandle) override;

		const char *GetStringForXboxOrigin(EXboxOrigin eOrigin) override;

		const char *GetGlyphForXboxOrigin(EXboxOrigin eOrigin) override;

		EControllerActionOrigin
		GetActionOriginFromXboxOrigin(ControllerHandle_t controllerHandle,
		                              EXboxOrigin eOrigin) override;

		EControllerActionOrigin
		TranslateActionOrigin(ESteamInputType eDestinationInputType,
		                      EControllerActionOrigin eSourceOrigin) override;

		bool GetControllerBindingRevision(ControllerHandle_t controllerHandle,
		                                  int *pMajor, int *pMinor) override;
	};


}   // namespace emu


#endif   //_stick_steam_emu_interface_controller_