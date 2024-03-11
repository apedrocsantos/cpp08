/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 18:25:44 by anda-cun          #+#    #+#             */
/*   Updated: 2024/03/08 18:54:06 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <list>
#include <iostream>

class Span
{
    unsigned int const _N;
    std::vector<int> _vector;
    std::vector<int>::iterator _cur;
    Span();
    
    public:
    
    Span(int N);
    Span(const Span& that);
    Span &operator=(const Span& that);
    ~Span() {};
    unsigned int getN() const;
    void addNumber(int nb);
    int shortestSpan();
    int longestSpan();
    void addRange(int start, int end);
    void print();
    int getSize() const;
};

#endif