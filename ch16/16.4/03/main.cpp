int main()
{
	std::vector<int> v = { 1,2,1,1,3,3 } ;

	auto a = std::count_if( std::begin(v), std::end(v),
			[]( auto x ) { return x % 2 == 1 ; } ) ;
	auto b = std::count_if( std::begin(v), std::end(v),
			[]( auto x ) { return x % 2 == 0 ; } ) ;
	auto c = std::count_if( std::begin(v), std::end(v),
			[]( auto x ) { return x >= 2 ; } ) ;

	std::for_each(v.cbegin(), v.cend(),
			[]( auto n ) { std::cout << n << ", "s ; } ) ;
	std::cout << "\n"s ;

	std::cout
		<< "count odd  : " << a << "\n"s
		<< "count even : " << b << "\n"s
		<< "count ge 2 : " << c << "\n"s ;
}
