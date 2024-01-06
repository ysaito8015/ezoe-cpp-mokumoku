auto find_if = []( auto first, auto last, auto pred )
{
	for ( auto iter = first ; iter != last ; ++iter )
	{
		if ( pred( *iter ) )
			return iter ;
	}
	return last ;
} ;
