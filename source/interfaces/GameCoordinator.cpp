#include "GameCoordinator.hpp"


#if defined(_stick_steam_emu_interface_game_coordinator_)


#	include "../common.hpp"


namespace emu {

	EGCResults GameCoordinator::SendMessage(uint32 unMsgType,
	                                        const void *pubData,
	                                        uint32 cubData) {
		TRACE_FUNCTION_CALL();
		return k_EGCResultInvalidMessage;
	}

	bool GameCoordinator::IsMessageAvailable(uint32 *pcubMsgSize) {
		TRACE_FUNCTION_CALL();
		return false;
	}

	EGCResults GameCoordinator::RetrieveMessage(uint32 *punMsgType,
	                                            void *pubDest, uint32 cubDest,
	                                            uint32 *pcubMsgSize) {
		TRACE_FUNCTION_CALL();
		return k_EGCResultInvalidMessage;
	}


}   // namespace emu


#endif   //_stick_steam_emu_interface_game_coordinator_
