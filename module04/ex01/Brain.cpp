/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <alebross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 17:40:20 by alebross          #+#    #+#             */
/*   Updated: 2022/01/07 17:20:20 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain(void){	
    for (int i = 0; i < 100; i++){
        this->_ideas[i] = "idea";}
	std::cout << "\033[0;33mBrain created.\033[m" << std::endl;
}

Brain::Brain(Brain const & src){
    for (int i = 0; i < 100; i++){
        this->_ideas[i] = src._ideas[i];}
	std::cout << "\033[0;33mBrain copied.\033[m" << std::endl;
}

Brain::~Brain(){	
	std::cout << "\033[0;33mBrain destroyed.\033[m" << std::endl;
}

Brain&  Brain::operator=(Brain const & src) {
    std::cout << "\033[0;33mBrain assigned.\033[m" << std::endl;
    for (int i = 0; i < 100; i++){
        this->_ideas[i] = src._ideas[i];}
    return (*this);
}