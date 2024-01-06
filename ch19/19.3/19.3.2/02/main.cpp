struct IntLike{ int data ; } ;

IntLike operator +( IntLike const & obj )
{ return obj ; }

IntLike operator -( IntLike const & obj )
{ return IntLike{ -obj.data } ; }


int main()
{
	IntLike i{1} ;

	std::cout << +i.data << "\n"s ;
	std::cout << -i.data << "\n"s ;
}
