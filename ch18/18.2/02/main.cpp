struct fractional
{
	int num ;
	int denom ;
} ;

int main()
{
	fractional x{1, 2} ;

	std::cout << static_cast<double>(x.num) / static_cast<double>(x.denom) ;
}
