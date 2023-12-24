int main()
{
	auto print = [](auto x)
	{ std::cout << x << "\n"s ; } ;

	print( true  + true  ) ;
	print( true  + false ) ;
	print( false + true  ) ;
	print( false + false ) ;
}
