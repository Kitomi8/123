/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtoky-fa <rtoky-fa@student.42antananarivo.m+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 03:32:18 by rtoky-fa          #+#    #+#             */
/*   Updated: 2026/06/18 20:44:44 by rtoky-fa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal() {
	_type = "Cat";
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &src) : Animal(src) {
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &rhs) {
	std::cout << "Cat assignment operator called" << std::endl;
	if (this != &rhs)
		Animal::operator=(rhs);
	return *this;
}

Cat::~Cat(void) {
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound(void) const {
	std::cout << "Meow! Meow!" << std::endl;
}