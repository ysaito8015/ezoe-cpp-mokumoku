int main()
{
	double a = 0xabc.0p0 ;
	double b = 0xde.fp5  ;

	std::cout
		<< a << " :\t" << std::bitset<8>(a) << "\t" << typeid(a).name() << "\t" << sizeof(a) << " bytes\n"s
		<< b << " :\t" << std::bitset<8>(b) << "\t" << typeid(b).name() << "\t" << sizeof(b) << " bytes\n"s ;
}
