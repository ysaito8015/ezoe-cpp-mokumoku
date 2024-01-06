int main()
{
	int value = 123 ;

	auto f = [=]{ return value ; } ;

	std::cout << f() << "\n"s ;
}
