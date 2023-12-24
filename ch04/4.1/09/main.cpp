int main()
{
	auto f = [](auto a, auto b, auto c)
	{ return a + b + c ; } ;

	std::cout << f(1+(2*3), 4-5, 6/(7-8))) ;
}
