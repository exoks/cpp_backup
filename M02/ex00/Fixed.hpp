/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 15:31:24 by oezzaou           #+#    #+#             */
/*   Updated: 2023/08/13 15:13:57 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class	Fixed
{
	private:
		int					fixedPointNbr;
		static const int	fracBits;

	public:
		Fixed();
		~Fixed();
		Fixed(Fixed &fixed);
		Fixed&	operator=(Fixed& fixed);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif
