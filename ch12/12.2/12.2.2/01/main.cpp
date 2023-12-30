int main()
{
	double a = std::numeric_limits<double>::infinity() ;
	double b = -std::numeric_limits<double>::infinity() ;

	std::cout
		<< "a\t:\t" << std::bitset<8>(a) << "\t"s << a << "\n"s
		<< "b\t:\t" << std::bitset<8>(b) << "\t"s << b << "\n"s ;
}
