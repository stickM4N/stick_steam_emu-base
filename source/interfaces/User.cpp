#include "User.hpp"


#if defined(_stick_steam_emu_interface_user_)


#	include "../common.hpp"


namespace emu {


	HSteamUser User::GetHSteamUser() {
		TRACE_FUNCTION_CALL();
		return 0;
	}

	bool User::BLoggedOn() {
		TRACE_FUNCTION_CALL();
		return false;
	}

	CSteamID User::GetSteamID() {
		TRACE_FUNCTION_CALL();
		return {};
	}

	int User::InitiateGameConnection_DEPRECATED(
	    void *pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer,
	    uint32 unIPServer, uint16 usPortServer, bool bSecure) {
		TRACE_FUNCTION_CALL();
		return 0;
	}

	void User::TerminateGameConnection_DEPRECATED(uint32 unIPServer,
	                                              uint16 usPortServer) {
		TRACE_FUNCTION_CALL();
	}

	void User::TrackAppUsageEvent(CGameID gameID, int eAppUsageEvent,
	                              const char *pchExtraInfo) {
		TRACE_FUNCTION_CALL();
	}

	bool User::GetUserDataFolder(char *pchBuffer, int cubBuffer) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	void User::StartVoiceRecording() {
		TRACE_FUNCTION_CALL();
	}

	void User::StopVoiceRecording() {
		TRACE_FUNCTION_CALL();
	}

	EVoiceResult User::GetAvailableVoice(
	    uint32 *pcbCompressed, uint32 *pcbUncompressed_Deprecated,
	    uint32 nUncompressedVoiceDesiredSampleRate_Deprecated) {
		TRACE_FUNCTION_CALL();
		return k_EVoiceResultNotInitialized;
	}


	EVoiceResult
	User::GetVoice(bool bWantCompressed, void *pDestBuffer,
	               uint32 cbDestBufferSize, uint32 *nBytesWritten,
	               bool bWantUncompressed_Deprecated,
	               void *pUncompressedDestBuffer_Deprecated,
	               uint32 cbUncompressedDestBufferSize_Deprecated,
	               uint32 *nUncompressBytesWritten_Deprecated,
	               uint32 nUncompressedVoiceDesiredSampleRate_Deprecated) {
		TRACE_FUNCTION_CALL();
		return k_EVoiceResultNotInitialized;
	}

	EVoiceResult User::DecompressVoice(const void *pCompressed,
	                                   uint32 cbCompressed, void *pDestBuffer,
	                                   uint32 cbDestBufferSize,
	                                   uint32 *nBytesWritten,
	                                   uint32 nDesiredSampleRate) {
		TRACE_FUNCTION_CALL();
		return k_EVoiceResultNotInitialized;
	}

	uint32 User::GetVoiceOptimalSampleRate() {
		TRACE_FUNCTION_CALL();
		return 0u;
	}

	HAuthTicket User::GetAuthSessionTicket(void *pTicket, int cbMaxTicket,
	                                       uint32 *pcbTicket) {
		TRACE_FUNCTION_CALL();
		return 0u;
	}

	EBeginAuthSessionResult User::BeginAuthSession(const void *pAuthTicket,
	                                               int cbAuthTicket,
	                                               CSteamID steamID) {
		TRACE_FUNCTION_CALL();
		return k_EBeginAuthSessionResultInvalidTicket;
	}

	void User::EndAuthSession(CSteamID steamID) {
		TRACE_FUNCTION_CALL();
	}

	void User::CancelAuthTicket(HAuthTicket hAuthTicket) {
		TRACE_FUNCTION_CALL();
	}

	EUserHasLicenseForAppResult User::UserHasLicenseForApp(CSteamID steamID,
	                                                       AppId_t appID) {
		TRACE_FUNCTION_CALL();
		return k_EUserHasLicenseResultNoAuth;
	}

	bool User::BIsBehindNAT() {
		TRACE_FUNCTION_CALL();
		return false;
	}

	void User::AdvertiseGame(CSteamID steamIDGameServer, uint32 unIPServer,
	                         uint16 usPortServer) {
		TRACE_FUNCTION_CALL();
	}

	SteamAPICall_t User::RequestEncryptedAppTicket(void *pDataToInclude,
	                                               int cbDataToInclude) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}

	bool User::GetEncryptedAppTicket(void *pTicket, int cbMaxTicket,
	                                 uint32 *pcbTicket) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	int User::GetGameBadgeLevel(int nSeries, bool bFoil) {
		TRACE_FUNCTION_CALL();
		return 0;
	}

	int User::GetPlayerSteamLevel() {
		TRACE_FUNCTION_CALL();
		return 0;
	}

	SteamAPICall_t User::RequestStoreAuthURL(const char *pchRedirectURL) {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}

	bool User::BIsPhoneVerified() {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool User::BIsTwoFactorEnabled() {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool User::BIsPhoneIdentifying() {
		TRACE_FUNCTION_CALL();
		return false;
	}

	bool User::BIsPhoneRequiringVerification() {
		TRACE_FUNCTION_CALL();
		return false;
	}

	SteamAPICall_t User::GetMarketEligibility() {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}

	SteamAPICall_t User::GetDurationControl() {
		TRACE_FUNCTION_CALL();
		return 0ull;
	}

	bool User::BSetDurationControlOnlineState(
	    EDurationControlOnlineState eNewState) {
		TRACE_FUNCTION_CALL();
		return false;
	}



}   // namespace emu


#endif   //_stick_steam_emu_interface_user_
