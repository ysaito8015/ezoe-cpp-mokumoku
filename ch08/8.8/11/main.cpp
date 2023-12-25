int solve( int n )
{
	int result = 0 ;
	int i = 1 ;

	while ( n != 0 )
	{
		result += n%10 * i ;
		i *= 2 ;
		n /= 10 ;
	}

	return result ;
}

int main()
{
	std::cout << "solve(10): " << solve(10) << "\n"s ;
	std::cout << "solve(11): " << solve(11) << "\n"s ;
	std::cout << "solve(110): " << solve(110) << "\n"s ;
	std::cout << "solve(111): " << solve(111) << "\n"s ;
}
