int main()
{
	auto a = 1.0e0f ;
	auto b = 1.0e0  ;
	auto c = 1.0e0l ;

	std::cout
		<< a << "\t:\t" << typeid(a).name() << "\t" << sizeof(a) << " bytes\n"s
		<< b << "\t:\t" << typeid(b).name() << "\t" << sizeof(b) << " bytes\n"s
		<< c << "\t:\t" << typeid(c).name() << "\t" << sizeof(c) << " bytes\n"s ;
}
