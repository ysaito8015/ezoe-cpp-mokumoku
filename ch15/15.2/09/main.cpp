void f( std::vector<int> & v )
{
	v.at(1234) = 5 ;
	std::cout << v.at(1234) << "\n"s ;
}

int main()
{
	std::vector<int> v (10000) ;

	f(v) ;
}
