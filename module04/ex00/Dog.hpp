/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <alebross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 17:43:24 by alebross          #+#    #+#             */
/*   Updated: 2021/12/19 22:14:12 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Dog_HPP
# define Dog_HPP

# include <iostream>
# include "Animal.hpp"

class Dog : public Animal
{
	public:

		virtual void	makeSound(void) const;
		std::string const	getType(void) const;

		Dog(void);
		Dog(Dog const & src);
		~Dog(void);

		Dog&	operator=(Dog const & src);

};

# endif
