/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 15:31:24 by oezzaou           #+#    #+#             */
/*   Updated: 2023/08/16 13:41:42 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class	Fixed
{
	private:
		int					fixedPointNbr;
		static const int	fracBits;

	public:
		Fixed();
		Fixed(int const intNbr);
		Fixed(float const floatPointNbr);
		~Fixed();
		Fixed(const Fixed& fixed);
		Fixed&	operator=(const Fixed& fixed);
		bool	operator>(const Fixed& fixed);
		bool	operator<(const Fixed& fixed);
		bool	operator<=(const Fixed& fixed);
		bool	operator>=(const Fixed& fixed);
		bool	operator==(const Fixed& fixed);
		bool	operator!=(const Fixed& fixed);
		Fixed	operator+(const Fixed& fixed);
		Fixed	operator-(const Fixed& fixed);
		Fixed	operator*(const Fixed& fixed);
		Fixed	operator/(const Fixed& fixed);
		Fixed&	operator++(void);
		Fixed	operator++(int);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		int		toInt(void) const;
		float	toFloat(void) const;
		static	Fixed& min(Fixed& f1, Fixed& f2);
		static	Fixed& min(const Fixed& f1, const Fixed& f2);
		static 	Fixed& max(Fixed& f1, Fixed& f2);
		static	Fixed& max(const Fixed& f1, const Fixed& f2);
		friend	std::ostream&	operator << (std::ostream& output, const Fixed& fixed);
};

#endif
