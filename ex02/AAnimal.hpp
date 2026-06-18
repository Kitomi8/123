/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtoky-fa <rtoky-fa@student.42antananarivo.m+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 03:31:12 by rtoky-fa          #+#    #+#             */
/*   Updated: 2026/06/18 23:12:51 by rtoky-fa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include <string>

class AAnimal {

public:
	AAnimal(void);
	AAnimal(const AAnimal &src);
	AAnimal &operator=(const AAnimal &rhs);
	virtual ~AAnimal(void);

	virtual void makeSound(void) const = 0;
	std::string getType(void) const;

protected:
	std::string _type;

};

#endif