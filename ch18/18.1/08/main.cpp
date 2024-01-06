struct S
{
	int data ;
} ;

int main()
{
	S s1 ;
	s1.data = 0 ;

	S s2 ;
	s2.data = 1 ;

	bool b = s1.data == s2.data ;
	std::cout
		<< std::boolalpha
		<< "s1.data == s2.data: "s << b << "\n"s ;
}
