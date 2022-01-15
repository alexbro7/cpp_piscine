/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <alebross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 17:40:20 by alebross          #+#    #+#             */
/*   Updated: 2021/12/22 19:52:58 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

void    WrongAnimal::makeSound(void) const{
    std::cout << "wrong animal sound..." << std::endl;
}

std::string const   WrongAnimal::getType(void) const{
    return this->_type;
}

WrongAnimal::WrongAnimal(void) : _type("animal"){	
	std::cout << "\033[0;33mWrongAnimal created.\033[m" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src) : _type(src._type){
	std::cout << "\033[0;33mWrongAnimal copied.\033[m" << std::endl;
}

WrongAnimal::~WrongAnimal(void){	
	std::cout << "\033[0;33mWrongAnimal destroyed.\033[m" << std::endl;
}

WrongAnimal&   WrongAnimal::operator=(WrongAnimal const & src) {
    std::cout << "\033[0;33mWrongAnimal assigned.\033[m" << std::endl;
    this->_type = src._type;
    return (*this);
}