#if not defined(_stick_steam_emu_common_)
#	define _stick_steam_emu_common_


#	include "logger/logger.hpp"


namespace emu {


	extern logger *log;


}   // namespace emu


#	define TRACE_FUNCTION_CALL() emu::log->trace("{:s} called!", __FUNCTION__)


#endif   //_stick_steam_emu_common_
