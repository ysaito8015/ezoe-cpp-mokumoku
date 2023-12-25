void hello()
{
	std::cout << "hello\n" ;
	hello() ;
}

int main()
{
	hello() ;
}
