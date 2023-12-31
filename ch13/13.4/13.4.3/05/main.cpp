namespace ns {
	namespace A { int x { } ; }
	namespace B = A ;

	int f() { return B::x ; }
	int g() { return B::x ; }
}

int h() { return B::x ; }

int main()
{
	std::cout
		<< ns::f() << "\n"s
		<< ns::g() << "\n"s
		<<     h() << "\n"s ;
}
