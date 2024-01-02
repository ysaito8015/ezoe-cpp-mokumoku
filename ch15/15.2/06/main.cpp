int main()
{
	const int x = 0 ;
	int & ref = x ; // main.cpp:4:21: error: binding reference of type ‘int&’ to ‘const int’ discards qualifiers
	const int & cref = x ;
}
