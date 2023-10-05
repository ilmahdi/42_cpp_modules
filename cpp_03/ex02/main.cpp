/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 17:13:17 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/21 15:34:00 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"
#include "ScavTrap.h"
#include "FragTrap.h"

int main(void) 
{
	FragTrap thor("thor");
	FragTrap odin(thor);
	FragTrap zoll;


	zoll.setName("zoll");
	odin.setName("odin");
	zoll.highFivesGuys();

	zoll.setEnergy(0);
	zoll.attack("thor");
	zoll.beRepaired(2);

	odin.attack("thor");
	thor.takeDamage(odin.getAttDamage());

	odin.setAttDamage(40);
	odin.attack("thor");
	thor.takeDamage(odin.getAttDamage());
	odin.attack("thor");
	thor.takeDamage(odin.getAttDamage());
	odin.attack("thor");
	thor.takeDamage(odin.getAttDamage());
	
	thor.beRepaired(2);

	return 0;
}