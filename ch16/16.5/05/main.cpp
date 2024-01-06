auto equal = []( auto first1, auto last1, auto first2 , auto last2)
{
	auto size1 = std::distance( first1, last1 ) ;
	auto size2 = std::distance( first2, last2 ) ;

	if ( size1 != size2 )
		return false ;

	for ( auto i = first1, j = first2 ;
			i != last1 ; ++i, ++j )
	{
		if ( *i != *j )
			return false ;
	}
	return true ;
} ;

int main()
{
	std::vector<int> a = { 1,2,3,4,5 } ;
	std::vector<int> b = { 1,2,3,4,5 } ;
	std::vector<int> c = { 1,2,3,4,5,6 } ;
	std::vector<int> d = { 1,2,3,4,6 } ;

	bool ab = equal(
			std::begin(a), std::end(a),
			std::begin(b), std::end(b) ) ;

	bool ac = equal(
			std::begin(a), std::end(a),
			std::begin(c), std::end(c) ) ;

	bool ad = equal(
			std::begin(a), std::end(a),
			std::begin(d), std::end(d) ) ;

	std::cout << "a: "s ;
	std::for_each(a.cbegin(), a.cend(),
			[]( auto x ) { std::cout << x << " "s ; } ) ;
	std::cout << "\n"s ;

	std::cout << "b: "s ;
	std::for_each(b.cbegin(), b.cend(),
			[]( auto x ) { std::cout << x << " "s ; } ) ;
	std::cout << "\n"s ;

	std::cout << "c: "s ;
	std::for_each(c.cbegin(), c.cend(),
			[]( auto x ) { std::cout << x << " "s ; } ) ;
	std::cout << "\n"s ;

	std::cout << "d: "s ;
	std::for_each(d.cbegin(), d.cend(),
			[]( auto x ) { std::cout << x << " "s ; } ) ;
	std::cout << "\n"s ;

	std::cout << std::boolalpha
		<< "a == b: "s << ab << "\n"s
		<< "a == c: "s << ac << "\n"s
		<< "a == d: "s << ad << "\n"s ;
}
