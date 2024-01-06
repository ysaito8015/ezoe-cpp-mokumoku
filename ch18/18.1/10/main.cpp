struct S {
	int a ;
	double b ;
	std::string c ;
} ;

int main()
{
	S x{ 123, 1.23, "123" } ;

	S y = x ;

	std::cout
		<< std::boolalpha
		<< "x.a == y.a: "s << (x.a == y.a) << "\n"s
		<< "x.b == y.b: "s << (x.b == y.b) << "\n"s
		<< "x.c == y.c: "s << (x.c == y.c) << "\n"s ;

	std::cout << "\n"s ;

	std::cout
		<< std::boolalpha
		<< "&x.a == &y.a: "s << (&x.a == &y.a) << "\n"s
		<< "&x.b == &y.b: "s << (&x.b == &y.b) << "\n"s
		<< "&x.c == &y.c: "s << (&x.c == &y.c) << "\n"s ;
}
