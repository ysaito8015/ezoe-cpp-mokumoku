int main()
{
	int n{} ;
	std::cin >> n ;
	if ( n < 1 )
		return -1 ;

	int sum = 1 ;
	for ( int i = 2 ; i <= n ; ++i )
	{
		sum += i ;

		std::cerr << "debug: "s << i << ", " << sum << "\n"s ;

	}
	std::cout << sum << "\n"s ;
}
