/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 19:03:06 by oezzaou           #+#    #+#             */
/*   Updated: 2023/08/23 11:51:01 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include "ClapTrap.hpp"

//=== main function ============================================================
int	main(void)
{
	ClapTrap	c("oussama");

	c.attack("ClapTrap");
	c.takeDamage(5);
	c.beRepaired(30);
	return (EXIT_SUCCESS);
}
