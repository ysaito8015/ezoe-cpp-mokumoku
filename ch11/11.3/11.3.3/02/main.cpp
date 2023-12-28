int main()
{
	auto a = 123ll ;
	auto b = 123LL ;
	auto c = 123ull ;

	std::cout << typeid(a).name() << "\n"s ;
	std::cout << typeid(b).name() << "\n"s ;
	std::cout << typeid(c).name() << "\n"s ;
}
