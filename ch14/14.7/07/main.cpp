int main()
{
	std::vector<int> v = { 1,2,3,4,5 } ;

	for ( std::size_t i = 1 ; i < 5 ; ++i )
	{
		std::cout << v.at(i) << " "s ;
	}
	std::cout << "\n"s ;
}
