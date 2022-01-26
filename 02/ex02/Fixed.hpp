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
		Fixed( const int n );
		Fixed( const float fl);
		Fixed( Fixed const & f );
		~Fixed( void );

		Fixed & operator=(Fixed const & rhs);

		bool operator>(Fixed const &other) const;
		bool operator<(Fixed const &other) const;
		bool operator>=(Fixed const &other) const;
		bool operator<=(Fixed const &other) const;
		bool operator==(Fixed const &other) const;
		bool operator!=(Fixed const &other) const;

		Fixed operator+(Fixed const &other);
		Fixed operator-(Fixed const &other);
		Fixed operator*(Fixed const &other);
		Fixed operator/(Fixed const &other);
		
		int getRawBits(void) const;
		void setRawBits(int const raw);

		float toFloat( void ) const;
		int toInt( void ) const;
};

std::ostream & operator<<(std::ostream & out, Fixed const & value);

#endif