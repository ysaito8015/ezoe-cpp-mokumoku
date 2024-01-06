int main()
{
	std::vector<int> source = { 1,2,3,4,5 } ;
	std::vector<int> destination(5) ;

	std::cout << "source:      "s ;
	std::for_each(source.cbegin(), source.cend(),
			[]( auto x ) { std::cout << x << " "s ; } ) ;
	std::cout << "\n"s ;

	std::cout << "destination: "s ;
	std::for_each(destination.cbegin(), destination.cend(),
			[]( auto x ) { std::cout << x << " "s ; } ) ;
	std::cout << "\n"s ;

	auto first = std::begin(source) ;
	auto last  = std::end(source) ;
	auto result = std::begin(destination) ;
	auto returned = std::copy( first, last, result ) ;

	std::cout << "destination: "s ;
	std::for_each(destination.cbegin(), destination.cend(),
			[]( auto x ) { std::cout << x << " "s ; } ) ;
	std::cout << "\n"s ;

	std::cout << "first: "s << *first << "\n"s ;
	std::cout << "last : "s << *last << "\n"s ;
	std::cout << "result: "s << *result << "\n"s ;
	std::cout << "returned: "s << *returned << "\n"s ;
	bool b = (returned == (result + (last - first))) ;

	std::cout << std::boolalpha
		<< "returned == (result + last - first): "s << b << "\n"s ;
}
