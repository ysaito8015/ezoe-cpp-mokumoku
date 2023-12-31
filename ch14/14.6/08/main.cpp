auto output_all = []( auto first, auto last, auto output_iter )
{
	for ( auto iter = first ; iter != last ; ++iter, ++output_iter )
	{
		*output_iter = *iter ;
	}
} ;

int main()
{
	std::vector<int> source = { 1,2,3,4,5 } ;
	std::vector<int> destination(5) ;

	std::cout << "destination: "s << " "s ;
	output_all( std::begin(destination), std::end(destination),
							std::ostream_iterator<int>(std::cout) ) ;
	std::cout << "\n"s ;

	output_all( std::begin(source), std::end(source),
							std::begin( destination ) ) ;

	std::cout << "destination: "s << " "s ;
	output_all( std::begin(destination), std::end(destination),
							std::ostream_iterator<int>(std::cout) ) ;
	std::cout << "\n"s ;
}
