#include "Log.h"

#include "spdlog/sinks/stdout_color_sinks.h"

namespace LE {

    std::shared_ptr<spdlog::logger> Log::m_core_logger;
    std::shared_ptr<spdlog::logger> Log::m_client_logger;

    void Log::Init()
    {
        spdlog::set_pattern("%^[%T] %n: %v%$");
		m_core_logger = spdlog::stdout_color_mt("LE");
		m_core_logger->set_level(spdlog::level::trace);

		m_client_logger = spdlog::stdout_color_mt("APP");
		m_client_logger->set_level(spdlog::level::trace);
    }
}