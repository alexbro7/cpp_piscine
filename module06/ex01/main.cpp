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

#include "Data.hpp"
//#include <stdint>
#include <iostream>

static uintptr_t serialize(Data* data)
{
	return	(reinterpret_cast<uintptr_t>(data));
}

static Data* deserialize(uintptr_t raw)
{
	return	(reinterpret_cast<Data *>(raw));
}

int main(int ac, char **av) {
    if (ac != 2){
        std::cout << "Wrong arguments" << std::endl;
        return 0;
    }
	Data	data1(av[1]);
	uintptr_t	test = serialize(&data1);
	Data	*data2 = deserialize(test);
	std::cout << "Data address:\t\t\t"<< &data1 << std::endl;
	std::cout << "Data deserialized address:\t"<< data2 << std::endl;
	std::cout << "Data value:\t\t\t" << data1.getStr() << std::endl;
	std::cout << "Data deserialized value:\t" << (*data2).getStr() << std::endl;
    return 0;
}
