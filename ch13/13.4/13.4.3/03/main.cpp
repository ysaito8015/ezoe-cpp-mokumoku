namespace A::B::C {
	int f() { return 0 ; }
}

int main()
{
	namespace D = A::B::C ;
	std::cout << D::f() << "\n"s ;
}
