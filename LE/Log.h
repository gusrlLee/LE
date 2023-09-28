#pragma once 

#include <iostream>

#include "spdlog/spdlog.h"

namespace LE {
    class Log 
    {
        public:
            static void Init();

            inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return m_core_logger; }
            inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return m_client_logger; }
        private:
            static std::shared_ptr<spdlog::logger> m_core_logger;
            static std::shared_ptr<spdlog::logger> m_client_logger;
    };
} // namespace LE

// Core log macros
#define LE_CORE_TRACE(...)    ::LE::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define LE_CORE_INFO(...)     ::LE::Log::GetCoreLogger()->info(__VA_ARGS__)
#define LE_CORE_WARN(...)     ::LE::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define LE_CORE_ERROR(...)    ::LE::Log::GetCoreLogger()->error(__VA_ARGS__)
#define LE_CORE_FATAL(...)    ::LE::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log macros
#define LE_TRACE(...)	      ::LE::Log::GetClientLogger()->trace(__VA_ARGS__)
#define LE_INFO(...)	      ::LE::Log::GetClientLogger()->info(__VA_ARGS__)
#define LE_WARN(...)	      ::LE::Log::GetClientLogger()->warn(__VA_ARGS__)
#define LE_ERROR(...)	      ::LE::Log::GetClientLogger()->error(__VA_ARGS__)
#define LE_FATAL(...)	      ::LE::Log::GetClientLogger()->fatal(__VA_ARGS__)