/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <alebross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 17:40:20 by alebross          #+#    #+#             */
/*   Updated: 2022/01/07 15:43:46 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(std::string name) :  ClapTrap(name), ScavTrap(name), FragTrap(name + "_clap_name")  {	
    this->_name = name;
    this->_hitPoint = FRAGTRAP_HP;
    this->_energyPoint = SCAVTRAP_EP;
    this->_attackDamage = FRAGTRAP_AD;
	std::cout << YELLOW << "Diamond trap  "<< this->_name << " created." << WHITE << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const & src) : ClapTrap(src._name), ScavTrap(src._name), FragTrap(src._name) {
    this->_name = src._name;
    this->_hitPoint = src._hitPoint;
    this->_energyPoint = src._energyPoint; 
    this->_attackDamage = src._attackDamage;
	std::cout << YELLOW << "Diamond trap  " << this->_name << " copied." << WHITE << std::endl;
}

DiamondTrap::~DiamondTrap(){	
	std::cout << YELLOW << "Diamond trap  " << this->_name << " destroyed." << WHITE << std::endl;
}

DiamondTrap&  DiamondTrap::operator=(DiamondTrap const & src) {
    this->_name = src._name;
    this->_hitPoint = src._hitPoint;
    this->_energyPoint = src._energyPoint; 
    this->_attackDamage = src._attackDamage;
    std::cout << YELLOW << "Diamond trap  " << this->_name << " assigned." << WHITE << std::endl;
    return (*this);
}

void	DiamondTrap::whoAmI( void )
{
	std::cout << "DiamondTrap's name is " << this->_name << std::endl;
	std::cout << "ClapTrap's name is " << this->ClapTrap::_name << std::endl;
}