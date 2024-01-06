int main()
{
	std::vector<int> a = { 1,2,3,4,5 } ;

	std::vector<int> b(5) ;
	std::transform( std::begin(a), std::end(a), std::begin(b),
			[](auto x) { return 2 * x ; } ) ;

	std::vector<int> c(5) ;
	std::transform( std::begin(a), std::end(a), std::begin(c),
			[](auto x) { return x % 3 ; } ) ;

	std::vector<bool> d(5) ;
	std::transform( std::begin(a), std::end(a), std::begin(d),
			[](auto x) { return x < 3 ; } ) ;

	std::cout << "a: "s ;
	std::for_each( a.cbegin(), a.cend(),
			[]( auto x ) { std::cout << x << " "s ; } ) ;
	std::cout << "\n"s ;

	std::cout << "b: "s ;
	std::for_each( b.cbegin(), b.cend(),
			[]( auto x ) { std::cout << x << " "s ; } ) ;
	std::cout << "\n"s ;

	std::cout << "c: "s ;
	std::for_each( c.cbegin(), c.cend(),
			[]( auto x ) { std::cout << x << " "s ; } ) ;
	std::cout << "\n"s ;

	std::cout << "d: "s ;
	std::for_each( d.cbegin(), d.cend(),
			[]( auto x ) { std::cout << std::boolalpha << x << " "s ; } ) ;
	std::cout << "\n"s ;
}
