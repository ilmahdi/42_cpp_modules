/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 11:19:16 by eabdelha          #+#    #+#             */
/*   Updated: 2022/07/26 09:09:20 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

int main(void)
{
    Harl comp;

    comp.complain("DEBUG");
    comp.complain("INFO");
    comp.complain("WARNING");
    comp.complain("ERROR");
    comp.complain("DEBUG");
    return (0);
}