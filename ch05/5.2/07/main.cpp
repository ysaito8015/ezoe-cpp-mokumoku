int main()
{
	auto cat = "cat"s ;
	auto dog = "dog"s ;

	if ( cat < dog )
	{
		std::cout << "cat is smaller.\n"s ;
	}
	else
	{
		std::cout << "dog is smaller.\n"s ;
	}

	auto longcat = "longcat"s ;

	if ( longcat > cat )
	{
		std::cout << "Longcat is Looong.\n"s ;
	}
	else
	{
		std::cout << "Longcat isn't that long. Sigh.\n"s ;
	}
}
