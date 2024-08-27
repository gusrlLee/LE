#pragma once 


#include <iostream>
#include <memory>
#include <vulkan/vulkan.h>

template<typename T>
using SPtr = std::shared_ptr<T>;
template<typename T, typename ... Args>
constexpr SPtr<T> CreateSPtr(Args&& ... args) 
{
    return std::make_shared<T>(std::forward<Args>(args)...);
}

#define VK_CHECK(x)                                                     \
    do {                                                                \
        VkResult err = x;                                               \
        if (err) {                                                      \
            throw std::runtime_error("[VULKAN] Detected Vulkan error : " + std::to_string(err));\
        }                                                               \
    } while (0)
