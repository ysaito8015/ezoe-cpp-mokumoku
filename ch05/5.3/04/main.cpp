int main()
{
	if ( 1 == 1 )
	{ std::cout << "1 == 1 is true.\n"s ; }
	else
	{ std::cout << "1 == 1 is false.\n"s ; }

	auto x = 1 == 1 ;
	if ( x )
	{ std::cout << "1 == 1 is true.\n"s ; }
	else
	{ std::cout << "1 == 1 is false.\n"s ; }
}
