namespace a {
	int f() { return 0 ; }
}

namespace b {
	int f() { return 1 ; }
}

int main()
{
	a::f() ;
	b::f() ;
}
