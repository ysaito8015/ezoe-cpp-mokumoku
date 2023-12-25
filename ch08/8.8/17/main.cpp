int factorial( int n )
{
	int temp = n ;
loop :
	if ( n < 1 )
		return 0 ;
	else if ( n == 1 )
		return temp * 1 ;
	else
	{
		n = n-1 ;
		temp *= n ;
		goto loop ;
	}
}

int main()
{
	std::cout << "3*2*1= " << factorial(3) << "\n"s ;
	std::cout << "5*4*3*2*1= " << factorial(5) << "\n"s ;
}
