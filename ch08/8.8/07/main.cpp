int convert( int n )
{
	if ( n > 0 )
		return solve( n ) ;
	else
		return - solve( -n ) ;
}

