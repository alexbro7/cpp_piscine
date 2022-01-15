/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <alebross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 14:20:17 by alebross          #+#    #+#             */
/*   Updated: 2021/12/21 16:20:50 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include "Phonebook.hpp"

Phonebook::Phonebook(void) {
	this->_size_repertory = 0;
}

Phonebook::~Phonebook(void) {
}

void	Phonebook::add_contact() {
	if (this->_size_repertory == 8)
	{
		std::cout << "The repertory is full." << std::endl << std::endl;
		return;
	}
	this->_contact[this->_size_repertory].set_data();
	this->_size_repertory++;
}

void	Phonebook::_print_repertory() const {
	std::cout << "     INDEX|FIRST NAME| LAST NAME|  NICKNAME" << std::endl;
	for (int j = 0; j < this->_size_repertory; j++)
	{
		for (int i = -1; i < 3; i++)
		{
			if (i != -1 && i != 3)
				std::cout << "|";
			if (i == -1)
				std::cout << std::setw(10) << j + 1;
			else
			{
				if (this->_contact[j].get_data(i).length() > 10)
					std::cout << this->_contact[j].get_data(i).substr(0, 9) << ".";
				else
					std::cout << std::setw(10) << this->_contact[j].get_data(i);
			}
		}
		std::cout << std::endl;
	}
}

void	Phonebook::_print_contact(int index) const {
	std::string s[5] = {"first name", "last name", "nickname", "phone number", "darkest secret"};
	for (int i = 0; i < 5; i++)
		std::cout << s[i] << ":\t" << this->_contact[index].get_data(i) << std::endl;
	std::cout << std::endl;
}

void	Phonebook::search_contact() const {
	std::string	str;
	bool		run = 1;

	if (this->_size_repertory == 0)
	{
		std::cout << "The repertory is empty." << std::endl << std::endl;
		return;
	}
	this->_print_repertory();
	while (run)
	{
		std::cout << "Enter an index: ";
		std::getline(std::cin, str);
		if (std::cin.eof() == 1)
			return ;
		if (str.length() == 1 && str[0] > '0' && str[0] - '0' <= this->_size_repertory)
			run = 0;
		else
			std::cout << std::endl << "Index \"" << str << "\" doesn't exit." << std::endl;
	}
	_print_contact((str[0] - '0') - 1);
}
