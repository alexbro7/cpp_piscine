/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <alebross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 17:40:20 by alebross          #+#    #+#             */
/*   Updated: 2021/12/22 19:52:58 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

void		ScavTrap::attack(std::string const & target){
    if (!this->_hitPoint){
        std::cout << "Scav trap " << this->_name << " can't attack because he's dead." << std::endl << std::endl;
        return ;
    }
    if (this->_energyPoint < this->_attackDamage){
        std::cout << "Scav trap " << this->_name << " can't attack because he don't have enough energy points." << std::endl << std::endl;
        return ;
    }
    std::cout << "Scav trap " << this->_name << " use scav attack on "<< target << "." << std::endl;
    this->_energyPoint -= this->_attackDamage;
    std::cout << "Scav trap " << this->_name << RED " use " << this->_attackDamage << " energy points ." << WHITE << std::endl;
    std::cout << "Scav trap " << this->_name << BLUE << " have " << this->_energyPoint << " energy points." << WHITE << std::endl << std::endl;

}

void    ScavTrap::guardGate(void){
    if (!this->_hitPoint){
        std::cout << "Scav trap " << this->_name << " can't enterring in Gate keeper mode because he's dead."<< std::endl << std::endl;
    }
    std::cout << "Scav trap " << this->_name << " have enterred in Gate keeper mode." << std::endl;
    this->_energyPoint = SCAVTRAP_EP;
    std::cout << "Scav trap " << this->_name << GREEN << " recypere his all energy points." << WHITE << std::endl;
    std::cout << "Scav trap " << this->_name << BLUE << " have " << this->_energyPoint << " energy points." << WHITE << std::endl << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {	
    this->_name = name;
    this->_hitPoint = SCAVTRAP_HP;
    this->_energyPoint = SCAVTRAP_EP;
    this->_attackDamage = SCAVTRAP_AD;
	std::cout << YELLOW << "Scav trap  "<< this->_name << " created." << WHITE << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap(src._name) {
    this->_name = src._name;
    this->_hitPoint = src._hitPoint;
    this->_energyPoint = src._energyPoint;
    this->_attackDamage = src._attackDamage;
	std::cout << YELLOW << "Scav trap  " << this->_name << " copied." << WHITE << std::endl;
}

ScavTrap::~ScavTrap(){	
	std::cout << YELLOW << "Scav trap  " << this->_name << " destroyed." << WHITE << std::endl;
}

ScavTrap&  ScavTrap::operator=(ScavTrap const & src) {
    this->_name = src._name;
    this->_hitPoint = src._hitPoint;
    this->_energyPoint = src._energyPoint;
    this->_attackDamage = src._attackDamage;
    std::cout << YELLOW << "Scav trap  " << this->_name << " assigned." << WHITE << std::endl;
    return (*this);
}