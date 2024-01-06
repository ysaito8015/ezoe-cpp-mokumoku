auto generate = []( auto first, auto last, auto gen )
{
	for ( auto iter = first ; iter != last ; ++iter )
	{
		*iter = gen() ;
	}
} ;

auto generate_n = []( auto first, auto n, auto gen )
{
	for ( auto i = 0 ; i != n ; ++i, ++first )
	{
		*first = gen() ;
	}
} ;

int main()
{
	std::vector<int> v = { 1,2,3,4,5 } ;
	std::vector<int> w = { 1,2,3,4,5 } ;
	auto gen_zero = []() { return 0 ; } ;

	std::cout << "v: "s ;
	std::for_each( v.cbegin(), v.cend(),
			[](auto x) { std::cout << x << " "s ; } ) ;
	std::cout << "\n"s ;

	generate( std::begin(v), std::end(v), gen_zero ) ;

	std::cout << "v: "s ;
	std::for_each( v.cbegin(), v.cend(),
			[](auto x) { std::cout << x << " "s ; } ) ;
	std::cout << "\n"s ;

	std::cout << "w: "s ;
	std::for_each( w.cbegin(), w.cend(),
			[](auto x) { std::cout << x << " "s ; } ) ;
	std::cout << "\n"s ;

	generate_n( std::begin(w), 5, gen_zero ) ;

	std::cout << "w: "s ;
	std::for_each( w.cbegin(), w.cend(),
			[](auto x) { std::cout << x << " "s ; } ) ;
	std::cout << "\n"s ;
}
