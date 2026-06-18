/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtoky-fa <rtoky-fa@student.42antananarivo.m+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 03:32:27 by rtoky-fa          #+#    #+#             */
/*   Updated: 2026/06/18 07:24:19 by rtoky-fa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {

public:
  Dog(void);
  Dog(const Dog &src);
  Dog &operator=(const Dog &rhs);
  virtual ~Dog(void);

  void makeSound(void) const;
  Brain *getBrain(void);
  const Brain *getBrain(void) const;

private:
  Brain *_brain;
};

#endif