/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 22:26:41 by anda-cun          #+#    #+#             */
/*   Updated: 2024/03/06 22:30:04 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    std::list<int> list1;

    list1.push_back(1); // Adds to list
    list1.push_back(30);

    easyfind(list1, 1);
}