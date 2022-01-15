/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <alebross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 17:43:24 by alebross          #+#    #+#             */
/*   Updated: 2021/12/19 22:14:12 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	public:

		Fixed(void);
		~Fixed(void);
		Fixed(Fixed const & src);
		Fixed(int const entier);
		Fixed(float const entier);

		Fixed&	operator=(Fixed const & src);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

	private:

		int					_rawBits;
		static int const	_fractionalBits_nb = 8;
};
		std::ostream&	operator<<(std::ostream & ostream, Fixed const & src);

# endif
