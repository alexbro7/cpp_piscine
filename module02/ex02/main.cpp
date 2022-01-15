/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <alebross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 18:42:28 by alebross          #+#    #+#             */
/*   Updated: 2021/12/31 14:16:37 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main(void) {
    std::cout << "1 + 2 = " << Fixed(1) + Fixed(2) << std::endl;
    std::cout << "1 - 2 = " << Fixed(1) - Fixed(2) << std::endl;
    std::cout << "1 * 2 = " << Fixed(1) * Fixed(2) << std::endl;
    std::cout << "1 / 2 = " << Fixed(1) / Fixed(2) << std::endl;
    std::cout << "1 < 2 = " << (Fixed(1) < Fixed(2)) << std::endl;
    std::cout << "1 > 2 = " << (Fixed(1) > Fixed(2)) << std::endl;
    std::cout << "1 <= 2 = " << (Fixed(1) <= Fixed(2)) << std::endl;
    std::cout << "1 >= 2 = " << (Fixed(1) >= Fixed(2)) << std::endl;
    std::cout << "1 == 2 = " << (Fixed(1) == Fixed(2)) << std::endl;
    std::cout << "1 != 2 = " << (Fixed(1) != Fixed(2)) << std::endl;
    std::cout << "++1 = " << ++Fixed(1) << std::endl;
    std::cout << "1++ = " << Fixed(1)++ << std::endl;
    std::cout << "--1 = " << --Fixed(1) << std::endl;
    std::cout << "1-- = " << Fixed(1)-- << std::endl;
    std::cout << "min(1 ,2) = " << Fixed::min(Fixed(1), Fixed(2)) << std::endl;
    std::cout << "max(1 ,2) = " <<  Fixed::max(Fixed(1), Fixed(2)) << std::endl;
    return 0;
}