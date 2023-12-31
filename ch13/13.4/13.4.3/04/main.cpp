namespace A { int x { } ; }

int f()
{
	namespace B = A ;
	return B::x ;
}

int g()
{
	return B::x ;
}

int main()
{
	std::cout << f() << "\n"s ;
	std::cout << g() << "\n"s ;
}
