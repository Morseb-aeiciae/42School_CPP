#include "Whatever.hpp"

int main( void ) {

	std::cout << std::endl;
	int a = 2;
	int b = 3;

	std::cout << "\ta = " << a << ", b = " << b << std::endl;
	::swap( a, b );
	std::cout << "swap( a, b ) = " << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

// ------------------------------------

	std::cout << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";

	std::cout << "\tc = " << c << ", d = " << d << std::endl;
	::swap(c, d);
	std::cout << "swap( c, d ) = " << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	
	return 0;
}