namespace abc {
	int f() { return 0 ; }
}

int f () { return 1 ; }

int main()
{
	using namespace abc ;
	f() ;
}
