/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 19:03:06 by oezzaou           #+#    #+#             */
/*   Updated: 2023/08/23 14:01:04 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

//=== main function ============================================================
int	main(void)
{
	ScavTrap	scavTrap("ScavTrap");
	FragTrap	fragTrap("FragTrap");

	scavTrap.attack("FragTrap");
	scavTrap.takeDamage(5);
	scavTrap.beRepaired(20);
	scavTrap.guardGate();

	fragTrap.attack("ScavTrap");
	fragTrap.takeDamage(20);
	fragTrap.beRepaired(30);
	fragTrap.highFivesGuys();
	return (EXIT_SUCCESS);
}
