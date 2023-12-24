int main()
{
	std::cout << std::boolalpha ;
	auto print = [](auto b)
	{ std::cout << b << "\n"s ; } ;

	print( true   == true  ) ;
	print( true   == false ) ;
	print( false  == true  ) ;
	print( false  == false ) ;

	print( true   != true  ) ;
	print( true   != false ) ;
	print( false  != true  ) ;
	print( false  != false ) ;
}
