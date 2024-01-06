int main()
{
	std::vector<int> v = { 1,2,3,4,5 } ;

	bool has_3 = std::any_of( std::begin(v), std::end(v),
			[]( auto x ) { return x == 3 ; } ) ;
	std::cout << std::boolalpha << has_3 << "\n"s ;

	bool has_10 = std::any_of( std::begin(v), std::end(v),
			[]( auto x ) { return x == 10 ; } ) ;
	std::cout << std::boolalpha << has_10 << "\n"s ;
}
