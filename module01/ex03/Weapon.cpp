/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <alebross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 16:14:53 by alebross          #+#    #+#             */
/*   Updated: 2021/12/22 19:57:50 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(std::string str) 
{
    this->_type = str;
    std::cout << "\033[0;33mWeapon constructor called.\033[m" << std::endl;
}

Weapon::~Weapon(void)
{ std::cout << "\033[0;33mWeapon disruptor called.\033[m" << std::endl; }

std::string	const Weapon::getType(void) const
{ return (this->_type); }

void    Weapon::setType(std::string str)
{ this->_type = str; }
