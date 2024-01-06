int main()
{
	std::vector<int> v = { 1,2,3,4,5 } ;

	std::cout << "v: "s ;
	std::for_each( v.cbegin(), v.cend(),
			[]( auto x ) { std::cout << x << " "s ; } ) ;
	std::cout << "\n"s ;

	std::fill( std::begin(v), std::end(v), 0 ) ;

	std::cout << "v: "s ;
	std::for_each( v.cbegin(), v.cend(),
			[]( auto x ) { std::cout << x << " "s ; } ) ;
	std::cout << "\n"s ;
}
