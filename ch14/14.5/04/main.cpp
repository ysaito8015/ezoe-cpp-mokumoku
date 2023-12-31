int main()
{
	std::vector<int> v = { 1,2,3 } ;

	auto x = std::begin(v) ;
	auto y = std::end(v) ;

	std::cout << "vector v:\t" ;
	for (std::size_t i = 0 ; i != std::size(v) ; ++i) {
		std::cout << v.at(i) << " " ;
	}
	std::cout << "\n"s ;

	std::cout
		<< "x: "s << *x << " y: "s << *y << "\n"s
		<< "x == y:\t"s << std::boolalpha << (x == y) << "\n"s
		<< "++x"s << "\n"s ;
	++x ;
	std::cout
		<< "x: "s << *x << " y: "s << *y << "\n"s
		<< "x == y:\t"s << std::boolalpha << (x == y) << "\n"s
		<< "++x"s << "\n"s ;
	++x ;
	std::cout
		<< "x: "s << *x << " y: "s << *y << "\n"s
		<< "x == y:\t"s << std::boolalpha << (x == y) << "\n"s
		<< "++x"s << "\n"s ;
	++x ;
	std::cout
		<< "x: "s << *x << " y: "s << *y << "\n"s
		<< "x == y:\t"s << std::boolalpha << (x == y) << "\n"s
		<< "++x"s << "\n"s ;
}
