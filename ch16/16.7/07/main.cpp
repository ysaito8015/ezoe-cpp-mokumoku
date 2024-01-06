auto copy = []( auto first, auto last, auto result )
{
	for ( auto iter = first ; iter != last ; ++iter, ++result )
	{ *result = *iter ; }
} ;

int main()
{
	std::vector<int> source = { 1,2,3,4,5 } ;
	std::vector<int> destination(5) ;

	std::cout << "source:      "s ;
	std::for_each(source.cbegin(), source.cend(),
			[]( auto x ) { std::cout << x << " "s ; } ) ;
	std::cout << "\n"s ;

	std::cout << "destination: "s ;
	std::for_each(destination.cbegin(), destination.cend(),
			[]( auto x ) { std::cout << x << " "s ; } ) ;
	std::cout << "\n"s ;

	copy( std::begin(source), std::end(source), std::begin(destination) ) ;

	std::cout << "source:      "s ;
	std::for_each(source.cbegin(), source.cend(),
			[]( auto x ) { std::cout << x << " "s ; } ) ;
	std::cout << "\n"s ;

	std::cout << "destination: "s ;
	std::for_each(destination.cbegin(), destination.cend(),
			[]( auto x ) { std::cout << x << " "s ; } ) ;
	std::cout << "\n"s ;
}
