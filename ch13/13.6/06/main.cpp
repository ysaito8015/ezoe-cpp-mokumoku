namespace ns {
	int a{} ;
	void f()
	{
		a = 0 ;
	}
}

int main()
{
	a = 0 ;
	ns::a ;
}
