int main()
{
	int x = 0 ;
	auto f = [&](){ ++x ; } ;

	std::cout
		<< "x: "s << x << "\n"s ;

	f() ;
	std::cout
		<< "x: "s << x << "\n"s ;

	f() ;
	std::cout
		<< "x: "s << x << "\n"s ;
}
