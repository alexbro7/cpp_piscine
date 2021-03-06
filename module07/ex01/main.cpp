/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <alebross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 18:42:28 by alebross          #+#    #+#             */
/*   Updated: 2022/01/16 18:58:08 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

template <typename T>
void display(T const & elem){
	std::cout << elem << std::endl;
}

int main() {
    int a[4] = {12, 13, 14, 15};
    std::string s = "abcdefghijklmnopqrstuvwxyz";
    iter(a, 4, display);
    std::cout << std::endl;
    iter(s.c_str(), s.length(), display);
}