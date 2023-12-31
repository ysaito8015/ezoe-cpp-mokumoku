int main()
{
	std::vector<int> v = { 1,2,3,4,5 } ;

	auto i = std::begin(v) ;
	auto j = std::end(v) ;

	++i ;

	for ( ; i != j ; ++i )
	{
		std::cout << *i ;
	}
	std::cout << *i << "\n"s ;
}
