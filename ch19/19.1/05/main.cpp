struct S
{
	int n ;
	S( int n )
		: n(n)
	{
		std::cout << "constructed: "s << n << "\n"s ;
	}

	~S()
	{
		std::cout << "destructed:  "s << n << "\n"s ;
	}
} ;
