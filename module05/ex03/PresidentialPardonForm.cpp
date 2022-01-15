/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <alebross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 17:43:24 by alebross          #+#    #+#             */
/*   Updated: 2022/01/08 15:49:26 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <fstream>

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Shrub Parent", 25, 5), _target(target)
{
	std::cout << YELLOW << "Presidential pardon form (" << this->_target << ") created." << WHITE << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << PINK << "Presidential pardon form (" << this->_target << ") destroyed." << WHITE << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) : Form(src.getName(), src.getGradeForSign(), src.getGradeForExec())
{
	this->_target = src.getTarget();
	std::cout << YELLOW << "Presidential pardon form (" << this->_target << ") copied." << WHITE << std::endl;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & src)
{
	this->_target = src.getTarget();
	return (*this);
}

std::string	PresidentialPardonForm::getTarget( void ) const
{
	return (this->_target);
}


void PresidentialPardonForm::execute(Bureaucrat const & bureaucrat) const
{
	if (bureaucrat.getGrade() > this->getGradeForExec()){
		std::string msg = "Presidential pardon form (" + this->_target + ") cannot be executed by bureaucrat " + bureaucrat.getName() + " grade " + std::to_string(bureaucrat.getGrade()) + " because this form need a grade <= " + std::to_string(this->getGradeForExec()) + " for be executed.";
		throw (Form::GradeTooLowException(msg.c_str()));
	}
	else if (!this->getSign()){
		std::string msg = "Presidential pardon form (" + this->_target + ") cannot be executed because he's not signed.";
		throw (Form::GradeTooLowException(msg.c_str()));
	}
	std::cout << GREEN << bureaucrat << " execute Presidential pardon form (" << this->_target << ")." << WHITE << std::endl;
	std::cout << this->_target << " been forgiven by Zafod Beeblebrox." << std::endl;
}