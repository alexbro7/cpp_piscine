/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <alebross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 17:43:24 by alebross          #+#    #+#             */
/*   Updated: 2022/01/08 15:49:26 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << YELLOW << "Intern created." << WHITE << std::endl;
}

Intern::~Intern()
{
	std::cout << PINK << "Intern destroyed." << WHITE << std::endl;
}

Intern::Intern(Intern const & src)
{
	(void)src;
	std::cout << YELLOW << "Intern copied." << WHITE << std::endl;
}

Intern & Intern::operator=(Intern const & src)
{
	(void)src;
	return (*this);
}

static Form	*newRobotForm(std::string target)
{
	Form	*robot = new RobotomyRequestForm(target);
	return (robot);
}

static Form	*newPresidentForm(std::string target)
{
	Form	*president = new PresidentialPardonForm(target);
	return (president);
}

static Form	*newShrubberyForm(std::string target)
{
	Form	*shrubbery = new ShrubberyCreationForm(target);
	return (shrubbery);
}

Form	*Intern::makeForm(std::string formType, std::string formTarget)
{
	Form	*(*newForm[3])(std::string target) = { newRobotForm, newPresidentForm, newShrubberyForm};
	std::string	msg[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};

	for (int i = 0; i < 3; i++)
	{
		if (formType == msg[i])
			return newForm[i](formTarget);
	}
	std::cout << RED << "Intern can't make a form \"" << formType << "\" this form type doesn't exist." << WHITE << std::endl;
	return NULL;
}
