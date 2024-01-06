int f( int x, int y = 0, int z = 0 ) { return x ;}
int g( int x, int y = 0, int z ) { return x ;}

int main()
{
	f(1) ;
	g(2) ;
}
