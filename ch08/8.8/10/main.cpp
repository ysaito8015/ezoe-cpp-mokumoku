int solve( int n )
{
	if ( n <= 1 )
		return n ;
	else
		return
			n%10
			+ 2 * solve( n/10 ) ;
}

int main()
{
	std::cout << "solve(10): " << solve(10) << "\n"s ;
	std::cout << "solve(11): " << solve(11) << "\n"s ;
	std::cout << "solve(110): " << solve(110) << "\n"s ;
	std::cout << "solve(111): " << solve(111) << "\n"s ;
}
