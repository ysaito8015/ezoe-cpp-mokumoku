auto replace = []( auto first, auto last, auto old_value, auto new_value )
{
	for ( auto iter = first ; iter != last ; ++iter )
	{
		if ( *iter == old_value )
		{ *iter = new_value ; }
	}
} ;

int main()
{
	std::vector<int> a = { 1,2,3,3,4,5,3,4,5 } ;

	std::cout << "a: "s ;
	std::for_each( a.cbegin(), a.cend(),
			[](auto x) { std::cout << x << " "s ; } ) ;
	std::cout << "\n"s ;

	replace( std::begin(a), std::end(a), 3, 0 ) ;

	std::cout << "a: "s ;
	std::for_each( a.cbegin(), a.cend(),
			[](auto x) { std::cout << x << " "s ; } ) ;
	std::cout << "\n"s ;
}
