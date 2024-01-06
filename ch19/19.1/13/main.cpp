struct fractional
{
	int num ;
	int denom ;

	fractional( int num, int denom = 1 )
		: num(num), denom(denom)
	{ }
} ;

int main()
{
	fractional a = 1 ;
	fractional b(1, 2) ;
	fractional c{1, 2} ;

	std::cout
		<< "a.num, a.denom: "s << a.num << ", "s << a.denom << "\n"s
		<< "b.num, b.denom: "s << b.num << ", "s << b.denom << "\n"s
		<< "c.num, c.denom: "s << c.num << ", "s << c.denom << "\n"s ;
}
