struct IntLike { int data ; } ;

IntLike & operator ++( IntLike & obj )
{
	++obj.data ;
	return obj ;
}

IntLike & operator --( IntLike & obj )
{
	--obj.data ;
	return obj ;
}

int main()
{
	IntLike i{0} ;

	std::cout
		<< "i  : "s << i.data   << "\n"s
		<< "++i: "s << ++i.data << "\n"s
		<< "i  : "s << i.data   << "\n"s
		<< "--i: "s << --i.data << "\n"s
		<< "i  : "s << i.data   << "\n"s  ;
}
