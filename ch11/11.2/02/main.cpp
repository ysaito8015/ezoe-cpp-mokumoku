int main()
{
	signed short a = 0b0'000'0000'0000'0001 ;
	signed short b = 0b0'000'0000'0000'0000 ;
	b -= 1 ;

	/*
	signed short x = std::numeric_limits<signed short>::min() ; // -32761
	std::bitset<16>xb(x) ;
	std::cout << xb << "\n"s ; // 0b1000'0000'0000'0000
	*/

	std::bitset<16>ab(a) ;
	std::bitset<16>bb(b) ;
	std::cout << a << "\t" << ab << "\t" << sizeof(a) << " bytes" << "\n"s ;
	std::cout << b << "\t" << bb << "\t" << sizeof(a) << " bytes" << "\n"s ;
}
