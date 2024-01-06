auto is_all_of_odd = []( auto first, auto last )
{
	return std::all_of( first, last,
			[]( auto value ) { return value % 2 == 0 ; } ) ;
} ;

auto is_all_of_le_100 = []( auto first, auto last )
{
	return std::all_of( first, last,
			[]( auto value ) { return value <= 100 ; } ) ;
} ;
