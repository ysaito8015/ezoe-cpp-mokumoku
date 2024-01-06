auto any_of = []( auto first, auto last, auto pred )
{
	for ( auto iter = first ; iter != last ; ++iter )
	{
		if ( pred( *iter ) )
		{
			return true ;
		}
	}
	return false ;
} ;

int main()
{
	std::vector<int> v = { 1,2,3,4,5 } ;

	bool has_3 = any_of(v.cbegin(), v.cend(),
			[](auto n){ return n == 3 ; } ) ;
	std::cout << std::boolalpha << has_3 << "\n"s ;

	bool has_10 = any_of(v.cbegin(), v.cend(),
			[](auto n){ return n == 10 ; } ) ;
	std::cout << std::boolalpha << has_10 << "\n"s ;
}
