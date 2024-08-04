#pragma once 

enum class OS {
    MACOS = 0, WINDOW = 1
};

enum class API {
    VULKAN = 0, METAL = 1, D3D12 = 2
};

class Platform {
    public:
        static OS GetOS() { return s_OS; }
        static API GetAPI() { return s_API; }

    private:
        static OS s_OS;
        static API s_API;
};
