/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 15:38:18 by oezzaou           #+#    #+#             */
/*   Updated: 2023/08/21 21:27:39 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//=== Static const int fracBits init ===========================================
const int	Fixed::fracBits = 8;

//=== Fixed Default Constructor ================================================
Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	fixedPointNbr = 0;
}

//=== Fixed Copy Constructor ===================================================
Fixed::Fixed(Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	operator=(fixed);
}

//=== Fixed Distructor =========================================================
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

//=== Fixed Copy Assignment Operator ===========================================
Fixed&	Fixed::operator=(Fixed& fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	fixedPointNbr = fixed.getRawBits();
	return (*this);
}

//=== getRawBits ===============================================================
int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (0);
}

//=== setRawBits ===============================================================
void	Fixed::setRawBits(int const raw)
{
	fixedPointNbr = raw;
}
