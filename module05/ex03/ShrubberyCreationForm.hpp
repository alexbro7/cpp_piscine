/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <alebross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 17:43:24 by alebross          #+#    #+#             */
/*   Updated: 2022/01/08 15:49:26 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm();
		ShrubberyCreationForm(ShrubberyCreationForm const & ref);
		ShrubberyCreationForm & operator=(ShrubberyCreationForm const & ref);
		
		std::string	getTarget(void) const;
		
		void execute(Bureaucrat const & executor) const;
	private:
		std::string	_target;
};