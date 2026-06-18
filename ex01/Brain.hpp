/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtoky-fa <rtoky-fa@student.42antananarivo.m+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 20:01:02 by rtoky-fa          #+#    #+#             */
/*   Updated: 2026/06/18 21:50:41 by rtoky-fa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#   define BRAIN_HPP

#   include <iostream>
#   include <string>

class Brain {

public:
  Brain(void);
  Brain(const Brain &src);
  Brain &operator=(const Brain &rhs);
  ~Brain(void);

  const std::string &getIdea(int index) const;
  void setIdea(int index, const std::string &idea);

private:
  std::string _ideas[100];
};

#endif