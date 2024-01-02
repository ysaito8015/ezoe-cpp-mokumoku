int main()
{
	int a = 1 ;
	std::cout << "a: "s << a << " lref: "s << "\n"s ;
	int & lref = a ;

	lref = 3 ;

	std::cout << "lref = 3"s << "\n"s ;
	std::cout << "a: "s << a << " lref: "s << lref << "\n"s ;
}
