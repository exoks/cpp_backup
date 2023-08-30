/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 19:03:06 by oezzaou           #+#    #+#             */
/*   Updated: 2023/08/23 19:37:24 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include "DiamondTrap.hpp"

//=== main function ============================================================
int	main(void)
{
	DiamondTrap	d("oussama");

	d.whoAmI();
//	std::cout << "Name : " << d.getName() << std::endl;
//	std::cout << "HitPts : " << d.getHitPts() << std::endl;
//	std::cout << "EnergyPts : " << d.getEnergyPts() << std::endl;
//	std::cout << "DamagePts : " << d.getDamagePts() << std::endl;
	return (EXIT_SUCCESS);
}
