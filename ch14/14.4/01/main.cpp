int main()
{
	std::vector<int> v = { 1,2,3,4,5 } ;

	auto x = std::begin(v) ;
	auto y = x ;

	bool b1 = (x == y) ;
	bool b2 = (x != y) ;

	std::cout
		<< std::boolalpha
		<< "x: "s << *x << " y: " << *y << "\n"s
		<< "(x == y) : "s << b1 << "\n"s
		<< "(x != y) : "s << b2 << "\n"s ;

	++x ;

	bool b3 = (x == y) ;
	bool b4 = (x != y) ;

	std::cout
		<< "++x"s << "\n"s
		<< "x: "s << *x << " y: " << *y << "\n"s
		<< "(x == y) : "s << b3 << "\n"s
		<< "(x != y) : "s << b4 << "\n"s ;

}
