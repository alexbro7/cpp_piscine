/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <alebross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 18:42:28 by alebross          #+#    #+#             */
/*   Updated: 2021/12/19 23:42:10 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int     main(void)
{
	Zombie	yolo("yolo");
	yolo.announce();
    Zombie* zozo = newZombie("zozo");
	zozo->announce();
	delete zozo;
	randomChump("bistouflex");
    return (0);
}
