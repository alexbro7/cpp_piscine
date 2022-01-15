/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <alebross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 17:40:20 by alebross          #+#    #+#             */
/*   Updated: 2021/12/22 19:52:58 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

void	FragTrap::highFivesGuys(void) const{
    if (!this->_hitPoint){
        std::cout << "Frag trap " << this->_name << " can't request a positive high fives because he's dead." << std::endl << std::endl;
        return;
    }
    std::cout << "Frag trap " << this->_name << " request a positive high fives." << std::endl << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {	
    this->_name = name;
    this->_hitPoint = FRAGTRAP_HP;
    this->_energyPoint = FRAGTRAP_EP;
    this->_attackDamage = FRAGTRAP_AD;
	std::cout << YELLOW << "Frag trap  "<< this->_name << " created." << WHITE << std::endl;
}

FragTrap::FragTrap(FragTrap const & src) : ClapTrap(src._name) {
    this->_name = src._name;
    this->_hitPoint = src._hitPoint;
    this->_energyPoint = src._energyPoint;
    this->_attackDamage = src._attackDamage;
	std::cout << YELLOW << "Frag trap  " << this->_name << " copied." << WHITE << std::endl;
}

FragTrap::~FragTrap(){	
	std::cout << YELLOW << "Frag trap  " << this->_name << " destroyed." << WHITE << std::endl;
}

FragTrap&  FragTrap::operator=(FragTrap const & src) {
    this->_name = src._name;
    this->_hitPoint = src._hitPoint;
    this->_energyPoint = src._energyPoint;
    this->_attackDamage = src._attackDamage;
    std::cout << YELLOW << "Frag trap  " << this->_name << " assigned." << WHITE << std::endl;
    return (*this);
}