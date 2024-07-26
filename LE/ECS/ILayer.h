#pragma once 
#include <iostream>
#include <string>

namespace LE 
{
    class ILayer {
        public:
            Layer(std::string& name);
            ~Layer();

            virtual void OnDetta

        private:
            std::stirng m_debug_name;
    };
}