/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:42:12 by oezzaou           #+#    #+#             */
/*   Updated: 2023/08/30 13:56:48 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Cat.hpp"

//==== Cat Default Constructor =================================================
Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat Default Constructor Called" << std::endl;
}

//==== Cat Copy Constructor ====================================================
Cat::Cat(const Cat& cat)
{
	*this = cat;
}

//==== Cat Copy Assignment Operator ============================================
Cat&	Cat::operator= (const Cat& cat)
{
	setType(cat.getType());
	return (*this);
}

//==== Cat Destructor ==========================================================
Cat::~Cat()
{
	std::cout << "Cat Destructor Called" << std::endl;
}
