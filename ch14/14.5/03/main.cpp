int main()
{
	std::vector<int> v = { 1,2,3,4,5 } ;
	auto i = std::end(v) ;

	std::cout << "vector v:\t" ;
	for (std::size_t i = 0 ; i < std::size(v) ; ++i) {
		std::cout << v.at(i) << " "s ;
	}
	std::cout << "\n"s ;

	--i ;

	std::cout << "*i:\t"s << *i << "\n"s ;

	++i ;

	std::cout << "*i:\t"s << *i << "\n"s ;
}
