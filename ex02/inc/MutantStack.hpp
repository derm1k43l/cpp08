#pragma once
#include <stack> // push, pop, top, size
#include <deque> // container_type

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack() : std::stack<T>() {}
        MutantStack(MutantStack const& other) : std::stack<T>(other) {}
        MutantStack& operator=(MutantStack const& other)
        {
            if (this != &other)
                std::stack<T>::operator=(other);
            return *this;
        }
        ~MutantStack() = default;

        typedef typename std::stack<T>::container_type::iterator iterator;
    
        // define iterator
        iterator begin()
        {
            return this->c.begin(); 
        }
        iterator end()
        { 
            return this->c.end();
        }
};