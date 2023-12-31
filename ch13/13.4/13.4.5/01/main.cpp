inline namespace A {
	int a { } ;
}

namespace B {
	int b { } ;
}

int main()
{
	a = 0 ;
	A::a = 0 ;

	b = 0 ;
	B::b = 0 ;

	std::cout
		<< a << A::a << "\n"s
		<< B::b << "\n"s ;
}
