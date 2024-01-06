int main()
{
	std::vector<int> v ;

	bool b = std::all_of( std::begin(v), std::end(v),
			[](auto value) { return false ; } ) ;
	std::cout << std::boolalpha << b << "\n"s ;
}
