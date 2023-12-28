int main()
{
	auto zero = 0b00000000 ;
	auto max  = 0b11111111 ;

	std::bitset<8>z(zero) ;
	std::bitset<8>m(max ) ;
	std::cout << zero << "    " << z << "\n"s ;
	std::cout << max  << "  " << m << "\n"s ;
}
