int main()
{
	std::vector<int> v = { 1,2,3,4,5 } ;
	auto gen_zero = []() { return 0 ; } ;

	std::cout << "v: "s ;
	std::for_each( v.cbegin(), v.cend(),
			[](auto x) { std::cout << x << " "s ; } ) ;
	std::cout << "\n"s ;

	std::generate_n( std::begin(v), 5, gen_zero ) ;

	std::cout << "v: "s ;
	std::for_each( v.cbegin(), v.cend(),
			[](auto x) { std::cout << x << " "s ; } ) ;
	std::cout << "\n"s ;
}
