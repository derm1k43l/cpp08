#include "easyfind.hpp"
#include <list>
#include <iostream>
#include <vector>

int main(void)
{
    std::list<int> intList = {1, 2, 3, 4, 5};
    std::vector<int> vectorList = {6, 7, 8, 9, 10};
    std::list<char> charList = {'a', 'b', 'c', 'd', 'e'};

    // need other template
    // std::list<std::string> stringList = {"one", "two", "three", "four", "five"};
    // std::vector<float> floatList = {1.1, 2.2, 3.3, 4.4, 5.5};
    try
    {
        std::cout << easyfind(intList, 4) << std::endl;
        std::cout << easyfind(intList, 10) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Value not found" << std::endl;
    }
    try
    {
        std::cout << easyfind(vectorList, 7) << std::endl;
        std::cout << easyfind(vectorList, 15) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Value not found" << std::endl;
    }
    try
    {
        std::cout << easyfind(charList, 'c') << std::endl;
        std::cout << easyfind(charList, 'z') << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Value not found" << std::endl;
    }

    // need other template
    // try
    // {
    //     std::cout << easyfind(stringList, std::string("three")) << std::endl;
    //     std::cout << easyfind(stringList, std::string("ten")) << std::endl;
    // }
    // catch (std::exception &e)
    // {
    //     std::cout << "Value not found" << std::endl;
    // }
    // try
    // {
    //     std::cout << easyfind(floatList, 3.3f) << std::endl;
    //     std::cout << easyfind(floatList, 6.6f) << std::endl;
    // }
    // catch (std::exception &e)
    // {
    //     std::cout << "Value not found" << std::endl;
    // }
    return 0;
}