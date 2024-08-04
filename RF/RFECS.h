#pragma once 

enum class RF_ENTITY_ID {
    OBJECT = 0, 
};

enum class RF_COMPONENT_ID {
    OBJECT = 0, 
};

class IRFEntity {
    public:
        IRFEnity() = default;
        ~IRFEnity() = default;

    private: 
        RFID m_id;
};


class IRFComponent {
    public:
        IComponent() = default;
        ~IComponent() = default;
};


class IRFSystem {
    public:
        ISystem() = default;
        ~ISystem() = default;
};
