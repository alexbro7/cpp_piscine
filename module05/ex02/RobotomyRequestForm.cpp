/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <alebross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 17:43:24 by alebross          #+#    #+#             */
/*   Updated: 2022/01/08 15:49:26 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <fstream>

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Shrub Parent", 72, 45), _target(target)
{
	std::cout << YELLOW << "Robotomy request form (" << this->_target << ") created." << WHITE << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << PINK << "Robotomy request form (" << this->_target << ") destroyed." << WHITE << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) : Form(src.getName(), src.getGradeForSign(), src.getGradeForExec())
{
	this->_target = src.getTarget();
	std::cout << YELLOW << "Robotomy request form (" << this->_target << ") copied." << WHITE << std::endl;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & src)
{
	this->_target = src.getTarget();
	return (*this);
}

std::string	RobotomyRequestForm::getTarget( void ) const
{
	return (this->_target);
}


void RobotomyRequestForm::execute(Bureaucrat const & bureaucrat) const
{
	if (bureaucrat.getGrade() > this->getGradeForExec()){
		std::string msg = "Robotomy request form (" + this->_target + ") cannot be executed by bureaucrat " + bureaucrat.getName() + " grade " + std::to_string(bureaucrat.getGrade()) + " because this form need a grade <= " + std::to_string(this->getGradeForExec()) + " for be executed.";
		throw (Form::GradeTooLowException(msg.c_str()));
	}
	else if (!this->getSign()){
		std::string msg = "Robotomy request form (" + this->_target + ") cannot be executed because he's not signed.";
		throw (Form::GradeTooLowException(msg.c_str()));
	}
	std::cout << GREEN << bureaucrat << " execute Robotomy request form (" << this->_target << ")." << WHITE << std::endl;
	int rand = std::rand() % 2;
	std::cout << "*drilling noise* ";
	if (rand == 1)
		std::cout << this->_target << " robotomization success." << std::endl;
	else
		std::cout << this->_target << " robotomization failure." << rand << std::endl;
}