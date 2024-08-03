#include "RFLog.h"
#include <spdlog/sinks/stdout_color_sinks.h>
#include <spdlog/sinks/basic_file_sink.h>

std::shared_ptr<spdlog::logger> RFLog::m_logger;

void RFLog::Init()
{
   spdlog::set_pattern("%^[%T] %n: %v%$");
   m_logger = spdlog::stdout_color_mt("BACKEND");
   m_logger->set_level(spdlog::level::trace);
}
