int main()
{
	int x = 0 ;
	auto f = [=](){ x = 1 ; } ;
	std::cout << f() << x << "\n"s ;
}
