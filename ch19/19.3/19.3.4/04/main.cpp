struct S
{
	void plus( S const & other ) { }
	void operator +( S const & other ) { }
} ;

int main()
{
	S a ;
	S b ;

	a.plus(b) ;
	a.operator +(b) ;
	a + b ;
}
