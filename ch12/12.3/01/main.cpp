int main()
{
	double a = 1.23456789 ;

	float b = a ;
	long double c = a ;

	std::cout
		<< "a : "s << a << " "s << sizeof(a) << " bytes\n"s
		<< "b : "s << b << " "s << sizeof(b) << " bytes\n"s
		<< "c : "s << c << " "s << sizeof(c) << " bytes\n"s ;
}
