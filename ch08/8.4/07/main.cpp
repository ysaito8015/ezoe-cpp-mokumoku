int main()
{
	for ( int a = 1, b = 1 ;
				a <= 9 ;
				++a, ++b,
				std::cout << "\n"s
			)
				std::cout << a*b << "\t"s ;
}
