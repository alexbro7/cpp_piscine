/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <alebross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 17:40:20 by alebross          #+#    #+#             */
/*   Updated: 2022/01/07 17:22:05 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>

void    Cat::makeSound(void) const{
    std::cout << "Meow." << std::endl;
}

std::string const   Cat::getType(void) const{
    return this->_type;
}

Cat::Cat(void) : _brain(new Brain()) {
    this->_type = "Cat";
	std::cout << "\033[0;33mCat created.\033[m" << std::endl;
}

Cat::Cat(Cat const & src) : Animal(src), _brain(new Brain(*src._brain)){
    this->_type = src._type;
	std::cout << "\033[0;33mCat copied.\033[m" << std::endl;
}

Cat::~Cat(){
    delete this->_brain;	
	std::cout << "\033[0;33mCat destroyed.\033[m" << std::endl;
}

Cat&  Cat::operator=(Cat const & src) {
    this->_type = src._type;
    this->_brain = src._brain;
    std::cout << "\033[0;33mCat assigned.\033[m" << std::endl;
    return (*this);
}