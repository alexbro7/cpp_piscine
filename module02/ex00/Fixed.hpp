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

class Fixed
{
	public:

		Fixed(void);
		~Fixed(void);
		Fixed(Fixed const & src);

		Fixed&	operator=(Fixed const & src);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

	private:

		int					_rawBits;
		static int const	_fractionalBits_nb = 8;
};

# endif