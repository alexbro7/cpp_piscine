/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <alebross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 14:20:05 by alebross          #+#    #+#             */
/*   Updated: 2021/12/21 17:56:19 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) {
}

Contact::~Contact(void) {
}

std::string Contact::get_data(int i) const {
	return this->_data[i];
}

bool	Contact::_checkPhoneNumber(std::string const str) const {
	for (int i = str[0] == '+' ? 1 : 0; str[i]; i++)
		if (str[i] < '0' || str[i] > '9')
			return (1);
	return (0);	
}

void	Contact::set_data(void){
	std::string	str;
	std::string	dataName[5] = {"first name",
								"last name",
								"nickname",
								"phone number",
								"darkest secret"};
	for (int i = 0; i < 5; i++)
	{
		str = "";
		while (str == "")
		{
			std::cout << "Enter " << dataName[i] << ": ";
			std::getline(std::cin, str);
			if (std::cin.eof() == 1)
				return;
			if (i == 3 && _checkPhoneNumber(str))
			{
				std::cout << "\"" << str << "\" not in phone number format." << std::endl;
				str = "";
			}
		}
		this->_data[i] = str;
	}
	std::cout << std::endl;
}
