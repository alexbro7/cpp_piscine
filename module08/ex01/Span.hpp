/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <alebross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 17:43:24 by alebross          #+#    #+#             */
/*   Updated: 2021/12/19 22:14:12 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

class Span 
{
	public:

		void	addNumber(const int i);
		int		longestSpan(void) const;
		int		shortestSpan(void) const;

		Span(const unsigned int n);
		Span(Span const & src);
		~Span(void);
		Span&				operator=(Span const & src);

	private:

	unsigned int		_n;
	std::vector<int>	_v;
};
