int main()
{
	int hexadecimal = 0x123 ;

	int a = 0X123 ;

	int b = 0xa ;

	int c = 0xf ;

	std::cout << "hexadecmal: "<< std::dec << hexadecimal << "\n" ;
	std::cout << "hexadecmal: "<< std::hex << hexadecimal << "\n" ;

	std::cout << "a: "<< std::dec << a << "\n" ;
	std::cout << "a: "<< std::hex << a << "\n" ;

	std::cout << "b: "<< std::dec << b << "\n" ;
	std::cout << "b: "<< std::hex << b << "\n" ;

	std::cout << "c: "<< std::dec << c << "\n" ;
	std::cout << "c: "<< std::hex << c << "\n" ;
}
