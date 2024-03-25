/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 18:25:44 by anda-cun          #+#    #+#             */
/*   Updated: 2024/03/25 10:44:32 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iostream>

class Span
{
    unsigned int const _N;
    std::vector<int> _vector;
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