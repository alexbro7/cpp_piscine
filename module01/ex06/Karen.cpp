/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <alebross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 14:28:58 by alebross          #+#    #+#             */
/*   Updated: 2021/12/22 19:06:08 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Karen.hpp"

Karen::Karen(void) {
    std::cout << "\033[0;33mKaren constructor called.\033[m" << std::endl;
}

Karen::~Karen(void) {
    std::cout << "\033[0;33mKaren disruptor called.\033[m" << std::endl;
}

void    Karen::complain(std::string level) {
    std::string s[4] = {"debug", "info", "warning", "error"};

    int o = -1;
    for (int i = 0; i < 4; i++)
        if (s[i] == level)
            o = i;
    switch (o) {
        case (0):
            Karen::_debug();
        case (1):
            Karen::_info();
        case (2):
            Karen::_warning();
        case (3):
            Karen::_error();
            break;
        default:
            Karen::_other();
    }
}

void    Karen::_debug(void) const{
    std::cout << "[DEBUG]" << std::endl << "My name is misspelled on the cup." << std::endl << std::endl;
}

void    Karen::_info(void) const{
    std::cout << "[INFO]" << std::endl << "I can’t get oxygen through a mask." << std::endl << std::endl;
}

void    Karen::_warning(void) const{
    std::cout << "[WARNING]" << std::endl << "You ruined my family’s entire vacation!" << std::endl << std::endl;
}

void    Karen::_error(void) const{
    std::cout << "[ERROR]" << std::endl << "You just lost our business!" << std::endl << std::endl;
}

void    Karen::_other(void) const{
    std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}