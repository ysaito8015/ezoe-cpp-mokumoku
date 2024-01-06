struct S
{
	S()
		: S(1)
	{
		std::cout << "delegating constructor\n"s ;
	}

	S( int n )
	{
		std::cout << "constructor\n"s ;
	}
} ;

int main()
{
	S s ;
}
