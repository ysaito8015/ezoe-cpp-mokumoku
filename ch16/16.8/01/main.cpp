auto transform = []( auto first, auto last, auto result, auto op )
{
	for ( auto iter = first ; iter != last ; ++iter, ++result )
	{ *result = op( *iter ) ; }

	return result ;
} ;

int main() { }
