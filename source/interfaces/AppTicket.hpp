#if not defined(_stick_steam_emu_interface_appticket_)
#	define _stick_steam_emu_interface_appticket_


#	include <steamworks_sdk/isteamappticket.h>


namespace emu {


	class AppTicket final : public ISteamAppTicket {

	public:
		uint32 GetAppOwnershipTicketData(uint32 nAppID, void *pvBuffer,
		                                 uint32 cbBufferLength, uint32 *piAppId,
		                                 uint32 *piSteamId, uint32 *piSignature,
		                                 uint32 *pcbSignature) override;
	};


}   // namespace emu


#endif   //_stick_steam_emu_interface_appticket_
