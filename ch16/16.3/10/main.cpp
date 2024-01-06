auto find = []( auto first, auto last, auto value )
{
	return std::find_if( first, last,
			[&]( auto elem ) { return value == elem ; } ) ;
} ;

int main()
{
	std::vector<int> v = { 1,2,3,4,5 } ;

	auto f = find( v.cbegin(), v.cend(), 3) ;

	std::cout << "f: "s << *f << "\n"s ;


}
