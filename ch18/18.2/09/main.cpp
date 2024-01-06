struct fractional
{
	int num ;
	int denom ;

	void set( int num_ )
	{
		num = num_ ;
		denom = 1 ;
	}

	void set( int num_, int denom_ )
	{
		num = num_ ;
		denom = denom_ ;
	}
} ;

int main()
{
	fractional x ;

	x.set(5) ;
	std::cout << "x.num  : "s << x.num << "\n"s  ;
	std::cout << "x.denom: "s << x.denom << "\n"s  ;

	x.set( 2, 3 ) ;
	std::cout << "x.num  : "s << x.num << "\n"s  ;
	std::cout << "x.denom: "s << x.denom << "\n"s  ;
}
