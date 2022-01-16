/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <alebross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 18:42:28 by alebross          #+#    #+#             */
/*   Updated: 2022/01/16 18:03:14 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>

int main() {
    char a = 'a', b = 'b';
    int c = 12, d = 24;
    float e = 12.4, f = 12.5;
    std::string g = "coucou", h = "salut";

    //test swap
    std::cout << a << "|" << b << " <swap> ";
    swap(a, b);
    std::cout << a << "|" << b << std::endl;
    
    std::cout << c << "|" << d << " <swap> ";
    swap(c, d);
    std::cout << c << "|" << d << std::endl;

    std::cout << e << "|" << f << " <swap> ";
    swap(e, f);
    std::cout << e << "|" << f << std::endl;

    std::cout << g << "|" << h << " <swap> ";
    swap(g, h);
    std::cout << g << "|" << h << std::endl << std::endl;
    //test min
    std::cout << "min("<< a << ", " << b << ")=" << min(a, b) << std::endl;
    std::cout << "min("<< c << ", " << d << ")=" << min(c, d) << std::endl;
    std::cout << "min("<< e << ", " << f << ")=" << min(e, f) << std::endl << std::endl;
    //test max
    std::cout << "max("<< a << ", " << b << ")=" << max(a, b) << std::endl;
    std::cout << "max("<< c << ", " << d << ")=" << max(c, d) << std::endl;
    std::cout << "max("<< e << ", " << f << ")=" << max(e, f) << std::endl;
    return 0;
}
