#pragma once 

template<typename T>
using SPtr = std::shared_ptr<T>;
template<typename T, typename ... Args>
constexpr SPtr<T> CreateSPtr(Args&& ... args) 
{
    return std::make_shared<T>(std::forward<Args>(args)...);
}
