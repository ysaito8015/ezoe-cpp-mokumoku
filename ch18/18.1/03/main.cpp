int main()
{
	std::vector<int> xs ;
	std::vector<int> ys ;

	int x {} ;
	int y {} ;
	while ( std::cin >> x >> y )
	{
		if (x == 0 and y == 0)
			break ;
		xs.push_back(x) ;
		ys.push_back(y) ;
	}

	std::cout << "xs: "s ;
	std::for_each(xs.begin(), xs.end(),
			[](auto x){ std::cout << x << " "s ; } ) ;
	std::cout << "\n"s ;

	std::cout << "ys: "s ;
	std::for_each(ys.begin(), ys.end(),
			[](auto x){ std::cout << x << " "s ; } ) ;
	std::cout << "\n"s ;
}
