int x ;

struct S
{
	int x ;
	void f( int x )
	{
		x = 0 ;
		S::x = 1 ;
		::x = 2 ;
	}
} ;

int main()
{

	S s{9} ;
	std::cout << "S::x: "s << x << "\n"s ;

	s.f(7) ;

	std::cout
		<< "x   : "s << x << "\n"s 
		<< "S::x: "s << s.x << "\n"s 
		<< "::x : "s << ::x << "\n"s  ;
}
