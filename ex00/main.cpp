/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 22:26:41 by anda-cun          #+#    #+#             */
/*   Updated: 2024/03/22 21:44:22 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>

int main()
{
    std::list<int> list1;

    list1.push_back(1); // Adds to list
    list1.push_back(2);
    list1.push_back(3);
    list1.push_back(10);
    list1.push_back(30);
    list1.push_back(-20);
    list1.push_back(6);

    try
    {
        easyfind(list1, 100);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}