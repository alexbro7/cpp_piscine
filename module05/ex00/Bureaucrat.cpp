/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <alebross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 17:40:20 by alebross          #+#    #+#             */
/*   Updated: 2022/01/08 15:49:43 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>


void                Bureaucrat::incrementGrade(void) {
    std::cout << "Incrementing " << *this << std::endl;
    if (this->_grade == 1){
            std::string msg = "Bureaucrat " + this->_name + " grade " + std::to_string(this->_grade) + " cannot be incremented it's already at his upest level.";
        throw Bureaucrat::GradeTooHighException(msg.c_str());
    }
    else
        this->_grade -= 1;
}

void                Bureaucrat::decrementGrade(void) {
    std::cout << "Decrementing " << *this << std::endl;
    if (this->_grade == 150){
        std::string msg = "Bureaucrat " + this->_name + " grade " + std::to_string(this->_grade) + " cannot be decremented it's already at his lowest level.";
        throw Bureaucrat::GradeTooLowException(msg.c_str());
    }
    else
        this->_grade += 1;
}

std::string const  Bureaucrat::getName(void) const {
    return (this->_name);
}

int          Bureaucrat::getGrade(void) const{
    return (this->_grade);
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
    std::cout << "Creating " << *this << std::endl;
    if (grade < 1){
        std::string msg = "Bureaucrat " + this->_name + " cannot get a grade " + std::to_string(this->_grade) + ", upest grade = 1.";
        throw Bureaucrat::GradeTooHighException(msg.c_str());
    }
    if (grade > 150){
        std::string msg = "Bureaucrat " + this->_name + " cannot get a grade " + std::to_string(this->_grade) + ", lowest grade = 150.";
        throw Bureaucrat::GradeTooLowException(msg.c_str());
    }
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) : _name(src._name), _grade(src._grade){
	std::cout << *this << " copied." << std::endl;
}

Bureaucrat::~Bureaucrat(){	
	std::cout << *this << " destroyed." << std::endl;
}

Bureaucrat&  Bureaucrat::operator=(Bureaucrat const & src) {
    std::cout << *this << " assigned." << std::endl;
    this->_grade = src._grade;
    return (*this);
}
std::ostream    &operator<<(std::ostream &ostream, const Bureaucrat &src)
{
    ostream << src.getName() << " buraucrat grade " << src.getGrade();
    return (ostream);
}