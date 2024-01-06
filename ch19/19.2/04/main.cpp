struct fractional
{
	int num ;
	int denom ;
} ;

fractional operator +( fractional & l, fractional & r )
{
	if ( l.denom == r.denom )
		return fractional{ l.num + r.num, l.denom } ;
	else
		return fractional { l.num * r.denom + r.num * l.denom, l.denom * r.denom } ;
}

fractional operator -( fractional & l, fractional & r )
{
	if ( l.denom == r.denom )
		return fractional{ l.num - r.num, l.denom } ;
	else
		return fractional { l.num * r.denom - r.num * l.denom, l.denom * r.denom } ;
}

int main()
{
	fractional a{1,2} ;
	fractional b{2,3} ;

	auto c = a - b ;

	std::cout << c.num << ", "s << c.denom << "\n"s ;
}
