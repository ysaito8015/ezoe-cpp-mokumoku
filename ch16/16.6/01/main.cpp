int main()
{
	std::vector<int> v1 = { 1,2,3,4,5,6,7,8,9 } ;
	std::vector<int> v2 = { 4,5,6 } ;

	bool a = (std::search(
			std::begin(v1), std::end(v1),
			std::begin(v2), std::end(v2) )) != std::end(v1);

	std::vector<int> v3 = { 1,3,5 } ;
	bool b = (std::search(
			std::begin(v1), std::end(v1),
			std::begin(v3), std::end(v3) )) != std::end(v1);

	std::cout << "v1: "s ;
	std::for_each( v1.cbegin(), v1.cend(),
			[]( auto x ) { std::cout << x << " "s ; } ) ;
	std::cout << "\n"s ;

	std::cout << "v2: "s ;
	std::for_each( v2.cbegin(), v2.cend(),
			[]( auto x ) { std::cout << x << " "s ; } ) ;
	std::cout << "\n"s ;

	std::cout << "v3: "s ;
	std::for_each( v3.cbegin(), v3.cend(),
			[]( auto x ) { std::cout << x << " "s ; } ) ;
	std::cout << "\n"s ;

	std::cout << std::boolalpha
		<< "v2 in v1: "s << a << "\n"s
		<< "v3 in v1: "s << b << "\n"s ;
}
