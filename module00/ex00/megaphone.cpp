/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 14:34:12 by alebross          #+#    #+#             */
/*   Updated: 2021/12/19 14:34:14 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		for (int i = 1; i < ac; i++)
			for (int j = 0; av[i][j]; j++)
				std::cout << (char)toupper(av[i][j]);
	std::cout << std::endl;
	return (0);
}
