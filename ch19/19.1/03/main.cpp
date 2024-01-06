struct S
{
	int x ;
	S( int x )
		{
			S::x = x ;
		}
} ;

int main()
{
	S a(1) ;
	S b(2) ;
	S c(3) ;

	std::cout
		<< "a.x: "s << a.x << "\n"s
		<< "b.x: "s << b.x << "\n"s
		<< "c.x: "s << c.x << "\n"s ;
}
