void f( std::string x )
{
	std::cout << x << "\n"s ;
}

int main()
{
	f( "hello"s ) ;
	[]( auto x ){ std::cout << x << "\n"s ; }( "hello"s ) ;

}
