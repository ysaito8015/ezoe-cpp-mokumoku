int main()
{
	int a = 1 ;
	int b = 2 ;

	std::cout << "a: "s << a << " b: "s << b << "\n"s ;
	b = a ;
	std::cout << "b = a"s << "\n"s ;
	std::cout << "a: "s << a << " b: "s << b << "\n"s ;

	b = 3 ;
	std::cout << "b = 3"s << "\n"s ;
	std::cout << "a: "s << a << " b: "s << b << "\n"s ;
}
