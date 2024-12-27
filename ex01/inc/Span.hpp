#pragma once
#include <vector>
#include <limits>
#include <exception>
#include <algorithm>
#include <stdexcept>

class Span
{
    public:
        Span() = delete;
        Span(unsigned int n);
        Span(Span const& other);
        Span& operator=(Span const& other);
        ~Span();

        void addNumber(int n);
        int shortestSpan();
        int longestSpan();

        // templeate implementation must be in the header file
        // because the compiler needs to know the implementation at compile time
        // 1 solution would be to use a .tpp file but its just mater of preference atp.

        template <typename InputIterator>
        void addNumber(InputIterator begin, InputIterator end)
        {
            if (elements_.size() + std::distance(begin, end) > n_)
                throw std::runtime_error("Span is full.");
            elements_.insert(elements_.end(), begin, end);
        }

        template <typename InputIterator>
        void addRange(InputIterator start, InputIterator end)
        {
            if (start > end)
                throw std::runtime_error("Invalid range");
            
            int rangeSize = end - start + 1;
            if (elements_.size() + rangeSize > n_)
                throw std::runtime_error("Span is full.");

            for (int i = start; i <= end; i++)
                elements_.push_back(i);
        }

    private:
        unsigned int n_;
        std::vector<int> elements_;
};
