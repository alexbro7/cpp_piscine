/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <alebross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 19:06:41 by alebross          #+#    #+#             */
/*   Updated: 2021/12/21 14:51:17 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <iostream>

class   HumanB
{
    public:
        HumanB(std::string str);
        ~HumanB(void);

        void    attack(void) const;
        void    setWeapon(Weapon& weaponPTR);

    private:
        std::string const   _name;
        Weapon*             _weapon;
};

# endif