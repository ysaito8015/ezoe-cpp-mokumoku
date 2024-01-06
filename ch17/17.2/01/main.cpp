int main()
{
	auto message = "hello"s ;
	[=](){ std::cout << message << "\n"s ; }() ;
}
