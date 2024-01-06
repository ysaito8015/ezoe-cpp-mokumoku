int main()
{
	auto f = []( auto x )
	{ std::cout << x << "\n"s ; } ;

	f(0) ;
	f(1.0) ;
	f("hello"s) ;

}
