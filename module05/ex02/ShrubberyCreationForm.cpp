/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <alebross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 17:43:24 by alebross          #+#    #+#             */
/*   Updated: 2022/01/08 15:49:26 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shrub Parent", 145, 137), _target(target)
{
	std::cout << YELLOW << "Shrubbery creation form (" << this->_target << ") created." << WHITE << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << PINK << "Shrubbery creation form (" << this->_target << ") destroyed." << WHITE << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : Form(src.getName(), src.getGradeForSign(), src.getGradeForExec())
{
	this->_target = src.getTarget();
	std::cout << YELLOW << "Shrubbery creation form (" << this->_target << ") copied." << WHITE << std::endl;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & src)
{
	this->_target = src.getTarget();
	return (*this);
}

std::string	ShrubberyCreationForm::getTarget( void ) const
{
	return (this->_target);
}


void ShrubberyCreationForm::execute(Bureaucrat const & bureaucrat) const
{
	std::string	tree = "              * *           \n           *    *  *        \n      *  *    *     *  *    \n     *     *    *  *    *   \n * *   *    *    *    *   * \n *     *  *    * * .#  *   *\n *   *     * #.  .# *   *   \n  *     \"#.  #: #\" * *    * \n *   * * \"#. ##\"       *    \n   *       \"###             \n             \"##            \n              ##.           \n              .##:          \n              :###          \n              ;###          \n            ,####.          \n/\\/\\/\\/\\/\\/.######.\\/\\/\\/\\/\\\n";
	if (bureaucrat.getGrade() > this->getGradeForExec()){
		std::string msg = "Shrubbery creation form (" + this->_target + ") cannot be executed by bureaucrat " + bureaucrat.getName() + " grade " + std::to_string(bureaucrat.getGrade()) + " because this form need a grade <= " + std::to_string(this->getGradeForExec()) + " for be executed.";
		throw (Form::GradeTooLowException(msg.c_str()));
	}
	else if (!this->getSign()){
		std::string msg = "Shrubbery creation form (" + this->_target + ") cannot be executed because he's not signed.";
		throw (Form::GradeTooLowException(msg.c_str()));
	}
	std::cout << GREEN << bureaucrat << " execute shrubbery creation form (" << this->_target << ")." << WHITE << std::endl;
	std::ofstream	ofs(this->_target);
	if (!ofs)
	{
		std::string msg = "Can't open " + this->_target + ".";
		throw (Form::GradeTooLowException(msg.c_str()));
	}
	ofs << tree;
	ofs.close();
}