int main()
{
	std::vector<int> v = {1,2,3} ;

	v.at(0) = v.at(2) ;

	for (std::size_t i = 0 ; i < 3 ; ++i )
	{
		std::cout << v.at(i) ;
	}
	std::cout << "\n"s ;
}
