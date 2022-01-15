/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <alebross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 17:43:24 by alebross          #+#    #+#             */
/*   Updated: 2021/12/19 22:14:12 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

# define SCAVTRAP_HP 100
# define SCAVTRAP_EP 50
# define SCAVTRAP_AD 20

class ScavTrap : public ClapTrap
{
	public:

		void			attack(std::string const & target);
		void			guardGate(void);
		
		ScavTrap(ScavTrap const & src);
		ScavTrap(std::string name);
		~ScavTrap(void);

		ScavTrap&	operator=(ScavTrap const & src);

};

# endif
