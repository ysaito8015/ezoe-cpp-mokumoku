namespace very_long_name {
	int f() { return 0 ; }
}

int main()
{
	namespace vln = very_long_name ;
	std::cout << vln::f() << "\n"s ;
}
