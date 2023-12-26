int main()
{
	std::vector<int> v ;

	for ( int i = 0 ; i != 10 ; ++i )
	{
		v.push_back(i) ;
	}

	std::cout << v.at(0) ;
	std::cout << v.at(4) ;
	std::cout << v.at(9) ;
}
