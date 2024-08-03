#pragma once 

#include <spdlog/spdlog.h>
#include <spdlog/fmt/ostr.h>

class RFLog {
    public:
        static void Init();
        inline static std::shared_ptr<spdlog::logger>& GetLogger() { return m_logger; }

    private:
        static std::shared_ptr<spdlog::logger> m_logger;
};

#define RF_TRACE(...)   ::RFLog::GetLogger()->trace(__VA_ARGS__)
#define RF_INFO(...)    ::RFLog::GetLogger()->info(__VA_ARGS__)
#define RF_ERROR(...)   ::RFLog::GetLogger()->error(__VA_ARGS__)
