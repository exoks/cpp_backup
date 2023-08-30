/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:23:26 by oezzaou           #+#    #+#             */
/*   Updated: 2023/08/30 13:58:48 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	Dog dog;
	Cat	cat;

	std::cout << dog.getType() << std::endl;
	std::cout << cat.getType() << std::endl;
	return (EXIT_SUCCESS);
}
