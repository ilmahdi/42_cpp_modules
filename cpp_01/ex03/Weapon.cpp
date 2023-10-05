/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 11:54:09 by eabdelha          #+#    #+#             */
/*   Updated: 2022/07/25 11:00:42 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.h"

Weapon::Weapon(std::string type) : type(type){};

Weapon::~Weapon(){};

const std::string &Weapon::getType() const
{
    return (type);
}

void Weapon::setType(const std::string &type)
{
    this->type = type;
}