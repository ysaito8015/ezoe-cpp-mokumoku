int main()
{
	auto a = 1.0 + 1 ;
	auto b = 1 + 1.0 ;

	auto c = 1.0f + 1 ;

	std::cout
		<< "a: "s << a << "\t"s << typeid(a).name() << "\t"s << sizeof(a) << "\n"s
		<< "b: "s << b << "\t"s << typeid(b).name() << "\t"s << sizeof(b) << "\n"s
		<< "c: "s << c << "\t"s << typeid(c).name() << "\t"s << sizeof(c) << "\n"s ;
}
