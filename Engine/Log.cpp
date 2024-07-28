#include "Log.h"
#include <spdlog/sinks/stdout_color_sinks.h>
#include <spdlog/sinks/basic_file_sink.h>

std::shared_ptr<spdlog::logger> Log::m_engine_logger;
std::shared_ptr<spdlog::logger> Log::m_editor_logger;

void Log::Init()
{
   spdlog::set_pattern("%^[%T] %n: %v%$");
   m_engine_logger = spdlog::stdout_color_mt("ENGINE");
   m_engine_logger->set_level(spdlog::level::trace);

   m_editor_logger = spdlog::stdout_color_mt("EDITOR");
   m_editor_logger->set_level(spdlog::level::trace);
}