/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 18:56:29 by oezzaou           #+#    #+#             */
/*   Updated: 2023/08/23 13:27:02 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class	ClapTrap
{
	private:
		std::string	name;
		int			hitPts;
		int			energyPts;
		int			damagePts;

	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& clapTrap);
		~ClapTrap();
		std::string		getName(void) const;
		int				getHitPts(void) const;
		int				getEnergyPts(void) const;
		int				getDamagePts(void) const;
		void			setName(std::string name);
		void			setHitPts(int hitPts);
		void			setEnergyPts(int energyPts);
		void			setDamagePts(int damagePts);
		ClapTrap&		operator=(const ClapTrap clapTrap);
		void			attack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
};

#endif
