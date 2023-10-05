/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 16:26:00 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/25 13:28:22 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Classes.h"

Base * generate(void)
{
    int index = std::rand() % 3;
    switch (index)
    {
        case 0:
            return (static_cast<Base*>(new A()));
        case 1:
            return (static_cast<Base*>(new B()));
        case 2:
            return (static_cast<Base*>(new C()));     
        default:
             return(nullptr);
     }
}

void identify(Base* p)
{
    std::cout << "p point to object type: ";
    if (dynamic_cast<A*>(p))
        std::cout << "A\n";
    else if (dynamic_cast<B*>(p))
        std::cout << "B\n";
    else if (dynamic_cast<C*>(p))
        std::cout << "C\n";
}

void identify(Base& p)
{
    std::cout << "p is a reference to object type: ";
    try {
        (void)dynamic_cast<A&>(p);
        std::cout << "A\n";
        return ;
    }
    catch (const std::bad_cast& e){}
    try {
        (void)dynamic_cast<B&>(p);
        std::cout << "B\n";
        return ;
    }
    catch (const std::bad_cast& e){}
    try {
        (void)dynamic_cast<C&>(p);
        std::cout << "C\n";
        return ;
    }
    catch (const std::bad_cast& e){}
}

int main(void)
{
    std::srand(time(0));
    for(size_t i = 0; i < 5; i++)
	{
		Base *base = generate();
		identify(base);
		identify(*base);
        std::cout << std::endl;
	}
}