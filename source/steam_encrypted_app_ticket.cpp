#include <steamworks_sdk/steamencryptedappticket.h>


#include "common.hpp"


S_API bool SteamEncryptedAppTicket_BDecryptTicket(
    const uint8 *rgubTicketEncrypted, uint32 cubTicketEncrypted,
    uint8 *rgubTicketDecrypted, uint32 *pcubTicketDecrypted,
    const uint8 rgubKey[k_nSteamEncryptedAppTicketSymmetricKeyLen],
    int cubKey) {
	TRACE_FUNCTION_CALL();
	return false;
}

S_API bool SteamEncryptedAppTicket_BIsTicketForApp(uint8 *rgubTicketDecrypted,
                                                   uint32 cubTicketDecrypted,
                                                   AppId_t nAppID) {
	TRACE_FUNCTION_CALL();
	return false;
}

S_API RTime32 SteamEncryptedAppTicket_GetTicketIssueTime(
    uint8 *rgubTicketDecrypted, uint32 cubTicketDecrypted) {
	TRACE_FUNCTION_CALL();
	return 0u;
}

S_API void SteamEncryptedAppTicket_GetTicketSteamID(uint8 *rgubTicketDecrypted,
                                                    uint32 cubTicketDecrypted,
                                                    CSteamID *psteamID) {
	TRACE_FUNCTION_CALL();
}

S_API AppId_t SteamEncryptedAppTicket_GetTicketAppID(
    uint8 *rgubTicketDecrypted, uint32 cubTicketDecrypted) {
	TRACE_FUNCTION_CALL();
	return 0u;
}

S_API bool SteamEncryptedAppTicket_BUserOwnsAppInTicket(
    uint8 *rgubTicketDecrypted, uint32 cubTicketDecrypted, AppId_t nAppID) {
	TRACE_FUNCTION_CALL();
	return false;
}

S_API bool SteamEncryptedAppTicket_BUserIsVacBanned(uint8 *rgubTicketDecrypted,
                                                    uint32 cubTicketDecrypted) {
	TRACE_FUNCTION_CALL();
	return false;
}

S_API bool SteamEncryptedAppTicket_BGetAppDefinedValue(
    uint8 *rgubTicketDecrypted, uint32 cubTicketDecrypted, uint32 *pValue) {
	TRACE_FUNCTION_CALL();
	return false;
}

S_API const uint8 *
SteamEncryptedAppTicket_GetUserVariableData(uint8 *rgubTicketDecrypted,
                                            uint32 cubTicketDecrypted,
                                            uint32 *pcubUserData) {
	TRACE_FUNCTION_CALL();
	return nullptr;
}

S_API bool SteamEncryptedAppTicket_BIsTicketSigned(uint8 *rgubTicketDecrypted,
                                                   uint32 cubTicketDecrypted,
                                                   const uint8 *pubRSAKey,
                                                   uint32 cubRSAKey) {
	TRACE_FUNCTION_CALL();
	return false;
}

S_API bool
SteamEncryptedAppTicket_BIsLicenseBorrowed(uint8 *rgubTicketDecrypted,
                                           uint32 cubTicketDecrypted) {
	TRACE_FUNCTION_CALL();
	return false;
}

S_API bool
SteamEncryptedAppTicket_BIsLicenseTemporary(uint8 *rgubTicketDecrypted,
                                            uint32 cubTicketDecrypted) {
	TRACE_FUNCTION_CALL();
	return false;
}
