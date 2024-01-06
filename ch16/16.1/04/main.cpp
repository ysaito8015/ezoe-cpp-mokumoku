auto print_if_le_100 = []( auto first, auto last )
{
	for ( auto iter = first ; iter != last ; ++ iter )
	{
		if ( *iter <= 100 )
		{
			std::cout << *iter ;
		}
	}
} ;

auto print_twice = []( auto first, auto last )
{
	for ( auto iter = first ; iter != last ; ++ iter )
	{
		std::cout << 2 * (*iter) ;
	}
} ;

auto print_with_newline = []( auto first, auto last )
{
	for ( auto iter = first ; iter != last ; ++ iter )
	{
		std::cout << *iter << "\n"s ;
	}
} ;
