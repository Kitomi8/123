/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtoky-fa <rtoky-fa@student.42antananarivo.m+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 03:32:18 by rtoky-fa          #+#    #+#             */
/*   Updated: 2026/06/18 20:49:06 by rtoky-fa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal() {
  _type = "Cat";
  _brain = new Brain();
  std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &src) : Animal(src) {
  _brain = new Brain(*src._brain);
  std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &rhs) {
  std::cout << "Cat assignment operator called" << std::endl;
  if (this != &rhs) {
    Animal::operator=(rhs);
    *_brain = *rhs._brain;
  }
  return *this;
}

Cat::~Cat(void) {
  delete _brain;
  std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound(void) const {
	std::cout << "Meow! Meow!" << std::endl; 
}

Brain *Cat::getBrain(void) { return _brain; }

const Brain *Cat::getBrain(void) const { return _brain; }