int main()
{
	int a = 1 ;
	int b = 2 ;

	auto temp = a ;

	std::cout << "a: " << a << " " << "b: " << b << "\n"s ;
	a = b ;
	std::cout << "a: " << a << " " << "b: " << b << "\n"s ;
	b = temp ;
	std::cout << "a: " << a << " " << "b: " << b << "\n"s ;
}
