/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 17:13:17 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/21 15:19:00 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

int main(void) 
{
	ClapTrap thor("thor");
	ClapTrap odin("odin");
	ClapTrap zoll("zoll");

	odin.setAttDamage(4);
	thor.setAttDamage(3);
	zoll.setEnergy(0);

	zoll.attack(odin.getName());
	zoll.beRepaired(2);

	odin.attack("thor");
	thor.takeDamage(odin.getAttDamage());
	odin.attack("thor");
	thor.takeDamage(odin.getAttDamage());
	odin.attack("thor");
	thor.takeDamage(odin.getAttDamage());
	odin.attack("thor");
	thor.takeDamage(odin.getAttDamage());
	
	thor.beRepaired(2);

	return 0;
}