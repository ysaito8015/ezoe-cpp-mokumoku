void f( int & x )
{
	x = 3 ;
}

int main()
{
	int a = 1 ;
	std::cout << "a: "s << a << "\n"s ;
	f( a ) ;

	std::cout << "a: "s << a << "\n"s ;
}
