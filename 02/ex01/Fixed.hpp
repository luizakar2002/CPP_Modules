#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int _fpv;
		static const int _n_of_frbits = 8;
	public:
		Fixed( void );
		Fixed( int const n );
		Fixed( float const fl);
		Fixed( Fixed const & f );
		~Fixed( void );

		Fixed & operator=(Fixed const & rhs);
		int getRawBits(void) const;
		void setRawBits(int const raw);

		float toFloat( void ) const;
		int toInt( void ) const;
};

std::ostream & operator<<(std::ostream & out, Fixed const & value);

#endif