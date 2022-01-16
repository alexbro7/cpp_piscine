/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                             	            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <alebross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 17:43:24 by alebross          #+#    #+#             */
/*   Updated: 2022/01/08 15:49:26 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template <typename T>
class Array{
	private:
		T*				_elem;
		unsigned int	_n;
	public:
		T 				*getArrayElem(unsigned int i) const{
			return _elem[i];
		}
		unsigned int	size(void) const{
			return _n;
		}
		Array(void) : _n = 0, _elem = NULL {
			std::cout << "Array created." << std::endl;
		}
		Array(unsigned int n) : _elem(new T[n]), _n(n){
			std::cout << "Array created." << std::endl;
		}
		Array(Array const & src) : _elem(new T[src.getLength()]), _n(src.getLength()) {
			for (unsigned int i = 0; i < _n; i++)
				_elem[i] = src.getArrayElem(i);
		 	std::cout << "Array copied." << std::endl;
		}
		~Array(void) {
			delete[] _elem;
			std::cout << "Array destroyed." << std::endl;
		}
		Array&	operator=(Array const & src){
			delete[] _elem;
			_n = src.getLength();
			_elem = new T[_n];
			for(unsigned int i = 0; i < _n; i++)
				_elem[i] = src.getArrayElem(i);
			return *this;
		}
};

std::ostream    &operator<<(std::ostream &ostream, const Array &src);
