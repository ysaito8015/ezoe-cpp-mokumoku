namespace abc {
	int f() { return 0 ; }
}

int f() { return 1 ; }

int main()
{
	using namespace abc ;

	std::cout
		<< abc::f() << "\n"s
		<< ::f()    << "\n"s ;
}
