int main()
{
	auto swap = []( auto & a, auto & b )
	{
		auto temp = a ;
		a = b ;
		b = temp ;
	} ;

	int x = 1 ;
	int y = 2 ;
	std::cout << "x: "s << x << " y: "s << y << "\n"s ;
	swap(x, y) ;
	std::cout << "x: "s << x << " y: "s << y << "\n"s ;
}
