struct IntLike{ int data ; } ;

IntLike operator +( IntLike const & l, IntLike const & r )
{
	return IntLike{ l.data + r.data } ;
}

int main()
{
	IntLike a{5} ;
	IntLike b{6} ;
	auto c = a + b ;

	std::cout << c.data << "\n"s ;
}
