/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <alebross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 17:40:20 by alebross          #+#    #+#             */
/*   Updated: 2022/01/07 17:18:30 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

void    Dog::makeSound(void) const{
    std::cout << "Wouf!" << std::endl;
}

std::string const   Dog::getType(void) const{
    return this->_type;
}

Dog::Dog(void) : _brain(new Brain()) {
    this->_type = "Dog";
	std::cout << "\033[0;33mDog created.\033[m" << std::endl;
}

Dog::Dog(Dog const & src) : Animal(src), _brain(new Brain(*src._brain)) {
    this->_type = src._type;
	std::cout << "\033[0;33mDog copied.\033[m" << std::endl;
}

Dog::~Dog(){	
    delete this->_brain;
	std::cout << "\033[0;33mDog destroyed.\033[m" << std::endl;
}

Dog&  Dog::operator=(Dog const & src) {
    this->_brain = src._brain;
    this->_type = src._type;
    std::cout << "\033[0;33mDog assigned.\033[m" << std::endl;
    return (*this);
}