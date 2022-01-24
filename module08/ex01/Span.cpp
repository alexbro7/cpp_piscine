/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <alebross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 17:40:20 by alebross          #+#    #+#             */
/*   Updated: 2021/12/22 19:52:58 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

int     Span::longestSpan(void) const{
    if (_v.size() <= 1)
		throw(std::out_of_range("Not enough elements for a span"));
	return (*std::max_element(_v.begin(), _v.end()) - *std::min_element(_v.begin(), _v.end()));
}

int     Span::shortestSpan(void) const{
    if (_v.size() <= 1)
		throw(std::out_of_range("Not enough elements for a span"));
    int ret = *std::max_element(_v.begin(), _v.end()) - *std::min_element(_v.begin(), _v.end());
    std::vector<int> v = _v;
    std::sort(v.begin(), v.end());
	for (unsigned int i = 1; i < v.size(); i++)
	{
		if (v[i] - v[i - 1] < ret)
		    ret = v[i] - v[i - 1];
	}
    return ret;
}

void    Span::addNumber(const int i){
    if (_v.size() >= _n)
        throw(std::out_of_range("Cannot add any more elements"));
    else
        _v.push_back(i);
}

Span::Span(unsigned int n) : _n(n) {
    _v.reserve(_n);	
	std::cout << "\033[0;33mSpan constructor called.\033[m" << std::endl;
}

Span::Span(Span const & src) : _n(src._n), _v(src._v) {
    _v.reserve(_n);	
	std::cout << "\033[0;33mSpan copy constructor called.\033[m" << std::endl;
}

Span::~Span(void) {
    std::cout << "\033[0;33mSpan disruptor called.\033[m" << std::endl;
}

Span&  Span::operator=(Span const & src) {
    std::cout << "\033[0;33mAssignation Span operator called\033[m" << std::endl;
    _n = src._n;
    _v.reserve(_n);	
    _v = src._v;
    return (*this);
}