struct point
{
	int x = 0 ;
	int y = 0 ;
} ;

int main()
{
	std::vector<point> ps ;

	int x {} ;
	int y {} ;

	while( std::cin >> x >> y )
	{
		if ( x == 0 && y == 0 )
			break ;
		ps.push_back( point{ x, y } ) ;
	}

	std::cout << "ps.x: "s ;
	std::for_each( ps.begin(), ps.end(),
			[](auto st){ std::cout << st.x << " "s ; } ) ;
	std::cout << "\n"s ;
	std::cout << "ps.y: "s ;
	std::for_each( ps.begin(), ps.end(),
			[](auto st){ std::cout << st.y << " "s ; } ) ;
	std::cout << "\n"s ;
}

