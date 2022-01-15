/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <alebross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 18:42:28 by alebross          #+#    #+#             */
/*   Updated: 2022/01/08 14:31:52 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"
#include <iostream>

int main(int ac, char **av) {
    if (ac != 2)
    {
        std::cerr << "Wrong number of arguments." << std::endl;
        return (1);
    }
    Converter convert(av[1]);
    char c;
    int i;
    double d;
    float f;
    c = static_cast<char>(convert);
    i = static_cast<int>(convert);
    f = static_cast<float>(convert);
    d = static_cast<double>(convert);
    return 0;
}
