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
#include <cmath>

Fixed::Fixed(void) : _rawBits(0) {	
//	std::cout << "\033[0;33mFixed constructor called.\033[m" << std::endl;
}

Fixed::Fixed(Fixed const & src) {
//	std::cout << "\033[0;33mFixed copy constructor called.\033[m" << std::endl;
    *this = src;
}

Fixed::Fixed(int const entier) {
//    std::cout << "\033[0;33mFixed from integer constructor called.\033[m" << std::endl;
    this->_rawBits = entier << this->_fractionalBits_nb;
}

Fixed::Fixed(float const flottant) {
//	std::cout << "\033[0;33mFixed from floater constructor called.\033[m" << std::endl;
    this->_rawBits = roundf(flottant * (1 << this->_fractionalBits_nb));
}

Fixed::~Fixed(void) {
//    std::cout << "\033[0;33mFixed disruptor called.\033[m" << std::endl;
}

Fixed&  Fixed::operator=(Fixed const & src) {
//    std::cout << "\033[0;33mAssignation Fixed operator called\033[m" << std::endl;
    this->_rawBits = src.getRawBits();
    return (*this);
}

std::ostream&	operator<<(std::ostream & ostream, Fixed const & src) {
	ostream << src.toFloat();
	return (ostream);
}

int     Fixed::getRawBits(void) const {
    return this->_rawBits;
}

void    Fixed::setRawBits(int const raw) {
    this->_rawBits = raw;
}

float   Fixed::toFloat(void) const{
    return ((float)this->_rawBits / (1 << this->_fractionalBits_nb));
}

int   Fixed::toInt(void) const{
    return ((int)this->_rawBits >> this->_fractionalBits_nb);
}

bool	Fixed::operator>(Fixed const &f) const {
	return (this->_rawBits > f.getRawBits());
}

bool	Fixed::operator<(Fixed const &f) const {
	return (this->_rawBits < f.getRawBits());
}

bool	Fixed::operator>=(Fixed const &f) const {
	return (this->_rawBits >= f.getRawBits());
}

bool	Fixed::operator<=(Fixed const &f) const {
	return (this->_rawBits <= f.getRawBits());
}

bool	Fixed::operator==(Fixed const &f) const {
	return (this->_rawBits == f.getRawBits());
}

bool	Fixed::operator!=(Fixed const &f) const {
	return (this->_rawBits != f.getRawBits());
}

Fixed   Fixed::operator+(Fixed const &f) {
    return (this->toFloat() + f.toFloat());
}

Fixed   Fixed::operator-(Fixed const &f) {
    return (this->toFloat() - f.toFloat());
}

Fixed   Fixed::operator*(Fixed const &f) {
    return (this->toFloat() * f.toFloat());
}

Fixed   Fixed::operator/(Fixed const &f) {
    return (this->toFloat() / f.toFloat());
}

Fixed  Fixed::operator++(void) {
    this->_rawBits += 1;
    return (*this);
}

Fixed  Fixed::operator++(int) {
    Fixed tmp = *this;
    this->_rawBits++;
    return (tmp);
}

Fixed  Fixed::operator--(void) {
    this->_rawBits -= 1;
    return (*this);
}

Fixed  Fixed::operator--(int) {
    Fixed tmp = *this;
    this->_rawBits--;
    return (tmp);
}

Fixed&  Fixed::min(Fixed& a, Fixed&b){
    return (a < b ? a : b);
}

Fixed const& Fixed::min(Fixed const& a, Fixed const& b){
    return (a < b ? a : b);
}

Fixed&  Fixed::max(Fixed& a, Fixed&b){
    return (a > b ? a : b);
}

Fixed const& Fixed::max(Fixed const& a, Fixed const& b){
    return (a > b ? a : b);
}