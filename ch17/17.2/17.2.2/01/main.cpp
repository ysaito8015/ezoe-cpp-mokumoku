int main()
{
	int x = 0; 
	int y = x ;

	std::cout
		<< "x: "s << x << "\n"s
		<< "y: "s << y << "\n"s
		<< "\n"s ;

	y = 1 ;
	std::cout
		<< "x: "s << x << "\n"s
		<< "y: "s << y << "\n"s
		<< "\n"s ;

	int & ref = x ;
	ref = 1 ;
	std::cout
		<< "x: "s << x << "\n"s
		<< "y: "s << y << "\n"s
		<< "\n"s ;
}
