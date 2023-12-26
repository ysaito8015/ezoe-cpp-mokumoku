void until_ten( int x )
{
	if ( x > 10 )
		return ;
	else
	{
		std::cout << x << "\n"s ;
		return until_ten( x + 1 ) ;
	}
}

int main()
{
	until_ten(1) ;
}
