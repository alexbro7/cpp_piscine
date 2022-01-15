/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <alebross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 14:43:42 by alebross          #+#    #+#             */
/*   Updated: 2021/12/22 19:45:19 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>

int     main(int ac, char **av){
    if (ac < 2 || !av[1][0])
    {
        std::cerr << "No arguments" << std::endl;
        return (1);
    }
    if (ac > 2)
    {
        std::cerr << "Too many arguments" << std::endl;
        return (1);
    }
    Karen karen;
    karen.complain(av[1]);
    return (0);
}