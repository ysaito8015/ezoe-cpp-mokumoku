struct S { } ;

int operator +( S, S ) { return 0 ; }
void operator -( S, S ) { }

int mian()
{
	S s ;
	int x = s + s ;
	s - s ;
}
