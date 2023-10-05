/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 12:14:20 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/29 12:37:17 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H
#define MUTANTSTACK_H

# include <iostream>
# include <string>
# include <stack>
# include <deque>

template<typename T> class MutantStack : public std::stack<T, std::deque<T> >
{
    public:
        typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

        MutantStack() {};
        MutantStack(const MutantStack<T> &ref) { (void)ref; };
        MutantStack<T> &operator = (const MutantStack<T> &ref) {
            (void)ref;
            return (*this);
        }
        iterator begin() { return this->c.begin(); }
        iterator end() { return this->c.end(); }
        
        reverse_iterator rbegin() { return this->c.rbegin(); }
        reverse_iterator rend() { return this->c.rend(); }
        
        const_iterator begin() const { return this->c.begin(); }
        const_iterator end() const { return this->c.end(); }
        
        const_reverse_iterator rbegin() const { return this->c.rbegin(); }
        const_reverse_iterator rend() const { return this->c.rend(); }
        ~MutantStack() {};
};


#endif
