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

		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		float				toFloat(void) const;
		int					toInt(void) const;
		Fixed&				operator=(Fixed const & src);
		bool				operator>(Fixed const & f) const;
		bool				operator<(Fixed const & f) const;
		bool				operator>=(Fixed const & f) const;
		bool				operator<=(Fixed const & f) const;
		bool				operator==(Fixed const & f) const;
		bool				operator!=(Fixed const & f) const;
		Fixed				operator+(Fixed const &f);
		Fixed				operator-(Fixed const &f);
		Fixed				operator*(Fixed const &f);
		Fixed				operator/(Fixed const &f);
		Fixed				operator++(void);
		Fixed   			operator++(int);
		Fixed				operator--(void);
		Fixed   			operator--(int);
		static Fixed&  		min(Fixed& a, Fixed&b);
		static Fixed&  		max(Fixed& a, Fixed&b);
		static Fixed const& min(Fixed const& a, Fixed const& b);
		static Fixed const& max(Fixed const& a, Fixed const& b);

	private:

		int					_rawBits;
		static int const	_fractionalBits_nb = 8;
};
		std::ostream&	operator<<(std::ostream & ostream, Fixed const & src);

# endif
