int main()
{
	auto a = 123.456f ;
	auto b = 123.456F ;

	auto c = 123.456 ;

	auto d = 123.456l ;
	auto e = 123.456L ;

	std::cout
		<< a << "\t:\t" << typeid(a).name() << "\t" << sizeof(a) << " bytes\n"s
		<< b << "\t:\t" << typeid(b).name() << "\t" << sizeof(b) << " bytes\n"s
		<< c << "\t:\t" << typeid(c).name() << "\t" << sizeof(c) << " bytes\n"s
		<< d << "\t:\t" << typeid(d).name() << "\t" << sizeof(d) << " bytes\n"s
		<< e << "\t:\t" << typeid(e).name() << "\t" << sizeof(d) << " bytes\n"s ;
}
