int main()
{
	int a = 0 ;

	const int & b = a ;
	int const & c = a ;

	int & const d = a ; // main.cpp:8:21: error: ‘const’ qualifiers cannot be applied to ‘int&’
}
