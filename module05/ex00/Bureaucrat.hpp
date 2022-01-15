/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <alebross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 17:43:24 by alebross          #+#    #+#             */
/*   Updated: 2022/01/08 15:49:26 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <exception>

class Bureaucrat{
	private:
		std::string const	_name;
		int					_grade;
		
	public:
		void				incrementGrade(void);
		void				decrementGrade(void);
		
		const std::string 	getName(void) const;
		int 				getGrade(void) const;

		class	GradeTooLowException : public std::exception{
			public:
    			GradeTooLowException(const char* msg) : _msg(msg){
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
    			GradeTooHighException(const char* msg) : _msg(msg){
				}

				virtual ~GradeTooHighException() _NOEXCEPT {};
				
				virtual const char * what() const _NOEXCEPT {
					return (_msg);
				}
			private:
				const char*	_msg;
		};
		
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const & src);
		~Bureaucrat(void);
		Bureaucrat&	operator=(Bureaucrat const & src);
};

std::ostream    &operator<<(std::ostream &ostream, const Bureaucrat &src);