/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <alebross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 14:28:58 by alebross          #+#    #+#             */
/*   Updated: 2021/12/22 18:50:28 by alebross         ###   ########.fr       */
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
    void    (Karen::*f[4])(void)const = {&Karen::_debug,
                                    &Karen::_info,
                                    &Karen::_warning,
                                    &Karen::_error};
    for (int i = 0; i < 4; i++)
        if (s[i] == level)
            (this->*f[i])();
}

void    Karen::_debug(void) const{
    std::cout << "My name is misspelled on the cup." << std::endl;
}

void    Karen::_info(void) const{
    std::cout << "I can’t get oxygen through a mask." << std::endl;
}

void    Karen::_warning(void) const{
    std::cout << "You ruined my family’s entire vacation!" << std::endl;
}

void    Karen::_error(void) const{
    std::cout << "You just lost our business!" << std::endl;
}