/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 18:55:59 by oezzaou           #+#    #+#             */
/*   Updated: 2023/08/23 13:30:15 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

//=== Default Constructor ======================================================
ClapTrap::ClapTrap() : hitPts(10), energyPts(10), damagePts(0)
{
	std::cout << "Default Constructor Called" << std::endl;
}

//=== Constructor 1 ============================================================
ClapTrap::ClapTrap(std::string name) : hitPts(10), energyPts(10), damagePts(0)
{
	std::cout << "ClapTrap Constructor Called" << std::endl;
	this->name = name;
}

//=== Copy Constructor =========================================================
ClapTrap::ClapTrap(const ClapTrap& clapTrap)
{
	std::cout << "Copy Constructor Called" << std::endl;
	(*this) = clapTrap;
}

//=== Default Destructor =======================================================
ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor Called" << std::endl;
}

//=== Copy Assignment operator =================================================
ClapTrap&	ClapTrap::operator=(const ClapTrap clapTrap)
{
	name = clapTrap.name;
	hitPts = clapTrap.hitPts;
	energyPts = clapTrap.energyPts;
	damagePts = clapTrap.damagePts;
	return (*this);
}

//=== getName ==================================================================
std::string	ClapTrap::getName(void) const
{
	return (name);
}

//=== getHitPts ================================================================
int	ClapTrap::getHitPts(void) const
{
	return (hitPts);
}

//=== getEnergyPts =============================================================
int	ClapTrap::getEnergyPts(void) const
{
	return (energyPts);
}

//=== getDamagePts =============================================================
int	ClapTrap::getDamagePts(void) const
{
	return (damagePts);
}

//=== setName ==================================================================
void	ClapTrap::setName(std::string name)
{
	this->name = name;
}

//=== setHitPts ================================================================
void	ClapTrap::setHitPts(int hitPts)
{
	this->hitPts = hitPts;
}

//=== setEnergyPts =============================================================
void	ClapTrap::setEnergyPts(int energyPts)
{
	this->energyPts = energyPts;
}

//=== setEnergyPts =============================================================
void	ClapTrap::setDamagePts(int damagePts)
{
	this->damagePts = damagePts;
}

//=== attack ===================================================================
void	ClapTrap::attack(const std::string& target)
{
	if (hitPts > 0 && energyPts > 0)
	{
		std::cout << name << " attacks " << target << " causing " << damagePts << std::endl;
		energyPts--;
	}
}

//=== takeDamage ===============================================================
void	ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPts > 0)
	{
		std::cout << name << " taking " << amount << " points of damage\n";
		hitPts -= amount;
	}
}

//=== beRepaired ===============================================================
void	ClapTrap::beRepaired(unsigned int amount)
{
	if (hitPts > 0 && energyPts > 0)
	{
		std::cout << name << " gets " << amount << " hit points back" << std::endl;
		hitPts += amount;
		energyPts--;
	}
}
