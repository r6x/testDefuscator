#pragma once
#include <string>
#include <iostream>
#include <iterator>
#include <algorithm>

template<std::size_t SIZE> constexpr auto encoder(const char str[SIZE]);
template<typename T, std::size_t N> constexpr std::size_t getSize(const T(&)[N]);

