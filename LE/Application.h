#pragma once
#include <iostream>

#include "Log.h"

namespace LE {

    class Application {
        public:
            Application(const char* name, int width, int height);
            void Run();
            
        private:
            const char* m_window_name;
            int m_window_width;
            int m_window_height;
    };

} // namespace LE