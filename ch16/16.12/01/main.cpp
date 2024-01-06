int main()
{
	std::vector<int> v = { 1,2,3 } ;

	std::cout << "v: "s ;
	std::for_each(v.cbegin(), v.cend(),
			[]( auto x ) { std::cout << x << " "s ; } ) ;
	std::cout << "\n"s ;

	auto last = std::remove( std::begin(v), std::end(v), 2 ) ;

	std::cout << "v: "s ;
	std::for_each(std::begin(v), last,
			[]( auto x ) { std::cout << x << " "s ; } ) ;
	std::cout << "\n"s ;

	std::vector<int> w = { 1,2,2,3,2,2,4 } ;

	std::cout << "w: "s ;
	std::for_each(w.cbegin(), w.cend(),
			[]( auto x ) { std::cout << x << " "s ; } ) ;
	std::cout << "\n"s ;

	auto last2 = std::remove( std::begin(w), std::end(w), 2 ) ;

	std::cout << "w: "s ;
	std::for_each(std::begin(w), last2,
			[]( auto x ) { std::cout << x << " "s ; } ) ;
	std::cout << "\n"s ;
}
