/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <alebross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 14:20:32 by alebross          #+#    #+#             */
/*   Updated: 2021/12/21 17:56:05 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_HPP
# define TEST_HPP

#include <iostream>

class Contact {

public:

	Contact(void);
	~Contact(void);

	std::string	get_data(int i) const;
	void		set_data(void);

private:

	std::string	_data[5];
	bool		_checkPhoneNumber(std::string const str) const;

};

# endif
