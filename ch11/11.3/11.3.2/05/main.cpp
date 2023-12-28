int main()
{
	auto a = 123ul ;
	auto b = 123lu ;

	std::cout << typeid(a).name() << "\n"s ;
	std::cout << typeid(b).name() << "\n"s ;
}
