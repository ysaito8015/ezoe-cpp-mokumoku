namespace alice {
	int f() { return 0 ; }
}

namespace bob {
	int f() { return 1 ; }
}

int main()
{
	std::cout << alice::f() << "\n"s ;
	std::cout << bob::f() << "\n"s ;
}
