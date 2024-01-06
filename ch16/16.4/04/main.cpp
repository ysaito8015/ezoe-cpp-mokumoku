auto count = []( auto first, auto last, auto pred )
{
	auto counter = 0u ;
	for ( auto i = first ; i != last ; ++i )
	{
		if ( pred(*i) != false )
		{
			++counter ;
		}
	}
	return counter ;
} ;

int main()
{
	std::vector<int> v = { 1,2,1,1,3,3 } ;

	auto a = count_if( std::begin(v), std::end(v),
			[]( auto x ) { return x % 2 == 1 ; } ) ;
	auto b = count_if( std::begin(v), std::end(v),
			[]( auto x ) { return x % 2 == 0 ; } ) ;
	auto c = count_if( std::begin(v), std::end(v),
			[]( auto x ) { return x >= 2 ; } ) ;

	std::for_each(v.cbegin(), v.cend(),
			[]( auto n ) { std::cout << n << ", "s ; } ) ;
	std::cout << "\n"s ;

	std::cout
		<< "count odd  : " << a << "\n"s
		<< "count even : " << b << "\n"s
		<< "count ge 2 : " << c << "\n"s ;
}
