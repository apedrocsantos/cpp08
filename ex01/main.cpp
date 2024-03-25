/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 18:57:50 by anda-cun          #+#    #+#             */
/*   Updated: 2024/03/25 10:45:49 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    Span a(1);
    try
    {
        a.addNumber(1);
        std::cout << a.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        try
        {
            std::cerr << e.what() << '\n';
            std::cout << a.shortestSpan() << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        
    }
    
    Span c(200000);
    try
    {
        c.addNumber(1);
        c.addNumber(12);
        c.addNumber(13);
        c.addNumber(-10);
        c.addNumber(-11);
        c.addRange(1000,100000);
        c.addRange(100000000,100099999);
        std::cout << c.longestSpan() << std::endl;
        std::cout << c.shortestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

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
