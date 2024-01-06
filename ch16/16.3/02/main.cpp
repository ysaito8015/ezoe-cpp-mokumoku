int main()
{
	std::vector<int> v = { 1,2,3,4,5 } ;

	auto pos = std::find( std::begin(v), std::end(v), 0 ) ;

	if ( pos != std::end(v) )
	{
		std::cout << "Found."s << "\n"s ;
	}
	else
	{
		std::cout << "Not found."s << "\n"s ;
	}
}
