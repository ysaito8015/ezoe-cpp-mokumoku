int main()
{
	std::vector<int> a = { 1,2,3,3,4,5,3,4,5 } ;

	std::cout << "a: "s ;
	std::for_each( a.cbegin(), a.cend(),
			[](auto x) { std::cout << x << " "s ; } ) ;
	std::cout << "\n"s ;

	std::replace( std::begin(a), std::end(a), 3, 0 ) ;

	std::cout << "a: "s ;
	std::for_each( a.cbegin(), a.cend(),
			[](auto x) { std::cout << x << " "s ; } ) ;
	std::cout << "\n"s ;
}
