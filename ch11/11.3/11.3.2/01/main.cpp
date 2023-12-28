int main()
{
	long int a = 123 ;
	unsigned long int b = 123 ;

	std::cout << typeid(a).name() << "\n"s ;
	std::cout << typeid(b).name() << "\n"s ;
}
