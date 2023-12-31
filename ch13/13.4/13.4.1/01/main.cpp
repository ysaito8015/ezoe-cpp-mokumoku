int f() { return 0 ; }

namespace ns {
	int f() { return 1 ; }
}

int main()
{
	std::cout << f() << "\n"s ;
	std::cout << ns::f() << "\n"s ;
}
