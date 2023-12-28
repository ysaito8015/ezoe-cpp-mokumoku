int main()
{
	auto x = 123 ;
	auto y = 123u ;

	std::cout << typeid(x).name() << "\n"s ;
	std::cout << typeid(y).name() << "\n"s ;
}
