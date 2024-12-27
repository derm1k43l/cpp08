#include "Span.hpp"
#include <iostream>

int ultraRandomInizator()
{
    // this bad boy will generate a random number between 0 and 10004
    return rand() % 10005;
}

int main()
{
    srand(time(nullptr));

    std::cout << "======= Test 1 Small range  =======" << std::endl;
    try
    {
        Span s(10);
        s.addNumber(5);
        s.addNumber(3);
        s.addNumber(17);

        std::cout << "Shortest Span: " << s.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << s.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Lucky exception will not be thrown overboard." << std::endl;
    }
    std::cout << "======= Test 2 Large range =======" << std::endl;
    try
    {
        Span ss(10000);
        for (int i = 0; i < 42; i++) // basically add 42 random numbers so span changes every time
            ss.addNumber(ultraRandomInizator());
        std::cout << "Shortest Span: " << ss.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << ss.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Lucky exception will not be thrown overboard." << std::endl;
    }
    std::cout << "======= Test 3 Error ouside range =======" << std::endl;
    try
    {
        Span sss(5);
        sss.addRange(1, 6); // will throw an exception here
        std::cout << "Shortest Span: " << sss.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << sss.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception : " << e.what() << std::endl;
    }
    std::cout << "======= Test 4 cant print cuz 1 element =======" << std::endl;
    try
    {
        Span ssss(5);
        ssss.addRange(6, 1); // will throw an exception here
        std::cout << "Shortest Span: " << ssss.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << ssss.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception : " << e.what() << std::endl;
    }
    return 0;
}


// // subject main
// int main()
// {
//     Span sp = Span(5);
//     sp.addNumber(6);
//     sp.addNumber(3);
//     sp.addNumber(17);
//     sp.addNumber(9);
//     sp.addNumber(11);
//     std::cout << sp.shortestSpan() << std::endl;
//     std::cout << sp.longestSpan() << std::endl;
//     return 0;
// }

// // shuold output:
// // 2
// // 14