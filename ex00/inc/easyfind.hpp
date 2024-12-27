#pragma once
#include <algorithm> // std::find
#include <iterator> // std::iterator


template <typename T>
int easyfind(T &container, int value)
{
    typename T::iterator it = std::find(container.begin(), container.end(), value);
    if (it == container.end())
        throw std::exception();
    return *it;
}

// very extra. This will work with any type of container and value
// the auto keyword will deduce the return type
// the typename keyword is used to tell the compiler that the iterator is a type
// the U type is used to tell the compiler that the value is a type

// template <typename T, typename U>
// auto easyfind(T &container, const U& value)
// {
//     typename T::iterator it = std::find(container.begin(), container.end(), value);
//     if (it == container.end())
//         throw std::exception();
//     return *it;
// }
