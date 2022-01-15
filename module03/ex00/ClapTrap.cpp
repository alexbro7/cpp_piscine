/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <alebross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 17:40:20 by alebross          #+#    #+#             */
/*   Updated: 2022/01/07 15:46:36 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

void		ClapTrap::attack(std::string const & target){
    if (!this->_hitPoint){
        std::cout << "Clap trap " << this->_name << " can't attack because he's dead." << std::endl << std::endl;
        return ;
    }
    if (this->_energyPoint < this->_attackDamage){
        std::cout << "Clap trap " << this->_name << " can't attack because he don't have enough energy points." << std::endl << std::endl;
        return ;
    }
    std::cout << "Clap trap " << this->_name << " use clap attack on "<< target << "." << std::endl;
    this->_energyPoint -= this->_attackDamage;
    std::cout << "Clap trap " << this->_name << RED " use " << this->_attackDamage << " energy points ." << WHITE << std::endl;
    std::cout << "Clap trap " << this->_name << BLUE << " have " << this->_energyPoint << " energy points." << WHITE << std::endl << std::endl;
}

void		ClapTrap::takeDamage(unsigned int amount){
    if (!this->_hitPoint){
        std::cout << "Clap trap " << this->_name << " can't take dammage, he's already dead." << std::endl << std::endl;
        return;
    }
    std::cout << "Clap trap " << this->_name << " subit dammages." << std::endl;
    std::cout << "Clap trap " << this->_name << RED << " lose "<< amount << " hit points." << WHITE << std::endl;
    if (amount >= this->_hitPoint){
        this->_hitPoint = 0;
        std::cout << "Clap trap " << this->_name << RED << " die." << WHITE << std::endl << std::endl;
    }
    else{
        this->_hitPoint -= amount;
        std::cout << "Clap trap " << this->_name << BLUE << " have "<< this->_hitPoint << " hit points." << WHITE << std::endl << std::endl;
    }
}

void		ClapTrap::beRepaired(unsigned int amount){
    if (!this->_hitPoint){
        std::cout << "Clap trap " << this->_name << " can't be repaired because he's dead." << std::endl << std::endl;
        return ;
    }
    if (this->_energyPoint < amount){
        std::cout << "Clap trap " << this->_name << " can't be repaired of "<< amount << " because he don't have enough energy points." << std::endl << std::endl;
        return ;
    }
    std::cout << "Clap trap " << this->_name << " use reparation." << std::endl;
    this->_energyPoint -= amount;
    std::cout << "Clap trap " << this->_name << RED << " use " << amount << " energy points." << WHITE << std::endl;
    std::cout << "Clap trap " << this->_name << BLUE << " have " << this->_energyPoint << " energy points." << WHITE << std::endl;
    this->_hitPoint += amount;
    std::cout << "Clap trap " << this->_name << GREEN << " is repaired of " << amount << " hit points." << WHITE << std::endl;
    std::cout << "Clap trap " << this->_name << BLUE << " have "<< this->_hitPoint << " hit points." << WHITE << std::endl << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoint(CLAPTRAP_HP), _energyPoint(CLAPTRAP_EP), _attackDamage(CLAPTRAP_AD) {	
	std::cout << YELLOW << "Clap trap  "<< this->_name << " created." << WHITE << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src) : _name(src._name), _hitPoint(src._hitPoint), _energyPoint(src._energyPoint), _attackDamage(src._attackDamage) {
	std::cout << YELLOW << "Clap trap  " << this->_name << " copied." << WHITE << std::endl;
}

ClapTrap::~ClapTrap(){	
	std::cout << YELLOW << "Clap trap  " << this->_name << " destroyed." << WHITE << std::endl;
}

ClapTrap&  ClapTrap::operator=(ClapTrap const & src) {
    std::cout << YELLOW << "Clap trap  " << this->_name << " assigned." << WHITE << std::endl;
    this->_name = src._name;
    this->_hitPoint = src._hitPoint;
    this->_energyPoint = src._energyPoint;
    this->_attackDamage = src._attackDamage;
    return (*this);
}