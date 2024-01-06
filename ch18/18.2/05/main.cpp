struct fractional
{
	int num ;
	int denom ;

	double value()
	{
		return static_cast<double>(num) / static_cast<double>(denom) ;
	} ;
} ;
