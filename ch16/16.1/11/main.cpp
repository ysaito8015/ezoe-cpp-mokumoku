int main()
{
	std::vector<int> v = { 1,2,3,4,5 } ;

	std::for_each( v.cbegin(), v.cend(), []( auto value ) { std::cout << value ; } ) ;
	std::cout << "\n"s ;

	// increment elements in-place
	std::for_each( v.begin(), v.end(), [](int &n) { ++n ; } ) ;
	std::for_each( v.cbegin(), v.cend(), []( auto value ) { std::cout << value ; } ) ;
	std::cout << "\n"s ;

	struct Sum
	{
		void operator()(int n) { sum += n ; }
		int sum {0} ;
	} ;

	Sum s = std::for_each( v.cbegin(), v.cend(), Sum() ) ;
	std::cout << "sum:\t"s << s.sum << "\n"s ;
}
