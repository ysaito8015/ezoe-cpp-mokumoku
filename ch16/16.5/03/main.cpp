auto distance = []( auto first, auto last )
{
	return last - first ;
} ;

int main()
{
	std::vector<int> v = { 1,2,3,4,5 } ;

	std::cout << "v :"s ;
	std::for_each(v.cbegin(), v.cend(),
			[]( auto x ) { std::cout << x << " "s ; } ) ;
	std::cout << "\n"s ;

	std::cout << "distance: "s << distance( v.cbegin(), v.cend() ) << "\n"s ;
}
