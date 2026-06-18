/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtoky-fa <rtoky-fa@student.42antananarivo.m+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 03:32:22 by rtoky-fa          #+#    #+#             */
/*   Updated: 2026/06/18 03:38:08 by rtoky-fa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {

public:
	Cat(void);
	Cat(const Cat &src);
	Cat &operator=(const Cat &rhs);
	virtual ~Cat(void);

	void makeSound(void) const;
	Brain *getBrain(void) const;

private:
	Brain *_brain;

};

#endif