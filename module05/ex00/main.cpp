/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <alebross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 18:42:28 by alebross          #+#    #+#             */
/*   Updated: 2022/01/08 14:31:52 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int main(void) {
    try{
        Bureaucrat  john("john", 1);
        john.incrementGrade();
    }
    catch (std::exception &e){
		std::cerr << e.what() << std::endl; 
	}
    return 0;
}
