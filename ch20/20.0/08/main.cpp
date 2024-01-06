struct null_array
{
	int dummy ;
	int & operator [](std::size_t )
	{
		dummy = 0 ;
		return dummy ;
	}
} ;

int main()
{
	null_array a ;
	std::cout << a[0] ;
	std::cout << a[999] ;
	a[100] = 1 ;
	std::cout << a[100] ;

}
