struct fractional
{
	int num ;
	int denom ;

	void set( int num, int denom )
	{
		fractional::num = num ;
		fractional::denom = denom ;
	}
} ;

int main()
{
	fractional fr{1,2} ;
	std::cout << "num, denom: "s << fr.num << ", "s << fr.denom << "\n"s ;

	fr.set( 3,5 ) ;
	std::cout << "num, denom: "s << fr.num << ", "s << fr.denom << "\n"s ;
}
