#if not defined(_stick_steam_emu_interface_game_coordinator_)
#	define _stick_steam_emu_interface_game_coordinator_


#	include <steamworks_sdk/isteamgamecoordinator.h>


namespace emu {


	class GameCoordinator final : public ISteamGameCoordinator {

	public:
		EGCResults SendMessage(uint32 unMsgType, const void *pubData,
		                       uint32 cubData) override;

		bool IsMessageAvailable(uint32 *pcubMsgSize) override;

		EGCResults RetrieveMessage(uint32 *punMsgType, void *pubDest,
		                           uint32 cubDest,
		                           uint32 *pcubMsgSize) override;
	};


}   // namespace emu


#endif   //_stick_steam_emu_interface_game_coordinator_
