/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <alebross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 18:42:28 by alebross          #+#    #+#             */
/*   Updated: 2022/01/16 18:24:06 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <ctime>

void    test1(){
    Span span(2000000);
    for (int i = 0; i< 2000000; i++){
        // if (i == 0)
        //     span.addNumber(5);
        // else
            span.addNumber(i * 10);
    }
    std::cout << std::endl << span.longestSpan() << std::endl;
    std::cout << span.shortestSpan() << std::endl;
}

void    test2(){
    int n;
    srand(time(0));
    Span span(16);
    for (int i = 0; i < 4; i++){
        n = std::rand() % 100;
        std::cout << n << std::endl;
        span.addNumber(n);
    }
    std::cout << std::endl << span.longestSpan() << std::endl;
    std::cout << span.shortestSpan() << std::endl;
}

int main() {
    test1();
    return 0;
}