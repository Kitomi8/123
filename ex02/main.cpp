/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtoky-fa <rtoky-fa@student.42antananarivo.m+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 03:41:48 by rtoky-fa          #+#    #+#             */
/*   Updated: 2026/06/19 01:01:26 by rtoky-fa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void) {
  int size = 4;

  // AAnimal test = AAnimal(); // This should NOT compile (abstract class)

  std::cout << "\n------ CREATING ARRAY OF ANIMALS ------" << std::endl;
  const AAnimal *animals[size];
  for (int i = 0; i < size; i++) {
    if (i < size / 2)
      animals[i] = new Dog();
    else
      animals[i] = new Cat();
    std::cout << std::endl;
  }

  std::cout << "-------- Make sounds ---------" << std::endl;
  for (int i = 0; i < size; i++) {
    std::cout << animals[i]->getType() << ": ";
    animals[i]->makeSound();
  }

  std::cout << std::endl << "-------- Deleting array ----------" << std::endl;
  for (int i = 0; i < size; i++) {
    delete animals[i];
    std::cout << std::endl;
  }

  std::cout << "---------- Deep copy test ----------" << std::endl;
  Dog basic;
  {
    Dog tmp = basic;
  }
  std::cout << "Basic dog still alive after tmp destroyed" << std::endl;
  std::cout << std::endl;

  return (0);
}