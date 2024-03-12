/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 11:57:29 by anda-cun          #+#    #+#             */
/*   Updated: 2024/03/11 11:58:38 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>
#include <vector>

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    std::cout << "Stack begin\n";
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::cout << "Stack end\n";
    std::stack<int> s(mstack);

    MutantStack<int> temp;
    temp.push(19);
    temp.push(19);
    temp.push(19);
    temp.push(19);
    temp.push(19);
    temp.push(19);
    temp.push(19);
    temp.push(19);
    temp.push(19);
    temp.push(19);
    temp.push(19);
    temp.push(19);

    for (it = temp.begin(); it != temp.end(); it++)
        std::cout << *it << std::endl;
    temp = mstack;
    std::cout << "Stack begin\n";
    for (it = temp.begin(); it != temp.end(); it++)
        std::cout << *it << std::endl;
    
    std::cout << "Temp is empty? " << temp.empty() << std::endl;
    temp.clear();
    std::cout << "Temp is empty? " << temp.empty() << std::endl;
    
    // std::cout << "\n============== list ===============\n";
    // std::list<int> mstack2;
    // mstack2.push_back(5);
    // mstack2.push_back(17);
    // std::cout << mstack2.back() << std::endl;
    // mstack2.pop_back();
    // std::cout << mstack2.size() << std::endl;
    // mstack2.push_back(3);
    // mstack2.push_back(5);
    // mstack2.push_back(737);
    // //[...]
    // mstack2.push_back(0);
    // std::list<int>::iterator it2 = mstack2.begin();
    // std::list<int>::iterator ite2 = mstack2.end();
    // ++it2;
    // --it2;
    // while (it2 != ite2)
    // {
    // std::cout << *it2 << std::endl;
    // ++it2;
    // }
    // std::list<int> s2(mstack2);
    return 0;
}