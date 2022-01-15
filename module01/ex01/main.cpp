/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <alebross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 18:42:28 by alebross          #+#    #+#             */
/*   Updated: 2021/12/19 22:43:33 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int     main(void)
{
	int	N = 6;
    Zombie* zombie = ZombieHorde(N, "Bistouflex");
	for (int i = 0; i < N; i++)
		zombie[i].announce();
	delete [] zombie;
    return (0);
}
