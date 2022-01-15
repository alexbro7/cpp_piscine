/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <alebross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 17:43:24 by alebross          #+#    #+#             */
/*   Updated: 2022/01/07 15:46:34 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

# define WHITE "\033[m"
# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define BLUE "\033[0;34m"

# define CLAPTRAP_HP 10
# define CLAPTRAP_EP 10
# define CLAPTRAP_AD 0

class ClapTrap
{
	public:

		void			attack(std::string const & target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		
		ClapTrap(ClapTrap const & src);
		ClapTrap(std::string name);
		~ClapTrap(void);

		ClapTrap&	operator=(ClapTrap const & src);

	private:

		std::string		_name;
		unsigned int	_hitPoint;
		unsigned int	_energyPoint;
		unsigned int	_attackDamage;
};

# endif
