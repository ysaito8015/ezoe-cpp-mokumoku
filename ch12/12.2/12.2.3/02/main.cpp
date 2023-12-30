int main()
{
	double NaN = std::numeric_limits<double>::quiet_NaN() ;

	bool a = NaN == 0.0 ;
	bool b = NaN != 0.0 ;
	bool c = NaN == NaN ;
	bool d = NaN != NaN ;
	bool e = NaN < 0.0  ;

	std::cout
		<< std::boolalpha
		<< "NaN == 0.0: " << a << "\n"s
		<< "NaN != 0.0: " << b << "\n"s
		<< "NaN == NaN: " << c << "\n"s
		<< "NaN != NaN: " << d << "\n"s
		<< "NaN < 0.0 : " << e << "\n"s ;
}
