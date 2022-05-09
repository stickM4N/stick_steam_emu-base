#if not defined(_stick_steam_emu_logger_)
#	define _stick_steam_emu_logger_


#	include <chrono>
#	include <memory>

#	include <fmt/core.h>
#	include <fmt/chrono.h>


namespace emu {


	enum class log_level : uint8_t {
		Trace = 1u,
		Debug,
		Info,
		Warning,
		Error,
		Critical
	};


	std::string log_level_name(log_level lv);


	class logger {
		std::unique_ptr<FILE, void (*)(FILE *f)> output_file;
		log_level minimum_log_level;


		template<typename... args>
		void commit_log(log_level level, const std::string &format,
		                args &&...argv) {
			if (level < this->minimum_log_level)
				return;

			fmt::vprint(
			    this->output_file.get(),
			    "[{:%d-%m-%Y @ %H:%M:%S}.{:06d}]{:^10s}| " + format + '\n',
			    fmt::make_format_args(
			        fmt::localtime(time(nullptr)),
			        std::chrono::duration_cast<std::chrono::microseconds>(
			            std::chrono::system_clock::now().time_since_epoch())
			                .count()
			            % 1000000,
			        log_level_name(level), argv...));
		}

	public:
		explicit logger(const std::string &filename,
		                log_level minimum_log_level = log_level::Info);


		log_level get_minimum_log_level() {
			return this->minimum_log_level;
		}
		void set_minimum_log_level(log_level level) {
			this->minimum_log_level = level;
		}


		template<typename... args>
		void trace(const std::string &format, args &&...argv) {
			this->commit_log(log_level::Trace, format, argv...);
		}
		template<typename... args>
		void debug(const std::string &format, args &&...argv) {
			this->commit_log(log_level::Debug, format, argv...);
		}
		template<typename... args>
		void info(const std::string &format, args &&...argv) {
			this->commit_log(log_level::Info, format, argv...);
		}
		template<typename... args>
		void warn(const std::string &format, args &&...argv) {
			this->commit_log(log_level::Warning, format, argv...);
		}
		template<typename... args>
		void error(const std::string &format, args &&...argv) {
			this->commit_log(log_level::Error, format, argv...);
		}
		template<typename... args>
		void critical(const std::string &format, args &&...argv) {
			this->commit_log(log_level::Critical, format, argv...);
		}
	};


}   // namespace emu


#endif   // _stick_steam_emu_logger_
