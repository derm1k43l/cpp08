#pragma once
#include <vector>
#include <limits>
#include <exception>
#include <algorithm>

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

        template <typename InputIterator>
        void addNumber(InputIterator begin, InputIterator end);
        void addRange(int start, int end);

    private:
        unsigned int n_;
        std::vector<int> elements_;
};

template <typename InputIterator>
void Span::addNumber(InputIterator begin, InputIterator end)
{
    if (elements_.size() + std::distance(begin, end) > n_)
        throw std::exception();
    elements_.insert(elements_.end(), begin, end);
}