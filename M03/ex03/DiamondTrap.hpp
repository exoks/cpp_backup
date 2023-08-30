/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 15:37:28 by oezzaou           #+#    #+#             */
/*   Updated: 2023/08/23 19:18:42 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class	DiamondTrap :public FragTrap, ScavTrap
{
	private:
		std::string name;

	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap& diamondTrap);
		DiamondTrap&	operator=(const DiamondTrap& diamondTrap);
		~DiamondTrap();
		void	whoAmI(void);
};

#endif
