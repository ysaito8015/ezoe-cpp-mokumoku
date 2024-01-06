int main()
{
	std::vector<int> a = { 1,2,3,4,5 } ;
	std::vector<int> b = { 1,2,3,4,5 } ;
	std::vector<int> c = { 1,2,3,4,5,6 } ;
	std::vector<int> d = { 1,2,3,4,6 } ;

	bool ab = std::equal(
			std::begin(a), std::end(a),
			std::begin(b), std::end(b) ) ;

	bool ac = std::equal(
			std::begin(a), std::end(a),
			std::begin(c), std::end(c) ) ;

	bool ad = std::equal(
			std::begin(a), std::end(a),
			std::begin(d), std::end(d) ) ;

	std::cout << "a: "s ;
	std::for_each(a.cbegin(), a.cend(),
			[]( auto x ) { std::cout << x << " "s ; } ) ;
	std::cout << "\n"s ;

	std::cout << "b: "s ;
	std::for_each(b.cbegin(), b.cend(),
			[]( auto x ) { std::cout << x << " "s ; } ) ;
	std::cout << "\n"s ;

	std::cout << "c: "s ;
	std::for_each(c.cbegin(), c.cend(),
			[]( auto x ) { std::cout << x << " "s ; } ) ;
	std::cout << "\n"s ;

	std::cout << "d: "s ;
	std::for_each(d.cbegin(), d.cend(),
			[]( auto x ) { std::cout << x << " "s ; } ) ;
	std::cout << "\n"s ;

	std::cout << std::boolalpha
		<< "a == b: "s << ab << "\n"s
		<< "a == c: "s << ac << "\n"s
		<< "a == d: "s << ad << "\n"s ;
}
