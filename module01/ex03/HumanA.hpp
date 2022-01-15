/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <alebross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 19:06:41 by alebross          #+#    #+#             */
/*   Updated: 2021/12/21 13:32:56 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <iostream>

class   HumanA
{
    public:
        HumanA(std::string str, Weapon& weaponREF);
        ~HumanA(void);

        void    attack(void) const;

    private:
        std::string const   _name;
        Weapon&             _weapon;
};

# endif