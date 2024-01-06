struct X { } ;
struct Y { } ;

void operator +( X, Y ) { }

int main()
{
	X x ;
	Y y ;

	x + y ;
	y + x ;
}
