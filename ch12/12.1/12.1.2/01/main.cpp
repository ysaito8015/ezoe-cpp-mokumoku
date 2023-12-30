int main()
{
	auto a = 1.23456e2 ;
	auto b = 123456e-3 ;
	auto c = 123.456e0 ;
	auto d = 123.456E0 ;

	std::cout
		<< a << "\t:\t" << typeid(a).name() << "\t" << sizeof(a) << " bytes\n"s
		<< b << "\t:\t" << typeid(b).name() << "\t" << sizeof(b) << " bytes\n"s
		<< c << "\t:\t" << typeid(c).name() << "\t" << sizeof(c) << " bytes\n"s
		<< d << "\t:\t" << typeid(d).name() << "\t" << sizeof(d) << " bytes\n"s ;
}
