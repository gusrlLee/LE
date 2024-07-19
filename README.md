
```bash
project_root/
├── src/
│   ├── ApplicationLayer/
│   │   ├── UIManager.cpp
│   │   ├── UIManager.h
│   │   ├── InputManager.cpp
│   │   ├── InputManager.h
│   │   └── Application.cpp
│   │   └── Application.h
│   │
│   ├── ECS/
│   │   ├── Entity.cpp
│   │   ├── Entity.h
│   │   ├── Component.cpp
│   │   ├── Component.h
│   │   ├── System.cpp
│   │   ├── System.h
│   │   ├── ECSManager.cpp
│   │   ├── ECSManager.h
│   │   └── Components/
│   │       ├── TransformComponent.cpp
│   │       ├── TransformComponent.h
│   │       ├── MeshComponent.cpp
│   │       ├── MeshComponent.h
│   │       ├── MaterialComponent.cpp
│   │       ├── MaterialComponent.h
│   │       ├── CameraComponent.cpp
│   │       ├── CameraComponent.h
│   │       ├── LightComponent.cpp
│   │       ├── LightComponent.h
│   │       └── CustomComponent.cpp
│   │       └── CustomComponent.h
│   │
│   ├── RenderingEngine/
│   │   ├── Renderer.cpp
│   │   ├── Renderer.h
│   │   ├── Scene.cpp
│   │   ├── Scene.h
│   │   ├── ResourceManager.cpp
│   │   ├── ResourceManager.h
│   │   ├── RenderPipeline.cpp
│   │   ├── RenderPipeline.h
│   │   └── Systems/
│   │       ├── RenderSystem.cpp
│   │       ├── RenderSystem.h
│   │       ├── CameraSystem.cpp
│   │       ├── CameraSystem.h
│   │       └── LightingSystem.cpp
│   │       └── LightingSystem.h
│   │
│   ├── MetalAbstractionLayer/
│   │   ├── CommandEncoder.cpp
│   │   ├── CommandEncoder.h
│   │   ├── ResourceBinder.cpp
│   │   ├── ResourceBinder.h
│   │   ├── SynchronizationManager.cpp
│   │   ├── SynchronizationManager.h
│   │   └── Shaders/
│   │       ├── VertexShader.metal
│   │       ├── FragmentShader.metal
│   │       └── ComputeShader.metal
│   │
│   ├── PlatformLayer/
│   │   ├── WindowManager.cpp
│   │   ├── WindowManager.h
│   │   ├── InputHandler.cpp
│   │   ├── InputHandler.h
│   │   └── DeviceManager.cpp
│   │   └── DeviceManager.h
│   │
│   └── Utils/
│       ├── Math/
│       │   ├── Vector.cpp
│       │   ├── Vector.h
│       │   ├── Matrix.cpp
│       │   ├── Matrix.h
│       │   └── Quaternion.cpp
│       │   └── Quaternion.h
│       │
│       ├── Extensions/
│       │   ├── MetalExtensions.h
│       │   └── SwiftExtensions.h
│       │
│       └── Helpers/
│           ├── FileLoader.cpp
│           ├── FileLoader.h
│           └── Logger.cpp
│           └── Logger.h
│
├── assets/
│   ├── textures/
│   │   ├── texture1.png
│   │   └── texture2.png
│   │
│   ├── models/
│   │   ├── model1.obj
│   │   └── model2.obj
│   │
│   └── shaders/
│       ├── vertex_shader.metal
│       └── fragment_shader.metal
│
├── resources/
│   ├── fonts/
│   │   ├── font1.ttf
│   │   └── font2.ttf
│   │
│   ├── sounds/
│   │   ├── sound1.wav
│   │   └── sound2.wav
│   │
│   └── config/
│       ├── settings.json
│       └── keybindings.json
│
├── docs/
│   ├── design/
│   │   ├── architecture.md
│   │   └── components.md
│   │
│   └── usage/
│       ├── getting_started.md
│       └── api_reference.md
│
├── tests/
│   ├── ApplicationLayerTests/
│   │   ├── UIManagerTests.cpp
│   │   └── UIManagerTests.h
│   │
│   ├── ECSTests/
│   │   ├── EntityTests.cpp
│   │   └── EntityTests.h
│   │
│   ├── RenderingEngineTests/
│   │   ├── SceneManagerTests.cpp
│   │   └── SceneManagerTests.h
│   │
│   ├── MetalAbstractionLayerTests/
│   │   ├── CommandEncoderTests.cpp
│   │   └── CommandEncoderTests.h
│   │
│   └── PlatformLayerTests/
│       ├── WindowManagerTests.cpp
│       └── WindowManagerTests.h
│
├── scripts/
│   ├── build.sh
│   ├── run.sh
│   └── clean.sh
│
├── CMakeLists.txt
├── README.md
├── LICENSE
└── Makefile
```