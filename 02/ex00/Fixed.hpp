#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int _fpv;
		static const int _n_of_frbits = 8;
	public:
		Fixed( void );
		Fixed( Fixed const & f );
		~Fixed( void );

		Fixed & operator=(Fixed const & rhs);
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif