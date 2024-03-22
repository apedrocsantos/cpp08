/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 18:25:44 by anda-cun          #+#    #+#             */
/*   Updated: 2024/03/22 21:46:34 by anda-cun         ###   ########.fr       */
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
    unsigned int getN() const;
    void print();
    int getSize() const;
    
    public:
    
    Span(int N);
    Span(const Span& that);
    Span &operator=(const Span& that);
    ~Span() {};
    int shortestSpan();
    int longestSpan();
    void addNumber(int nb);
    void addRange(int start, int end);
};

#endif