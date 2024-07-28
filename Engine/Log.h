#pragma once 

#include <spdlog/spdlog.h>
#include <spdlog/fmt/ostr.h>

class Log {
    public:
        static void Init();
        inline static std::shared_ptr<spdlog::logger>& GetEditorLogger() { return m_editor_logger; }
        inline static std::shared_ptr<spdlog::logger>& GetEngineLogger() { return m_engine_logger; }

    private:
        static std::shared_ptr<spdlog::logger> m_engine_logger;
        static std::shared_ptr<spdlog::logger> m_editor_logger;
};

#define ENGINE_TRACE(...)   ::Log::GetEngineLogger()->trace(__VA_ARGS__)
#define ENGINE_INFO(...)    ::Log::GetEngineLogger()->info(__VA_ARGS__)
#define ENGINE_ERROR(...)   ::Log::GetEngineLogger()->error(__VA_ARGS__)

#define EDITOR_TRACE(...)   ::Log::GetEditorLogger()->trace(__VA_ARGS__)
#define EDITOR_INFO(...)    ::Log::GetEditorLogger()->info(__VA_ARGS__)
#define EDITOR_ERROR(...)   ::Log::GetEditorLogger()->error(__VA_ARGS__)