/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <alebross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 17:40:20 by alebross          #+#    #+#             */
/*   Updated: 2022/01/08 16:30:42 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <iostream>

void    Form::beSigned(const Bureaucrat &bureaucrat){
    std::string s;
    s = "Bureaucrat " + bureaucrat.getName() + " grade " + std::to_string(bureaucrat.getGrade());
    if (bureaucrat.getGrade() > this->_gradeForSign){
        std::string msg = "Bureaucrat " + bureaucrat.getName() + " grade " + std::to_string(bureaucrat.getGrade()) + " cannot signs form " + this->_name + " because this form need a grade <= " + std::to_string(this->_gradeForSign) + " for signs it.";
        throw   Form::GradeTooLowException(msg.c_str());
    }
    else{
        std::cout << GREEN << "Bureaucrat " + bureaucrat.getName() + " signs form "  + this->_name << "." << WHITE << std::endl;
        this->_sign = 1;
    }
}

std::string const  Form::getName(void) const {
    return (this->_name);
}

bool    Form::getSign(void) const{
    return (this->_sign);
}

int     Form::getGradeForExec(void) const{
    return (this->_gradeForExec);
}

int     Form::getGradeForSign(void) const{
    return (this->_gradeForSign);
}

Form::Form(std::string name, int gradeForSign, int gradeForExec) : _name(name), _sign(0), _gradeForSign(gradeForSign), _gradeForExec(gradeForExec) {
	std::cout << YELLOW << *this << " created." << WHITE << std::endl;
    if (this->_gradeForSign > 150){
        std::string msg = "Form " + this->_name + " cannot wait a grade " + std::to_string(this->_gradeForSign) + " for sign, lowest grade = 150.";
        throw Form::GradeTooLowException(msg.c_str());
    }
    if (this->_gradeForExec > 150){
        std::string msg = "Form " + this->_name + " cannot wait a grade " + std::to_string(this->_gradeForExec) + " for execute, lowest grade = 150.";
        throw Form::GradeTooLowException(msg.c_str());
    }
    if (this->_gradeForSign < 1){
        std::string msg = "Form " + this->_name + " cannot wait a grade " + std::to_string(this->_gradeForSign) + " for sign, upest grade = 1.";
        throw Form::GradeTooHighException(msg.c_str());
    }
    if (this->_gradeForExec < 1){
        std::string msg = "Form " + this->_name + " cannot wait a grade " + std::to_string(this->_gradeForExec) + " for execute, upest grade = 1.";
        throw Form::GradeTooHighException(msg.c_str());
    }
}

Form::Form(Form const & src) : _name(src._name), _sign(src._sign), _gradeForSign(src._gradeForSign), _gradeForExec(src._gradeForExec){
	std::cout << YELLOW << *this << " copied." << WHITE << std::endl;
}

Form::~Form(){	
	std::cout << PINK << *this << " destroyed." << WHITE << std::endl;
}

Form&  Form::operator=(Form const & src) {
    this->_sign = src._sign;
    return (*this);
}

std::ostream    &operator<<(std::ostream &ostream, const Form &src)
{
    ostream << "Form " << src.getName() << ", grade for sign " << src.getGradeForSign() << ", grade for execut " << src.getGradeForExec() << (src.getSign() ? ", signed" : ",not signed");
    return (ostream);
}