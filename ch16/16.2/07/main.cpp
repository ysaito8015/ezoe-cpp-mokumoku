auto none_of = []( auto first, auto last, auto pred )
{
	for ( auto iter = first ; iter != last ; ++iter )
	{
		if ( pred(*iter) )
		{
			return false ;
		}
	}
	return true ;
} ;

int main()
{
	std::vector<int> v = { 1,2,3,4,5 } ;

	bool b = none_of(v.cbegin(), v.cend(),
			[](auto n){ return n == 5 ; } ) ;
	std::cout << std::boolalpha << b << "\n"s ;
}
