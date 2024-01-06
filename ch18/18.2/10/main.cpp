struct S
{
	int x ;
	void f( int x )
	{
		x = x ;
	}
} ;

int main()
{
	S s{0} ;

	std::cout << "s.x: "s << s.x << "\n"s ;

	s.f(1) ;
	std::cout << "s.x: "s << s.x << "\n"s ;
}
