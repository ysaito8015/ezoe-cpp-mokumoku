int main()
{
	auto print = [](auto x)
	{
		std::cout << x << "\n"s ;
	} ;

	print(123) ;
	print(3.14) ;
	print("hello") ;
}
