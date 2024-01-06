int main()
{
	std::vector<int> v = { 1,2,3,4,5 } ;

	auto is_100 = [](auto x){ return x == 100 ; } ;

	bool b = std::none_of( std::begin(v), std::end(v), is_100 ) ;
	std::cout << std::boolalpha << b << "\n"s ;

	bool c = std::none_of( std::begin(v), std::end(v),
			[](auto n){ return n == 4 ; } ) ;
	std::cout << std::boolalpha << c << "\n"s ;
}
