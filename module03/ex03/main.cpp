/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <alebross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 18:42:28 by alebross          #+#    #+#             */
/*   Updated: 2021/12/31 22:38:42 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

#define NAME1 "bistouflex"

int main(void) {
    DiamondTrap c1(NAME1);
    c1.whoAmI();
    std::cout << c1._hitPoint << std::endl;
    std::cout << c1._energyPoint << std::endl;
    std::cout << c1._attackDamage << std::endl;
    c1.attack("hello");
    c1.takeDamage(50);
    c1.beRepaired(30);
    c1.guardGate();
    c1.highFivesGuys();
    return 0;
}
