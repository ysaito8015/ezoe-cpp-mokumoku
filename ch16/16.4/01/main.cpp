int main()
{
	std::vector<int> v = { 1,2,1,1,3,3 } ;

	auto a = std::count( std::begin(v), std::end(v), 1 ) ;
	auto b = std::count( std::begin(v), std::end(v), 2 ) ;
	auto c = std::count( std::begin(v), std::end(v), 3 ) ;

	std::cout
		<< "count 1 : " << a << "\n"s
		<< "count 2 : " << b << "\n"s
		<< "count 3 : " << c << "\n"s ;
}
