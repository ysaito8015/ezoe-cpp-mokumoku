int main()
{
	std::vector<int> v = { 1,2,3,4,5 } ;

	std::for_each( std::begin(v), std::end(v),
			[]( auto value ) { std::cout << value ; } ) ;
}
