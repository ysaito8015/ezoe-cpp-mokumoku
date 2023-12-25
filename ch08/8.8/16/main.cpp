int factorial( int n )
{
	if ( n < 1 )
		return 0 ;
	else if ( n == 1 )
		return 1 ;
	else
		return n * factorial(n-1) ;
}

int main()
{
	std::cout << "3*2*1= " << factorial(3) << "\n"s ;
	std::cout << "5*4*3*2*1= " << factorial(5) << "\n"s ;
}
