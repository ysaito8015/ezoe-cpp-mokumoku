int main()
{
	auto print = []( std::size_t s )
	{ std::cout << s << " bytes\n"s ; } ;

	std::cout << "float:\t\t " ;
	print( sizeof(float) ) ;
	std::cout << "double:\t\t" ;
	print( sizeof(double) ) ;
	std::cout << "long double:\t" ;
	print( sizeof(long double) ) ;
}
