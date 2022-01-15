/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <alebross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 17:43:24 by alebross          #+#    #+#             */
/*   Updated: 2021/12/19 22:14:12 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DiamondTRAP_HPP
# define DiamondTRAP_HPP

# include <iostream>
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	public:

		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const & src);
		~DiamondTrap(void);

		DiamondTrap&	operator=(DiamondTrap const & src);

		void	whoAmI(void);
		using 	FragTrap::_hitPoint;
		using 	ScavTrap::_energyPoint;
		using 	FragTrap::_attackDamage;
		using 	ScavTrap::attack;

	private :

		std::string	_name;

};

# endif
