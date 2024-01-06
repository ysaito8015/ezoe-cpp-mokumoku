int main()
{
	std::vector<int> v = { 1,2,3 } ;

	std::cout << "v: "s ;
	std::for_each(v.cbegin(), v.cend(),
			[]( auto x ) { std::cout << x << " "s ; } ) ;
	std::cout << "\n"s ;

	std::copy( std::begin(v), std::end(v), std::begin(v) ) ;

	std::cout << "v: "s ;
	std::for_each(v.cbegin(), v.cend(),
			[]( auto x ) { std::cout << x << " "s ; } ) ;
	std::cout << "\n"s ;
}
