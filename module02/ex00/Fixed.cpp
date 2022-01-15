/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <alebross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 17:40:20 by alebross          #+#    #+#             */
/*   Updated: 2021/12/22 19:52:58 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(void) : _rawBits(0) {	
	std::cout << "\033[0;33mFixed constructor called.\033[m" << std::endl;
}

Fixed::Fixed(Fixed const & src) {
	std::cout << "\033[0;33mFixed copy constructor called.\033[m" << std::endl;
    *this = src;
}

Fixed::~Fixed(void){
    std::cout << "\033[0;33mFixed disruptor called.\033[m" << std::endl;
}

Fixed&  Fixed::operator=(Fixed const & src)
{
    std::cout << "\033[0;33mAssignation operator called\033[m" << std::endl;
    this->_rawBits = src.getRawBits();
    return (*this);
}

int     Fixed::getRawBits(void) const {
    std::cout << "\033[0;33mgetRawBits member fonction called.\033[m" << std::endl;
    return this->_rawBits;
}

void    Fixed::setRawBits(int const raw) {
    std::cout << "\033[0;33msetRawBits member fonction called.\033[m" << std::endl;
    this->_rawBits = raw;
}