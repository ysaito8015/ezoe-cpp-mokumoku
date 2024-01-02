void f( std::vector<int> const & v )
{
	v.at(1234) = 5 ; // main.cpp:3:20: error: assignment of read-only location ‘(& v)->std::vector<int>::at(1234)’
	std::cout << v.at(1234) << "\n"s ;
}

int main()
{
	std::vector<int> v (10000) ;

	f(v) ;
}
