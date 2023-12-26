int main()
{
	auto hello = []()
	{ std::cout << "hello\n"s ; } ;

loop :
	hello() ;
	goto loop ;
}
