struct S
{
	int x ;
	void print()
	{
		std::cout << x << "\n"s ;
	} ;
} ;

int main()
{
	S s1{1} ;
	std::cout << "s1.x: "s ;
	s1.print() ;

	S s2{2} ;
	std::cout << "s2.x: "s ;
	s2.print() ;
}
