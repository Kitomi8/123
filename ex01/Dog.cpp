/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtoky-fa <rtoky-fa@student.42antananarivo.m+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 03:32:25 by rtoky-fa          #+#    #+#             */
/*   Updated: 2026/06/18 03:38:23 by rtoky-fa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal() {
	_type = "Dog";
	_brain = new Brain();
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &src) : Animal(src) {
	_brain = new Brain(*src._brain);
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &rhs) {
	std::cout << "Dog assignment operator called" << std::endl;
	if (this != &rhs) {
		Animal::operator=(rhs);
		*_brain = *rhs._brain;
	}
	return *this;
}

Dog::~Dog(void) {
	delete _brain;
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound(void) const {
	std::cout << "Woof! Woof!" << std::endl;
}

Brain *Dog::getBrain(void) { return _brain; }

const Brain *Dog::getBrain(void) const { return _brain; }