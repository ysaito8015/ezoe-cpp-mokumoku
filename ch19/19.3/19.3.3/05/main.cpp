struct IntLike { int data ; } ;

IntLike operator ++( IntLike & obj, int )
{
	auto temp = obj ;
	++obj.data ;
	return temp ;
}

IntLike operator --( IntLike & obj, int )
{
	auto temp = obj ;
	--obj.data ;
	return temp ;
}

int main()
{
	IntLike i{0} ;

	std::cout
		<< "i  : "s << i.data   << "\n"s
		<< "i++: "s << i++.data << "\n"s
		<< "i  : "s << i.data   << "\n"s
		<< "i--: "s << i--.data << "\n"s 
		<< "i  : "s << i.data   << "\n"s  ;
}
