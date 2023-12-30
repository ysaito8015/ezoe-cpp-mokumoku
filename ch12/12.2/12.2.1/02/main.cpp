int main()
{
	double a = +0.0 ;
	double b = -0.0 ;

	bool c = a == b ;
	std::cout
		<< "a\t:\t" << std::bitset<8>(a) << "\n"s
		<< "b\t:\t" << std::bitset<8>(b) << "\n"s
		<< "a==b\t:\t" << std::boolalpha << c << "\n"s ;
}
