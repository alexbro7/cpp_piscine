/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <alebross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 17:43:24 by alebross          #+#    #+#             */
/*   Updated: 2021/12/19 22:14:12 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

# define FRAGTRAP_HP 100
# define FRAGTRAP_EP 100
# define FRAGTRAP_AD 30

class FragTrap : public ClapTrap
{
	public:

		void	highFivesGuys(void) const;
		FragTrap(FragTrap const & src);
		FragTrap(std::string name);
		~FragTrap(void);

		FragTrap&	operator=(FragTrap const & src);

};

# endif
