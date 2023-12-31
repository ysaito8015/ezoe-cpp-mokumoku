namespace ns {
	int name{} ;
}

int f()
{
	return ns::name ;
}

int main()
{
	ns::name = 1 ;
	std::cout << ns::name << "\n"s ;
}
