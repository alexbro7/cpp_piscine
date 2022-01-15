/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <alebross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 17:40:20 by alebross          #+#    #+#             */
/*   Updated: 2022/01/07 17:17:00 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

void    WrongCat::makeSound(void) const{
    std::cout << "Wrong Meow." << std::endl;
}

std::string const   WrongCat::getType(void) const{
    return this->_type;
}

WrongCat::WrongCat(void){
    this->_type = "WrongCat";
	std::cout << "\033[0;33mWrongCat created.\033[m" << std::endl;
}

WrongCat::WrongCat(WrongCat const & src) : WrongAnimal(src){
    this->_type = src._type;
	std::cout << "\033[0;33mWrongCat copied.\033[m" << std::endl;
}

WrongCat::~WrongCat(){	
	std::cout << "\033[0;33mWrongCat destroyed.\033[m" << std::endl;
}

WrongCat&  WrongCat::operator=(WrongCat const & src) {
    std::cout << "\033[0;33mWrongCat assigned.\033[m" << std::endl;
    this->_type = src._type;
    return (*this);
}