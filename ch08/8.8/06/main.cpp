int convert( int n ) ;

int input()
{
	std::cout << "> " ;
	int x{} ;
	std::cin >> x ;
	return x ;
}

void output( int binary )
{
	std::cout << binary << "\n"s ;
}

int main()
{
	while( true )
	{
		auto decimal = input() ;
		auto binary = convert( decimal ) ;
		output( binary ) ;
	}
}
