/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:16:30 by oezzaou           #+#    #+#             */
/*   Updated: 2023/08/30 13:33:43 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef __ANIMAL_HPP__
# define __ANIMAL_HPP__
# include <iostream>

class	Animal
{
	protected:
		std::string type;
	
	public:
		Animal();
		Animal(const Animal& animal);
		Animal(std::string type);
		Animal&		operator=(const Animal& animal);
		std::string	getType(void) const;
		void		setType(std::string type);
		~Animal();
};

#endif
