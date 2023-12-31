namespace A {
	int f() { return 0 ; }
}

namespace B {
	using namespace A ;
	int g()
	{
		return f() ;
	}
}

int main()
{
	std::cout << B::g() << "\n"s ;
}
