int main()
{
	int a = 1 ;
	double b = a ;

	std::cout
		<< "a: "s << a << "\t"s << typeid(a).name() << "\t"s << sizeof(a) << "\n"s
		<< "b: "s << b << "\t"s << typeid(b).name() << "\t"s << sizeof(b) << "\n"s ;
}
