int main()
{
	int binary = 0b1010 ;

	int a = 0B1010 ;

	std::cout << "binary: " << binary << "\n"s ;
	std::bitset<4>bin(binary) ;
	std::cout << "binary: " << bin << "\n"s ;

	std::cout << "a: " << a << "\n"s ;
	std::bitset<4>b(a) ;
	std::cout << "a: " << b << "\n"s ;
}
