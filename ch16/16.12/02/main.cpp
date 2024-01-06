int main()
{
	auto is_even = []( auto x ) { return x%2 == 0 ; } ;

	std::vector v = { 1,2,3,4,5,6,7,8,9 } ;

	std::cout << "v: "s ;
	std::for_each( v.cbegin(), v.cend(),
			[] ( auto x ) { std:: cout << x << " "s ; } ) ;
	std::cout << "\n"s ;

	auto last = std::remove_if( std::begin(v), std::end(v), is_even ) ;

	std::cout << *last << "\n"s ;

	std::cout << "v: "s ;
	v.erase(last, v.cend()) ;
	std::for_each( v.cbegin(), v.cend(),
			[] ( auto x ) { std:: cout << x << " "s ; } ) ;
	std::cout << "\n"s ;
}
