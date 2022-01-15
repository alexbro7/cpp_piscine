/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <alebross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 17:43:24 by alebross          #+#    #+#             */
/*   Updated: 2022/01/08 16:30:45 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat; // forward declarat

class Form{
	private:
		std::string const	_name;
		bool				_sign;
		const int			_gradeForSign;
		const int			_gradeForExec;	
			
	public:
		
		const std::string 	getName(void) const;
		bool 				getSign(void) const;
		int					getGradeForSign(void) const;
		int					getGradeForExec(void) const;
		void				beSigned(const Bureaucrat &bureaucrat);

		class	GradeTooLowException : public std::exception{
			public:
    			GradeTooLowException(const char* msg) : _msg (msg){
				}

				virtual ~GradeTooLowException() _NOEXCEPT {};
				
				virtual const char * what() const _NOEXCEPT {
					return (_msg);
				}
			private:
				const char*	_msg;	
		};

		class	GradeTooHighException : public std::exception{
			public:
    			GradeTooHighException(const char* msg) : _msg (msg){
				}

				virtual ~GradeTooHighException() _NOEXCEPT {};
				
				virtual const char * what() const _NOEXCEPT {
					return (_msg);
				}
			private:
				const char*	_msg;	
		};
		
		Form(std::string name, int gradForSign, int gradeForExec);
		Form(Form const & src);
		~Form(void);
		Form&	operator=(Form const & src);
};

std::ostream    &operator<<(std::ostream &ostream, const Form &src);