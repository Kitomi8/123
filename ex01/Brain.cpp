/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtoky-fa <rtoky-fa@student.42antananarivo.m+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 20:02:10 by rtoky-fa          #+#    #+#             */
/*   Updated: 2026/06/18 20:34:59 by rtoky-fa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {
  std::cout << "Brain constructor called" << std::endl;
  for (int i = 0; i < 100; i++) {
    _ideas[i] = "I have no idea";
  }
}

Brain::Brain(const Brain &src) {
  std::cout << "Brain copy constructor called" << std::endl;
  *this = src;
}

Brain &Brain::operator=(const Brain &rhs) {
  std::cout << "Brain assignment operator called" << std::endl;
  if (this != &rhs) {
    for (int i = 0; i < 100; i++) {

      _ideas[i] = rhs._ideas[i];
    }
  }
  return *this;
}

Brain::~Brain(void) { std::cout << "Brain destructor called" << std::endl; }
