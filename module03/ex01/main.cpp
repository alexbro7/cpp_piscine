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

#include "ScavTrap.hpp"
#include <iostream>

#define NAME1 "bryan"
#define NAME2 "kevin"

int main(void) {
    ScavTrap c1(NAME1);
    ScavTrap c2(NAME2);
    std::cout << std::endl;
    c1.attack(NAME2);
    c2.takeDamage(SCAVTRAP_AD);
    c2.beRepaired(7);
    c1.attack(NAME2);
    c2.takeDamage(SCAVTRAP_AD);
    c1.attack(NAME2);
    c1.guardGate();
    c1.attack(NAME2);
    std::cout << std::endl;
    return 0;
}
