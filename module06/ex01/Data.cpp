/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <alebross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 17:40:20 by alebross          #+#    #+#             */
/*   Updated: 2022/01/08 15:49:43 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include <iostream>

std::string const   Data::getStr(void) const{
    return _str;
}

Data::Data(std::string const str) : _str(str){
}

Data::Data(Data const & src) : _str(src._str){
}

Data::~Data(){	
}

Data&  Data::operator=(Data const & src) {
    (void)src;
    return (*this);
}