/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtoky-fa <rtoky-fa@student.42antananarivo.m+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 03:31:12 by rtoky-fa          #+#    #+#             */
/*   Updated: 2026/06/18 18:48:13 by rtoky-fa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal {

public:
	Animal(void);
	Animal(const Animal &src);
	Animal &operator=(const Animal &rhs);
	virtual ~Animal(void);

	virtual void makeSound(void) const;
	std::string getType(void) const;

protected:
	std::string _type;

};

#endif