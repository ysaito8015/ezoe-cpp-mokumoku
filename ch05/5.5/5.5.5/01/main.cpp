int main()
{
	auto a = []()
	{
		std::cout << "a\n"s ;
		return false ;
	} ;
	auto b = []()
	{
		std::cout << "b\n"s ;
		return true ;
	} ;

	bool c = a() && b() ;
	std::cout << std::boolalpha << c << "\n"s ;
}
