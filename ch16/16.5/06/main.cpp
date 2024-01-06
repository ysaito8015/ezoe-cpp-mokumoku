int main()
{
	std::vector<double> v = { 1.3, 2.2, 3.0, 4.9, 5.7 } ;
	std::vector<double> w = { 1.9, 2.4, 3.8, 4.5, 5.0 } ;

	auto comp = []( auto a, auto b )
	{
		return std::floor(a) == std::floor(b) ;
	} ;

	bool b = std::equal(
			std::begin(v), std::end(v),
			std::begin(w), std::end(w),
			comp ) ;

	std::cout << "v: "s ;
	std::for_each(v.cbegin(), v.cend(),
			[]( auto x ) { std::cout << x << " "s ; } ) ;
	std::cout << "\n"s ;

	std::cout << "w: "s ;
	std::for_each(w.cbegin(), w.cend(),
			[]( auto x ) { std::cout << x << " "s ; } ) ;
	std::cout << "\n"s ;

	std::cout << std::boolalpha
		<< "v == w: "s << b << "\n"s ;
}
