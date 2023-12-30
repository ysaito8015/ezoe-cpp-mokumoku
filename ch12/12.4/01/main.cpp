int main()
{
	double a = 1.9999 ;
	int x = a ;

	std::cout
		<< "a: "s << a << "\t"s << typeid(a).name() << "\t"s << sizeof(a) << "\n"s
		<< "x: "s << x << "\t\t"s << typeid(x).name() << "\t"s << sizeof(x) << "\n"s ;
}
