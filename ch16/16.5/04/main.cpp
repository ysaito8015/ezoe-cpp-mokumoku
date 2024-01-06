int main()
{
	std::vector<int> v = { 1,2,3,4,5 } ;

	auto first = std::begin(v) ;
	auto last = std::end(v) ;

	auto size = std::distance( first, last ) ;

	auto size_from_next = std::distance( first + 1, last ) ;

	std::cout
		<< "v    : "s ;
	std::for_each(v.cbegin(), v.cend(),
			[]( auto x ) { std::cout << x << " "s ; } ) ;
	std::cout << "\n"s ;

	std::cout
		<< "first: "s << *first << "\n"s
		<< "last : "s << *last  << "\n"s
		<< "size : "s << size << "\n"s
		<< "size_from_next: "s << size_from_next << "\n"s ;
}
