/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <alebross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 18:42:28 by alebross          #+#    #+#             */
/*   Updated: 2022/01/07 15:46:32 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

#define NAME1 "bryan"
#define NAME2 "kevin"

int main(void) {
    ClapTrap c1(NAME1);
    ClapTrap c2(NAME2);

    c1.attack(NAME2);
    c2.takeDamage(CLAPTRAP_AD);
    c1.beRepaired(4);
    c1.beRepaired(4);
    c1.beRepaired(4);
    c1.takeDamage(50);
    c1.attack(NAME2);
    return 0;
}
