int main()
{
	int a = 0 ;
	int b = 1 ;

	int temp = a ;
	std::cout << "a: " << a << " b: " << b << "\n"s ;
	a = b ;
	std::cout << "a: " << a << " b: " << b << "\n"s ;
	b = temp ;
	std::cout << "a: " << a << " b: " << b << "\n"s ;
}
