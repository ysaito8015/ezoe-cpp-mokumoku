int f( int x = 0 )
{ return x ;}

int main()
{
	auto a = f() ;
	auto b = f(1) ;
	std::cout
		<< "f() : "s << a << "\n"s
		<< "f(1): "s << b << "\n"s ;
}
