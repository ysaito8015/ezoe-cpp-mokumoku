int input()
{
	int x{} ;
	std::cin >> x ;
	return x ;
}

int main()
{
	std::vector<int> v ;
	int x{} ;

	while ( ( x = input() ) != 0 )
	{
		v.push_back(x) ;
	}

	for ( std::size_t index = v.size()-1 ; index != 0 ; --index )
	{
		std::cout << v.at(index) << " "s ;
	}
	std::cout << v.at(0) << "\n"s ;
}
