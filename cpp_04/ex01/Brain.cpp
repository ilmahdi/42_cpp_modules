/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 20:02:18 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/22 15:08:39 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.h"

Brain::Brain()
{
    std::cout << "Brain" << " default constructor called." << std::endl;
    ideas = new std::string[100];
    for (size_t i = 0; i < 100; i++)
        ideas[i] = "This is idea number: " + std::to_string(i + 1);
}

Brain::Brain(const Brain &brain)
{
    if (this == &brain)
        return;
    ideas = new std::string[100];
    for (size_t i = 0; i < 100; i++)
        ideas[i] = brain.ideas[i] + ", from the brain of others!";;
}

Brain &Brain::operator = (const Brain &brain)
{
    if (this == &brain)
        return (*this);
    std::string *ideasHol;
    ideasHol = ideas;
    ideas = new std::string[100];
    for (size_t i = 0; i < 100; i++)
        ideas[i] = brain.ideas[i] + ", from the brain of others!";
    delete [] ideasHol;
    return (*this);
}

std::string * Brain::getIdeas(void)
{
    return (ideas);
}

Brain::~Brain()
{
    std::cout << "Brain" << " default destructor called." << std::endl;
    delete [] ideas;
    ideas = NULL;
}
