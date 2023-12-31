int main()
{
	std::vector<int> v = { 1,2,3,4,5 } ;

	for ( std::size_t i = 0 ; i != std::size(v) ; ++i )
	{
		std::cout << v.at(i) << "\n"s ;
	}
}
