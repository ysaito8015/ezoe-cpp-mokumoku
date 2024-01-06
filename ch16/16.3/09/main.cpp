int main()
{
	int value = 123 ;

	auto f = [&]{ ++value ; } ;

	std::cout << value << "\n"s ;
	f() ;
	std::cout << value << "\n"s ;
}
