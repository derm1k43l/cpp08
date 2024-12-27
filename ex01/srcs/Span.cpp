#include "Span.hpp"
#include <iostream>
#include <limits>
#include <exception>
#include <stdexcept> // i define my own exception wihtout creating a new class

Span::Span(unsigned int n) : n_(n)
{
    if (n_ <= 0)
        throw std::runtime_error("Span must be greater than 0.");
}

Span::Span(Span const& other) : n_(other.n_), elements_(other.elements_)
{
}

Span& Span::operator=(Span const& other)
{
    if (this != &other)
    {
        n_ = other.n_;
        elements_ = other.elements_;
    }
    return *this;
}

// better and more efficient way deal wiht default destructor
Span::~Span() = default;

void Span::addNumber(int n)
{
    if (elements_.size() >= n_)
        throw std::runtime_error("Span is full.");
    elements_.push_back(n);
}

int Span::shortestSpan()
{
    if (elements_.size() <= 1)
        throw std::runtime_error("Not enough elements to calculate span.");

    std::vector<int> sorted = elements_;
    std::sort(sorted.begin(), sorted.end());

    int min = std::numeric_limits<int>::max();
    for (size_t i = 1; i < sorted.size(); i++)
    {
        int diff = sorted[i] - sorted[i - 1];
        if (diff < min)
            min = diff;
    }
    return min;
}

int Span::longestSpan()
{
    if (elements_.size() <= 1)
        throw std::runtime_error("Not enough elements to calculate span.");

    int min = *std::min_element(elements_.begin(), elements_.end());
    int max = *std::max_element(elements_.begin(), elements_.end());
    return max - min;
}
