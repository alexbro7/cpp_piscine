/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <alebross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 17:40:20 by alebross          #+#    #+#             */
/*   Updated: 2021/12/22 19:52:58 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

std::string const   Animal::getType(void) const{
    return this->_type;
}

Animal::Animal(void) : _type("animal"){	
	std::cout << "\033[0;33mAnimal created.\033[m" << std::endl;
}

Animal::Animal(Animal const & src) : _type(src._type){
	std::cout << "\033[0;33mAnimal copied.\033[m" << std::endl;
}

Animal::~Animal(){	
	std::cout << "\033[0;33mAnimal destroyed.\033[m" << std::endl;
}

Animal&  Animal::operator=(Animal const & src) {
    std::cout << "\033[0;33mAnimal assigned.\033[m" << std::endl;
    this->_type = src._type;
    return (*this);
}