/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 17:33:01 by oezzaou           #+#    #+#             */
/*   Updated: 2023/08/23 19:24:54 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef SCRAVTRAP_HPP
# define SCRAVTRAP_HPP
# include "ClapTrap.hpp"

class	ScavTrap: virtual public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& scavTrap);
		ScavTrap&	operator=(const ScavTrap& scavTrap);
		~ScavTrap();
		void	guardGate();
};

#endif
