/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 15:42:42 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/25 10:24:35 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.h"


uintptr_t serialize(Data* ptr)
{
    return(reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
    return(reinterpret_cast<Data*>(raw));
}

int main(void)
{
    Data num;
    Data *num_ptr;
    
    num.content = 1337;
    std::cout << "before serialize:" << std::endl;
    std::cout << "  " << &num << std::endl;
    std::cout << "  " << num.content << std::endl;
    
    uintptr_t raw = serialize(&num);
    num_ptr = deserialize(raw);
    std::cout << std::endl;
    
    std::cout << "after deserialize:" << std::endl;
    std::cout << "  " << num_ptr << std::endl;
    std::cout << "  " << num_ptr->content << std::endl;
    return (0);       
}