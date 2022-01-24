/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <alebross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 18:42:28 by alebross          #+#    #+#             */
/*   Updated: 2022/01/16 18:24:06 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main() {
    Array<int> a(12);
    Array<char> b(7);
    try
	{
        for (unsigned int i = 0; i < a.size(); i++)
            a[i] = i + 2;
        for (unsigned int i = 0; i < b.size(); i++)
            b[i] = 'a' + i;
        for (unsigned int i = 0; i < a.size(); i++)
            std::cout << a[i] << std::endl;
        for (unsigned int i = 0; i < b.size(); i++)
            std::cout << b[i] << std::endl;
        std::cout << b[b.size()] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
