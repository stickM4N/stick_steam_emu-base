#include "AppTicket.hpp"


#if defined(_stick_steam_emu_interface_appticket_)


#	include "../common.hpp"


namespace emu {


	uint32 AppTicket::GetAppOwnershipTicketData(
	    uint32 nAppID, void *pvBuffer, uint32 cbBufferLength, uint32 *piAppId,
	    uint32 *piSteamId, uint32 *piSignature, uint32 *pcbSignature) {
		TRACE_FUNCTION_CALL();
		return 0u;
	}


}   // namespace emu


#endif   //_stick_steam_emu_interface_appticket_
