/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <alebross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 14:25:00 by alebross          #+#    #+#             */
/*   Updated: 2021/12/22 18:42:05 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class   Karen {

    public :
        Karen(void);
        ~Karen(void);
        void complain(std::string level);

    private :
        void    _debug(void) const;
        void    _info(void) const;
        void    _warning(void) const;
        void    _error(void) const;
        void    _other(void) const;
};