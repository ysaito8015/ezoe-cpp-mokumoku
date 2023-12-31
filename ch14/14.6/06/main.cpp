auto output_all = []( auto first, auto last, auto output_iter )
{
	for ( auto iter = first ; iter != last ; ++iter, ++output_iter )
	{
		*output_iter = *iter ;
	}
} ;

int main()
{
}
