struct IntLike
{
	int data;
	IntLike operator +( IntLike const & right )
	{
		return IntLike { data + right.data } ;
	}
} ;

int main()
{
	IntLike a{1} ;
	IntLike b{2} ;

	IntLike c = a + b ;
	IntLike d = b.operator +(b) ;

	std::cout << "c.data: "s << c.data << "\n"s ;
	std::cout << "d.data: "s << d.data << "\n"s ;
}
