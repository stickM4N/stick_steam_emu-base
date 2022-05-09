#include "logger.hpp"


#if defined(_stick_steam_emu_logger_)


namespace emu {


	std::string log_level_name(log_level lv) {
		switch (lv) {
		case log_level::Trace:
			return "TRACE";
		case log_level::Debug:
			return "DEBUG";
		case log_level::Info:
			return "INFO";
		case log_level::Warning:
			return "WARN";
		case log_level::Error:
			return "ERROR";
		case log_level::Critical:
			return "CRITICAL";
		default:
			return "";
		}
	}


	logger::logger(const std::string &filename, log_level minimum_log_level)
	    : output_file(fopen(filename.c_str(), "a"),
	                  [](FILE *f) {
		                  fclose(f);
	                  }),
	      minimum_log_level(minimum_log_level) {

		fmt::print(this->output_file.get(),
		           "\n[{:%d-%m-%Y @ %H:%M:%S}.{:06d}] -------- |"
		           " ---------- HERE STARTS A NEW LOG INSTANCE ----------\n",
		           fmt::localtime(time(nullptr)),
		           std::chrono::duration_cast<std::chrono::microseconds>(
		               std::chrono::system_clock::now().time_since_epoch())
		               .count()
		               % 1000000);
	}


}   // namespace emu


#endif   //_stick_steam_emu_logger_
