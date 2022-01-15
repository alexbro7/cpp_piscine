/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <alebross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 14:20:42 by alebross          #+#    #+#             */
/*   Updated: 2021/12/21 17:56:53 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>

class Phonebook {

public:

	Phonebook(void);
	~Phonebook(void);

	void add_contact();
	void search_contact() const;

private:

	Contact _contact[8];
	int		_size_repertory;
	void 	_print_contact(int index) const;
	void 	_print_repertory() const;

};

# endif
