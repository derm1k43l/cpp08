#include <MutantStack.hpp>
#include <stack>
#include <iostream>
#include <deque>
#include <list>

int main()
{
    std::cout << "=============SUBJECT=============" << std::endl;
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);               
    mstack.push(5);
    mstack.push(737);            
    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    std::cout << "size: "<< mstack.size() << ". begin to end: " << std::endl;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);


    std::cout << "=============LIST=============" << std::endl;
    std::list<int> mlist;
    mlist.push_back(5);
    mlist.push_back(17);
    // back returns a reference to the last element and we print it
    std::cout << mlist.back() << std::endl;
    // pop_back removes the last element (17)
    mlist.pop_back();
    std::cout << mlist.size() << std::endl;
    mlist.push_back(3);
    mlist.push_back(5);
    mlist.push_back(737);
    mlist.push_back(0); // 5 3 5 737 0

    // iterators are used to iterate through the list
    std::list<int>::iterator lit = mlist.begin();
    std::list<int>::iterator lite = mlist.end();
    // test increment and decrement. 
    ++lit;
    --lit;
    // go through the list and print each element
    while (lit != lite)
    {
        std::cout << *lit << std::endl;
        ++lit;
    }



    std::cout << "=============FLOAT=============" << std::endl;
    MutantStack<float> mstack2;
    mstack2.push(5.5);
    mstack2.push(17.5);
    std::cout << mstack2.top() << std::endl;
    mstack2.pop();
    std::cout << mstack2.size() << std::endl;
    mstack2.push(3.5);
    mstack2.push(5.5);

    MutantStack<float>::iterator it2 = mstack2.begin();
    MutantStack<float>::iterator ite2 = mstack2.end();
    ++it2;
    --it2;
    while (it2 != ite2)
    {
        std::cout << *it2 << std::endl;
        ++it2;
    }
    std::stack<float> s2(mstack2);
    return 0;
}
