/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 18:25:40 by anda-cun          #+#    #+#             */
/*   Updated: 2024/03/22 22:00:21 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <array>

Span::Span(int N) : _N(N)
{
    this->_cur = this->_vector.begin();
};

Span::Span(const Span& that) : _N(that.getN())
{
    this->_vector.resize(_N);
    *this = that;
};

Span &Span::operator=(const Span& that)
{
    if (this != &that)
        std::cout << "WTV\n";
    return (*this);
};

unsigned int Span::getN() const
{
    return this->_N;
}

void Span::addNumber(int nb)
{
    if (this->_vector.size() == this->_N)
        throw(std::out_of_range("Error: resulting array size would be larger than maximum size."));
    this->_vector.push_back(nb);
    this->_cur++;
}

int Span::shortestSpan()
{
    if (this->_vector.size() <= 1)
        throw(std::logic_error("Vector too small: can't calculate shortest span."));
    std::vector<int>::const_iterator it;
    std::vector<int> copy = this->_vector;
    sort(copy.begin(), copy.end());
    int s = *(copy.begin() + 1) - *(copy.begin());
    for (it = copy.begin(); it != copy.end() - 1; it++)
        if ((*(it + 1) - *it) < s)
            s = *(it + 1) - *it;
    return (s);
}

int Span::longestSpan()
{
    if (this->_vector.size() <= 1)
        throw(std::logic_error("Vector too small: can't calculate longest span."));
    std::vector<int> copy = this->_vector;
    sort(copy.begin(), copy.end());
    return (*(copy.end() - 1) - *copy.begin());
}

void Span::addRange(int start, int end)
{
    if (end < start)
        throw(std::out_of_range("Start must be >= end."));
    int size = end - start;
    if (this->_vector.size() + size > _N)
        throw(std::out_of_range("Error: resulting array size would be larger than maximum size."));
    std::vector<int> v(size);
    std::vector<int>::iterator it;
 
    for (it = v.begin(); it != v.end(); it++)
        *it = start++;
    this->_vector.insert(this->_vector.end(), v.begin(), v.end());
}

void Span::print()
{
    std::vector<int>::const_iterator it = this->_vector.begin();
    for (it = this->_vector.begin(); it != this->_vector.end(); it++)
        std::cout << *it << std::endl;
}

int Span::getSize() const
{
    return this->_vector.size();
}