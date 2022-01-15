/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 14:20:11 by alebross          #+#    #+#             */
/*   Updated: 2021/12/19 14:20:12 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Phonebook.hpp"
#include <iostream>

int		main() {
	std::string				commande;
	Phonebook				phonebook;

	while (1)
	{
		std::cout << "Enter a commande (\"ADD\" / \"SEARCH\" / \"EXIT\")." << std::endl;
		std::getline(std::cin, commande);
		if (std::cin.eof() == 1)
			return (0);
		if (commande == "EXIT")
			break;
		else if (commande == "ADD") 
			phonebook.add_contact();
		else if (commande == "SEARCH")
			phonebook.search_contact();
		else
			std::cout << std::endl << "Commande \"" << commande << "\" doesn't exit." << std::endl;
	}
	return (0);
}
