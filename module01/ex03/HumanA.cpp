/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <alebross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 19:16:32 by alebross          #+#    #+#             */
/*   Updated: 2021/12/22 19:55:52 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string str, Weapon& weaponREF) : _name(str), _weapon(weaponREF) {
    std::cout << "\033[0;33mHumanA constructor called.\033[m" << std::endl;
}

HumanA::~HumanA(void) {
    std::cout << "\033[0;33mHumanA disruptor called.\033[m" << std::endl; }

void    HumanA::attack(void) const {
    std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl; }
