/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <alebross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 17:40:20 by alebross          #+#    #+#             */
/*   Updated: 2021/12/22 19:52:25 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(void) {
	std::cout << "\033[0;33mZombie constructor called.\033[m" << std::endl;
}

Zombie::~Zombie(void) {
	std::cout << "\033[0;33m<" << this->_name << "> Destroyed.\033[m" << std::endl;
}

void	Zombie::set_name(std::string name)
{ this->_name = name; }

void    Zombie::announce(void)
{ std::cout << "<" << this->_name << "> BraiiiiiiinnnzzzZ..." << std::endl; }
