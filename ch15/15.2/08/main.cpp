void f( std::vector<int> & v )
{
	std::cout << v.at(1234) ;
}

int main()
{
	std::vector<int> v(10000) ;
	f( v ) ;
}
