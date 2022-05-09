#if not defined(_stick_steam_emu_interface_utils_)
#	define _stick_steam_emu_interface_utils_


#	include <steamworks_sdk/isteamutils.h>


namespace emu {


	class Utils final : public ISteamUtils {

	protected:
		bool GetCSERIPPort(uint32 *unIP, uint16 *usPort) override;

		void RunFrame() override;

	public:
		uint32 GetSecondsSinceAppActive() override;
		uint32 GetSecondsSinceComputerActive() override;

		EUniverse GetConnectedUniverse() override;

		uint32 GetServerRealTime() override;

		const char *GetIPCountry() override;

		bool GetImageSize(int iImage, uint32 *pnWidth,
		                  uint32 *pnHeight) override;

		bool GetImageRGBA(int iImage, uint8 *pubDest,
		                  int nDestBufferSize) override;

		uint8 GetCurrentBatteryPower() override;

		uint32 GetAppID() override;

		void SetOverlayNotificationPosition(
		    ENotificationPosition eNotificationPosition) override;

		bool IsAPICallCompleted(SteamAPICall_t hSteamAPICall,
		                        bool *pbFailed) override;
		ESteamAPICallFailure
		GetAPICallFailureReason(SteamAPICall_t hSteamAPICall) override;
		bool GetAPICallResult(SteamAPICall_t hSteamAPICall, void *pCallback,
		                      int cubCallback, int iCallbackExpected,
		                      bool *pbFailed) override;

		uint32 GetIPCCallCount() override;

		void
		SetWarningMessageHook(SteamAPIWarningMessageHook_t pFunction) override;

		bool IsOverlayEnabled() override;

		bool BOverlayNeedsPresent() override;

		STEAM_CALL_RESULT(CheckFileSignature_t)
		SteamAPICall_t CheckFileSignature(const char *szFileName) override;

		bool ShowGamepadTextInput(EGamepadTextInputMode eInputMode,
		                          EGamepadTextInputLineMode eLineInputMode,
		                          const char *pchDescription, uint32 unCharMax,
		                          const char *pchExistingText) override;

		uint32 GetEnteredGamepadTextLength() override;
		bool GetEnteredGamepadTextInput(char *pchText, uint32 cchText) override;

		const char *GetSteamUILanguage() override;

		bool IsSteamRunningInVR() override;

		void SetOverlayNotificationInset(int nHorizontalInset,
		                                 int nVerticalInset) override;

		bool IsSteamInBigPictureMode() override;

		void StartVRDashboard() override;

		bool IsVRHeadsetStreamingEnabled() override;

		void SetVRHeadsetStreamingEnabled(bool bEnabled) override;

		bool IsSteamChinaLauncher() override;

		bool InitFilterText(uint32 unFilterOptions) override;

		int FilterText(ETextFilteringContext eContext, CSteamID sourceSteamID,
		               const char *pchInputMessage, char *pchOutFilteredText,
		               uint32 nByteSizeOutFilteredText) override;

		ESteamIPv6ConnectivityState GetIPv6ConnectivityState(
		    ESteamIPv6ConnectivityProtocol eProtocol) override;

		bool IsSteamRunningOnSteamDeck() override;

		bool ShowFloatingGamepadTextInput(
		    EFloatingGamepadTextInputMode eKeyboardMode,
		    int nTextFieldXPosition, int nTextFieldYPosition,
		    int nTextFieldWidth, int nTextFieldHeight) override;

		void SetGameLauncherMode(bool bLauncherMode) override;

		bool DismissFloatingGamepadTextInput() override;
	};


}   // namespace emu


#endif   //_stick_steam_emu_interface_utils_
