auto f = []()
{ std::cout << 1 << "\n"s ;} ;

int main()
{
	std::cout << "defined in global f(): " ;
	f() ;

	auto f = []()
	{ std::cout << 2 << "\n"s ;} ;

	std::cout << "defined in main f(): " ;
	f() ;

	{
		std::cout << "defined in main f(): " ;
		f() ;

		auto f = []()
		{ std::cout << 3 << "\n"s ; } ;
		std::cout << "defined in block f(): " ;
		f() ;
	}

	std::cout << "defined in main f(): " ;
	f() ;
}
