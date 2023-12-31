auto output_all = []( auto first, auto last )
{
	for ( auto iter = first ; iter != last ; ++iter )
	{
		std::cout << *iter << "\n"s ;
	}
} ;

int main()
{
	std::istream_iterator<int> first( std::cin ), last ;

	output_all( first, last ) ;
}
