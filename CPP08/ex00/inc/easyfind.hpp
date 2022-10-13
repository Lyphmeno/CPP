#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <list>

template <typename T>
typename T::const_iterator easyfind(const T &container, int num);

#include "easyfind.tpp"