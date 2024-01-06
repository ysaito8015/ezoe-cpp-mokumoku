struct fractional
{
	int num ;
	int denom ;
} ;

fractional add( fractional & l, fractional & r )
{
	if ( l.denom == r.denom )
		return fractional{ l.num + r.num, l.denom } ;
	return fractional{ l.num * r.denom + r.num * l.denom, l.denom * r.denom } ;
}

int main()
{
	fractional a{1,2} ;
	fractional b = add(a, a) ;
	fractional c = add(a, b) ;

	std::cout
		<< "a.num, a.denom: "s << a.num << ", "s << a.denom << "\n"s
		<< "b.num, b.denom: "s << b.num << ", "s << b.denom << "\n"s
		<< "c.num, c.denom: "s << c.num << ", "s << c.denom << "\n"s ;
}
