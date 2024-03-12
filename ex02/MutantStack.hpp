/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 11:49:31 by anda-cun          #+#    #+#             */
/*   Updated: 2024/03/11 12:13:42 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Stack (Container adaptor) - https://en.cppreference.com/w/cpp/container/stack
By default, if no container class is specified for a particular stack class instantiation, the standard container std::deque is used.
*/

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <deque>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T, std::deque<T> >
{
    public:
    MutantStack() {};
    MutantStack(MutantStack &that) {*this = that;};
    MutantStack &operator=(MutantStack &that)
    {
        if (this != &that)
            this->c = std::deque<T>(that.c);
        return (*this);
    };
    ~MutantStack() {};
    void clear() {this->c.clear();};
    typedef typename std::stack<T>::container_type::iterator iterator;
    iterator begin() {return this->c.begin();};
    iterator end() {return this->c.end();};
    iterator rbegin() {return this->c.rbegin();};
    iterator rend() {return this->c.rend();};
};

#endif