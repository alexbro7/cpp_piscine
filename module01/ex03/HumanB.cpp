/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <alebross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 19:16:32 by alebross          #+#    #+#             */
/*   Updated: 2021/12/22 19:56:56 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string str) : _name(str) {
    std::cout << "\033[0;33mHumanB constructor called.\033[m" << std::endl; }

HumanB::~HumanB(void) {
    std::cout << "\033[0;33mHumanB disruptor called.\033[m" << std::endl; }

void    HumanB::attack(void) const {
    if (this->_weapon == NULL)
        return ;
    std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon& weaponPTR) {
    this->_weapon = &weaponPTR; }
