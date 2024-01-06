int main()
{
	std::vector<int> v = { 1,2,3,4,5 } ;

	auto is_3 = []( auto x ) { return x == 3 ; } ;

	auto i = std::find_if( std::begin(v), std::end(v), is_3 ) ;
	std::cout << "i: "s << *i << "\n"s ;

	auto j = std::find( std::begin(v), std::end(v), 3 ) ;
	std::cout << "j: "s << *j << "\n"s ;

	bool b = (i == j) ;
	std::cout << std::boolalpha << "b: "s << b << "\n"s ;

} ;
