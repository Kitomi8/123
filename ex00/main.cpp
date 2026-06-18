/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtoky-fa <rtoky-fa@student.42antananarivo.m+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 03:41:48 by rtoky-fa          #+#    #+#             */
/*   Updated: 2026/06/18 19:17:22 by rtoky-fa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(void) {
  std::cout << "----- Constructor -----" << std::endl;
  const Animal *meta = new Animal();
  const Animal *j = new Dog();
  const Animal *i = new Cat();

  std::cout << std::endl << "----- Types -----" << std::endl;
  std::cout << "j type: " << j->getType() << std::endl;
  std::cout << "i type: " << i->getType() << std::endl;

  std::cout << std::endl
            << "----- Sons (polymorphism with virtual) -----" << std::endl;
  i->makeSound();
  j->makeSound();
  meta->makeSound();

  std::cout << std::endl
            << "----- Destructor (virtual destructor) -----" << std::endl;
  delete meta;
  delete j;
  delete i;

  std::cout << std::endl << "-------- Test without virtual (Wrong) --------" << std::endl;
  
  const WrongAnimal *wrongAnimal = new WrongAnimal();
  const WrongAnimal *wrongCat = new WrongCat();

  std::cout << std::endl << "--------Types--------" << std::endl;
  std::cout << "wrongCat type: " << wrongCat->getType() << std::endl;

  std::cout << std::endl
            << "----- Sons (no polymorphism without virtual) -----" << std::endl;
  wrongCat->makeSound();
  wrongAnimal->makeSound();

  std::cout << std::endl << "----- Destructor -----" << std::endl;
  delete wrongAnimal;
  delete wrongCat;
  return (0);
}