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
	fractional b{1,3} ;

	auto c = add(a, b) ;

	std::cout << c.num << " " << c.denom << "\n"s ;
}
