/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                             	            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <alebross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 17:43:24 by alebross          #+#    #+#             */
/*   Updated: 2022/01/08 15:49:26 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Data{
	private:
		std::string	const	_str;
		
	public:

		std::string const getStr(void) const;
		Data(std::string const value);
		Data(Data const & src);
		~Data(void);
		Data&	operator=(Data const & src);
};