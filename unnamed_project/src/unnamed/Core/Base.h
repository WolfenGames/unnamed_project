#pragma once

#include <memory>

#define BIT(x) 1 << x

#define UP_BIND_EVENT_FN(fn) [this](auto&&... args) -> decltype(auto) { return this->fn(std::forward<decltype(args)>(args)...); }