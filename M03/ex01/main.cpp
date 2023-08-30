/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 19:03:06 by oezzaou           #+#    #+#             */
/*   Updated: 2023/08/23 13:11:22 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include "ScavTrap.hpp"

//=== main function ============================================================
int	main(void)
{
	ScavTrap	scavTrap("ScavTrap");

	scavTrap.attack("ClapTrap");
	scavTrap.takeDamage(5);
	scavTrap.beRepaired(20);
	scavTrap.guardGate();
	return (EXIT_SUCCESS);
}
