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

#include "easyfind.hpp"
#include <iostream>
#include <list>
#include <vector>

void    displayInt(int i){
    std::cout << std::to_string(i) << std::endl;
}

template<typename T>
void    testContainer(T container){
    int n;
    bool b;
	for (int i = 1; i <= 5; i++)
		container.push_back(i);	
	std::for_each(container.begin(), container.end(), displayInt);
    n = 3;
    b = easyfind(container, n);
	std::cout << "easyfind(this , "<< std::to_string(n) << ") = " << std::to_string(b) << std::endl;
}

int main() {
    std::list<int> container;
    testContainer(container);
    return 0;
}