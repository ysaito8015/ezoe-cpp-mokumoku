int main()
{
	std::vector<int> v ;

	for ( auto i = std::begin(v), j = std::end(v) ;
				i != j ; ++i )
	{
		std::cout << *i << " "s ;
	}
	std::cout << "\n"s ;
}
