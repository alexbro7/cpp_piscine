/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                             	            :+:      :+:    :+:   */
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

		unsigned int	size(void) const{
			return _n;
		}
		Array(void) : _n(1), _elem(new T[_n], _elem[0](0)) {
			std::cout << "Array created." << std::endl;
		}
		Array(unsigned int n) : _elem(new T[n]), _n(n){
			for(unsigned int i = 0; i < _n; i++)
				_elem[i] = 0;
			std::cout << "Array created." << std::endl;
		}
		Array(Array const & src) : _elem(new T[src.getLength()]), _n(src.getLength()) {
			for (unsigned int i = 0; i < _n; i++)
				_elem[i] = src[i];
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
				_elem[i] = src[i];
			return *this;
		}
		T&	operator[](unsigned int i)
		{
			if (i >= _n)
				throw (std::exception());
			else
				return (*(_elem + i));
		}
};