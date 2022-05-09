#if not defined(_stick_steam_emu_interface_user_)
#	define _stick_steam_emu_interface_user_


#	include <steamworks_sdk/isteamuser.h>


namespace emu {


	class User final : public ISteamUser {

	public:
		HSteamUser GetHSteamUser() override;

		bool BLoggedOn() override;

		CSteamID GetSteamID() override;


		int InitiateGameConnection_DEPRECATED(
		    void *pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer,
		    uint32 unIPServer, uint16 usPortServer, bool bSecure) override;

		void TerminateGameConnection_DEPRECATED(uint32 unIPServer,
		                                        uint16 usPortServer) override;


		void TrackAppUsageEvent(CGameID gameID, int eAppUsageEvent,
		                        const char *pchExtraInfo) override;

		bool GetUserDataFolder(char *pchBuffer, int cubBuffer) override;

		void StartVoiceRecording() override;

		void StopVoiceRecording() override;

		EVoiceResult GetAvailableVoice(
		    uint32 *pcbCompressed, uint32 *pcbUncompressed_Deprecated,
		    uint32 nUncompressedVoiceDesiredSampleRate_Deprecated) override;


		EVoiceResult GetVoice(
		    bool bWantCompressed, void *pDestBuffer, uint32 cbDestBufferSize,
		    uint32 *nBytesWritten, bool bWantUncompressed_Deprecated,
		    void *pUncompressedDestBuffer_Deprecated,
		    uint32 cbUncompressedDestBufferSize_Deprecated,
		    uint32 *nUncompressBytesWritten_Deprecated,
		    uint32 nUncompressedVoiceDesiredSampleRate_Deprecated) override;

		EVoiceResult DecompressVoice(const void *pCompressed,
		                             uint32 cbCompressed, void *pDestBuffer,
		                             uint32 cbDestBufferSize,
		                             uint32 *nBytesWritten,
		                             uint32 nDesiredSampleRate) override;

		uint32 GetVoiceOptimalSampleRate() override;

		HAuthTicket GetAuthSessionTicket(void *pTicket, int cbMaxTicket,
		                                 uint32 *pcbTicket) override;

		EBeginAuthSessionResult BeginAuthSession(const void *pAuthTicket,
		                                         int cbAuthTicket,
		                                         CSteamID steamID) override;

		void EndAuthSession(CSteamID steamID) override;

		void CancelAuthTicket(HAuthTicket hAuthTicket) override;

		EUserHasLicenseForAppResult
		UserHasLicenseForApp(CSteamID steamID, AppId_t appID) override;

		bool BIsBehindNAT() override;

		void AdvertiseGame(CSteamID steamIDGameServer, uint32 unIPServer,
		                   uint16 usPortServer) override;

		STEAM_CALL_RESULT(EncryptedAppTicketResponse_t)
		SteamAPICall_t RequestEncryptedAppTicket(void *pDataToInclude,
		                                         int cbDataToInclude) override;

		bool GetEncryptedAppTicket(void *pTicket, int cbMaxTicket,
		                           uint32 *pcbTicket) override;

		int GetGameBadgeLevel(int nSeries, bool bFoil) override;

		int GetPlayerSteamLevel() override;

		STEAM_CALL_RESULT(StoreAuthURLResponse_t)
		SteamAPICall_t RequestStoreAuthURL(const char *pchRedirectURL) override;

		bool BIsPhoneVerified() override;

		bool BIsTwoFactorEnabled() override;

		bool BIsPhoneIdentifying() override;

		bool BIsPhoneRequiringVerification() override;

		STEAM_CALL_RESULT(MarketEligibilityResponse_t)
		SteamAPICall_t GetMarketEligibility() override;

		STEAM_CALL_RESULT(DurationControl_t)
		SteamAPICall_t GetDurationControl() override;

		bool BSetDurationControlOnlineState(
		    EDurationControlOnlineState eNewState) override;
	};


}   // namespace emu


#endif   //_stick_steam_emu_interface_user_
