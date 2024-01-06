struct S { } ;

S operator +( S, S ) { }

int main()
{
	S s ;
	operator +(s,s) ;
}
