struct S
{
	int x ;
	int member_function( int x )
	{
		return x ;
	}
} ;

int main()
{
	S a{1} ;
	std::cout << a.member_function(a.x) << "\n"s ;
} 
