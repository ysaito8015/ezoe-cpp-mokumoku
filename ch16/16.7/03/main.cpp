int main()
{
	std::vector<int> source = { 1,2,3,4,5 } ;
	std::vector<int> destination(5) ;

	std::cout << "source: "s ;
	std::for_each( source.cbegin(), source.cend(),
			[]( auto x ) { std::cout << x << " "s ; } ) ;
	std::cout << "\n"s ;

	std::cout << "destination: "s ;
	std::for_each( destination.cbegin(), destination.cend(),
			[]( auto x ) { std::cout << x << " "s ; } ) ;
	std::cout << "\n"s ;


	destination[0] = source[0] ;
	destination[1] = source[1] ;
	destination[2] = source[2] ;
	destination[3] = source[3] ;
	destination[4] = source[4] ;

	std::cout << "source: "s ;
	std::for_each( source.cbegin(), source.cend(),
			[]( auto x ) { std::cout << x << " "s ; } ) ;
	std::cout << "\n"s ;

	std::cout << "destination: "s ;
	std::for_each( destination.cbegin(), destination.cend(),
			[]( auto x ) { std::cout << x << " "s ; } ) ;
	std::cout << "\n"s ;

}
