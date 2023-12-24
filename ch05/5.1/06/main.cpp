int main()
{
	auto x = 0 ;
	{
		auto x = 1 ;
		{
			auto x = 2 ;
			std::cout << x << "\n" ;
		}
		std::cout << x << "\n" ;
		x = 42 ;
		std::cout << x << "\n" ;
	}
	std::cout << x << "\n" ;
}
