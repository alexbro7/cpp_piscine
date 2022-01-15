/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 22:26:22 by alebross          #+#    #+#             */
/*   Updated: 2021/12/19 22:36:11 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie* ZombieHorde(int N, std::string name)
{
	Zombie*	zombie = new Zombie[N];
	for (int i = 0; i < N; i++)
		zombie[i].set_name(name);
	return (zombie);
}
