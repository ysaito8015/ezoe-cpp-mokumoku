int main()
{
		int min = std::numeric_limits<unsigned int>::min() ;
		int max = std::numeric_limits<unsigned int>::max() ;
		std::bitset<8>x(min) ;
		std::bitset<8>y(max) ;

		int min_minus_one = min - 1 ;
		int man_plus_one  = max + 1 ;
		std::bitset<8>a(min) ;
		std::bitset<8>b(max) ;

		std::cout
			<< "min:           " << min << "    " << x << "\n"s
			<< "max:           " << max << "   " << y << "\n"s
			<< "min_minus_one: " << min_minus_one << "   " << a << "\n"s
			<< "max_plus_one:  "  << man_plus_one << "    " << b << "\n"s ;
}
