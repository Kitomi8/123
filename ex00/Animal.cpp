/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtoky-fa <rtoky-fa@student.42antananarivo.m+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 03:32:33 by rtoky-fa          #+#    #+#             */
/*   Updated: 2026/06/18 03:37:20 by rtoky-fa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("Animal") {
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &src) : _type(src._type) {
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &rhs) {
	std::cout << "Animal assignment operator called" << std::endl;
	if (this != &rhs)
		_type = rhs._type;
	return *this;
}

Animal::~Animal(void) {
	std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound(void) const {
	std::cout << "* Some generic animal sound *" << std::endl;
}

std::string Animal::getType(void) const {
	return _type;
}