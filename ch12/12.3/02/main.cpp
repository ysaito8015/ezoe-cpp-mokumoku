int main()
{
	auto a = 1.0f + 1.0f ;
	auto b = 1.0f + 1.0  ;
	auto c = 1.0f + 1.0l ;

	std::cout
		<< "float + float       : "s << a << " "s << typeid(a).name() << " "s << sizeof(a) << " bytes\n"s
		<< "float + double      : "s << b << " "s << typeid(b).name() << " "s << sizeof(b) << " bytes\n"s
		<< "float + long double : "s << c << " "s << typeid(c).name() << " "s << sizeof(c) << " bytes\n"s ;
}
