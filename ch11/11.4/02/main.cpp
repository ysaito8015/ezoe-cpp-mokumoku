int main()
{
	auto print = []( std::size_t s )
	{ std::cout << s << " bytes" << "\n"s ; } ;

	print( sizeof(char) ) ;
	print( sizeof(signed char) ) ;
	print( sizeof(unsigned char) ) ;
	print( sizeof(short) ) ;
	print( sizeof(unsigned short) ) ;
	print( sizeof(int) ) ;
	print( sizeof(unsigned int) ) ;
	print( sizeof(long) ) ;
	print( sizeof(unsigned long) ) ;
	print( sizeof(long long) ) ;
	print( sizeof(unsigned long long) ) ;
}
