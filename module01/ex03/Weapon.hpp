/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <alebross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 15:23:43 by alebross          #+#    #+#             */
/*   Updated: 2021/12/21 13:28:50 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class	Weapon
{
	public :
		Weapon(std::string str);
		~Weapon(void);

		std::string	const	getType(void) const;
		void    			setType(std::string str);
		
	private :
		std::string	_type;
};

# endif