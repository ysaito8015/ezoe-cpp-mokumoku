int main()
{
	int x = 0 ;
	auto f = [=](){ return x ; } ;
	std::cout << f() << "\n"s ;
}
