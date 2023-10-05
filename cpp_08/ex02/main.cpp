/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 12:21:12 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/29 12:42:26 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.h"
#include <algorithm>

void testMStr(void)
{
    std::cout << std::endl << "tests by MutantStack<string>:\n";
    std::cout << "------------------------------\n";
    
    MutantStack<std::string> mstack;
    
    mstack.push("5"); 
    mstack.push("17");
    
    std::cout << mstack.top() << std::endl; 
    
    mstack.pop();

    std::cout << mstack.size() << std::endl;
    
    mstack.push("3"); 
    mstack.push("5"); 
    mstack.push("737"); 
    mstack.push("0");

    MutantStack<std::string>::iterator it = mstack.begin();
    MutantStack<std::string>::iterator ite = mstack.end();
    
    if (std::find(it, ite, "5") != ite)
        std::cout << "found element." << std::endl;
    
    std::sort(it, ite);
    
    ++it;
    --it;
    while (it != ite) 
    {
        std::cout << *it << std::endl;
        ++it; 
    }
    
    std::cout << std::endl << "tests by std::deque<string>:\n";
    std::cout << "-----------------------------\n";
    
    std::deque<std::string> deque;
    
    deque.push_back("5"); 
    deque.push_back("17");
    
    std::cout << *(--deque.end()) << std::endl; 
    
    deque.pop_back();

    std::cout << deque.size() << std::endl;
    
    deque.push_back("3"); 
    deque.push_back("5"); 
    deque.push_back("737"); 
    deque.push_back("0");
    
    std::deque<std::string>::iterator it2 = deque.begin();
    std::deque<std::string>::iterator ite2 = deque.end();
    
    if (std::find(it2, ite2, "5") != ite)
        std::cout << "found element." << std::endl;

    std::sort(it2, ite2);
    
    ++it2;
    --it2;
    while (it2 != ite2) 
    {
        std::cout << *it2 << std::endl;
        ++it2; 
    }
}


void testMInt(void)
{
    std::cout << std::endl << "tests by MutantStack<int>:\n";
    std::cout << "---------------------------\n";
    
    MutantStack<int> mstack;
    
    mstack.push(5); 
    mstack.push(17);
    
    std::cout << mstack.top() << std::endl; 
    
    mstack.pop();

    std::cout << mstack.size() << std::endl;
    
    mstack.push(3); 
    mstack.push(5); 
    mstack.push(737); 
    mstack.push(0);
    
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    
    if (std::find(it, ite, 5) != ite)
        std::cout << "found element." << std::endl;
    
    std::sort(it, ite);
    
    ++it;
    --it;
    while (it != ite) 
    {
        std::cout << *it << std::endl;
        ++it; 
    }
    
    std::cout << std::endl << "tests by std::deque<int>:\n";
    std::cout << "--------------------------\n";
    
    std::deque<int> deque;
    
    deque.push_back(5); 
    deque.push_back(17);
    
    std::cout << *(--deque.end()) << std::endl; 
    
    deque.pop_back();

    std::cout << deque.size() << std::endl;
    
    deque.push_back(3); 
    deque.push_back(5); 
    deque.push_back(737); 
    deque.push_back(0);
    
    std::deque<int>::iterator it2 = deque.begin();
    std::deque<int>::iterator ite2 = deque.end();
    
    if (std::find(it2, ite2, 5) != ite)
        std::cout << "found element." << std::endl;

    std::sort(it2, ite2);
    
    ++it2;
    --it2;
    while (it2 != ite2) 
    {
        std::cout << *it2 << std::endl;
        ++it2; 
    }
}

int main()
{
    testMInt();
    testMStr();
    return 0;
}
