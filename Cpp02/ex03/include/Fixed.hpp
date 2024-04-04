/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 16:44:45 by macarval          #+#    #+#             */
/*   Updated: 2024/04/03 16:51:01 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

// Color codes as global variables
const std::string RESET = "\033[0m";
const std::string RED = "\033[31;1m";
const std::string GREEN = "\033[32;1m";
const std::string YELLOW = "\033[33;1m";
const std::string BLUE = "\033[34;1m";
const std::string PURPLE = "\033[35;1m";
const std::string CYAN = "\033[36;1m";
const std::string GRAY = "\033[37;1m";

class Fixed
{
	private:
		int					_fixed;
		static const int	_fract = 8;

	public:
		Fixed( void );
		Fixed( const int num );
		Fixed( const  float num );
		~Fixed( void );

		Fixed( const Fixed &copy );

		Fixed&				operator=( const Fixed &comp );

		Fixed				operator+( const Fixed &other );
		Fixed				operator-( const Fixed &other );
		Fixed				operator*( const Fixed &other );
		Fixed				operator/( const Fixed &other );

		Fixed&				operator++( void );
		Fixed				operator++( int );
		Fixed&				operator--( void );
		Fixed				operator--( int );

		bool				operator>( const Fixed &comp ) const;
		bool				operator<( const Fixed &comp ) const;
		bool				operator>=( const Fixed &comp ) const;
		bool				operator<=( const Fixed &comp ) const;
		bool				operator==( const Fixed &comp ) const;
		bool				operator!=( const Fixed &comp ) const;

		int					getRawBits( void ) const;
		void				setRawBits( int const raw );
		float				toFloat( void ) const;
		int					toInt( void ) const;

		static Fixed&		min(Fixed &comp1, Fixed &comp2);
		static const Fixed&	min(const Fixed &comp1, const Fixed &comp2);
		static Fixed&		max(Fixed &comp1, Fixed &comp2);
		static const Fixed&	max(const Fixed &comp1, const Fixed &comp2);
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif
