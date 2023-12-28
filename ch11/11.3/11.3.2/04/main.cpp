int main()
{
	auto a = 123 ;
	auto b = 123l ;
	auto c = 123L ;

	std::cout << typeid(a).name() << "\n"s ;
	std::cout << typeid(b).name() << "\n"s ;
	std::cout << typeid(c).name() << "\n"s ;
}
