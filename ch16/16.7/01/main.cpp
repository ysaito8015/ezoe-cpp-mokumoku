int main()
{
	std::vector<int> v = {1} ;
	auto i = std::begin(v) ;

	std::cout << "v: "s ;
	std::for_each(v.cbegin(), v.cend(),
			[]( auto x ) { std::cout << x << " "s ; } ) ;
	std::cout << "\n"s ;

	std::cout << "i: "s << *i << "\n"s ;
	*i = 2 ;
	std::cout << "i: "s << *i << "\n"s ;

	std::cout << "v: "s ;
	std::for_each(v.cbegin(), v.cend(),
			[]( auto x ) { std::cout << x << " "s ; } ) ;
	std::cout << "\n"s ;
}
