/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <alebross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 17:40:20 by alebross          #+#    #+#             */
/*   Updated: 2022/01/08 15:49:43 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"
#include <iostream>
#include <iomanip>
#include <limits>

static void putStrDl(std::string const str){
    std::cout << str << std::endl;
}

static int  precision(std::string s){
    int ret = 0;
    int i = s.length() -1;

    if (s[i] == 'f')
        i--;
    while (i != 0){
        if (s[i] == '.'){
            ret += ret ? 0 : 1;
            return (ret);
        }
        ret++;
        i--;
    }
    return (1);
}

Converter::operator char() {
    std::cout << "char: ";
    int n;
    char c;
    try{
        n = stoi(_str);
        c = static_cast<char>(n);
    }
    catch (const std::out_of_range & oor){
        putStrDl("impossible");
        return(n);
    }
    catch (const std::invalid_argument & ia){
        if (_str.length() != 1)
            putStrDl("impossible");
        else
            std::cout << '\'' << _str << '\'' << std::endl;
        return(_str[0]);
    }
    if (n < CHAR_MIN || n > CHAR_MAX)
            putStrDl("impossible");
    else if (c < ' ' || c > '~')
        putStrDl("Non displayable");
    else
        std::cout << '\'' << c << '\'' << std::endl;
    return (n);
}

Converter::operator int() {
    std::cout << "int: ";
    int n;
    try{
        n = stoi(_str);
        putStrDl(std::to_string(n));
        return (n);
    }
    catch (const std::out_of_range & oor){
        putStrDl("impossible");
        return (n);
    }
    catch (const std::invalid_argument & ia){
        putStrDl("impossible");
        return (n);
    }
}

Converter::operator float() {
    std::cout << "float: ";
    float n;
    try{
        n = stof(_str);
        std::cout << std::fixed << std::setprecision(precision(_str)) << n << "f" << std::endl;
        return (n);
    }
    catch (const std::out_of_range & oor){
        putStrDl("impossible");
        return (n);
    }
    catch (const std::invalid_argument & ia){
        putStrDl("impossible");
        return (n);
    }
}

Converter::operator double() {
    std::cout << "double: ";
    double n;
    try{
        n = stod(_str);
        std::cout << std::fixed << std::setprecision(precision(_str)) << n << "f" << std::endl;
        return (n);
    }
    catch (const std::out_of_range & oor){
        putStrDl("impossible");
        return (n);
    }
    catch (const std::invalid_argument & ia){
        putStrDl("impossible");
        return (n);
    }
}

Converter::Converter(std::string const str) : _str(str){
}

Converter::Converter(Converter const & src) : _str(src._str){
}

Converter::~Converter(){	
}

Converter&  Converter::operator=(Converter const & src) {
    (void)src;
    return (*this);
}