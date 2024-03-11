/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 22:18:45 by anda-cun          #+#    #+#             */
/*   Updated: 2024/03/07 18:24:33 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>

template <typename T>
void easyfind(T lhs, int tofind)
{
    find(lhs.begin(), lhs.end(), tofind) == lhs.end() ? throw(std::runtime_error("Number not found.")) : std::cout << "Ya\n";
}

#endif