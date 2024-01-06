auto all_of = []( auto first, auto last, auto pred )
{
	for ( iter = first ; iter != last ; ++iter )
	{
		if ( pred( *iter ) == false )
			return false ;
	}

	return true ;
} ;
