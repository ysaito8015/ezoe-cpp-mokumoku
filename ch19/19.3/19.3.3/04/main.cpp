struct S { } ;

void operator ++( S const & s )
{ std::cout << "increment!\n"s ; }

int main()
{
	S s ;
	++s ;
}
