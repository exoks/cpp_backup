/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 13:46:26 by oezzaou           #+#    #+#             */
/*   Updated: 2023/08/23 19:41:10 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

//=== FragTrap Default Constructor =============================================
FragTrap::FragTrap()
{
	std::cout << "FragTrap Default Constructor Called" << std::endl;
	setHitPts(100);
	setEnergyPts(100);
	setDamagePts(30);
}

//=== FragTrap Constructor =====================================================
FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap Constructor Called" << std::endl;
	setHitPts(100);
	setEnergyPts(100);
	setDamagePts(30);
}

//=== FragTrap Copy Constructor ================================================
FragTrap::FragTrap(const FragTrap& fragTrap)
{
	(*this) = fragTrap;
}

//=== FragTrap Copy Assignment Operator ========================================
FragTrap&	FragTrap::operator=(const FragTrap& fragTrap)
{
	setName(fragTrap.getName());
	setHitPts(fragTrap.getHitPts());
	setEnergyPts(fragTrap.getEnergyPts());
	setDamagePts(fragTrap.getDamagePts());
	return (*this);
}

//=== FragTrap Destructor ======================================================
FragTrap::~FragTrap()
{
	std::cout << "FragTrap Constructor Called" << std::endl;
}

//=== highFivesGuys ============================================================
void	FragTrap::highFivesGuys(void)
{
	std::cout << getName() << " Highfive Guys" << std::endl;
}
