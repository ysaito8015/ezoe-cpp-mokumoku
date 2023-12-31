int main()
{
	std::vector<int> v = { 1,2,3,4,5 } ;

	std::cout << "v:\t"s ;
	for (int i = 0 ; i < 5 ; ++i) {
		std::cout << v.at(i) << " " ;
	}
	std::cout << "\n"s ;

	auto i = std::begin(v) ;

	std::cout << "*i:\t"s << *i << "\n"s ;

	int x = *i ;

	*i = 0 ;
	std::cout << "x:\t"s << x << "\n"s ;
	std::cout << "*i:\t"s << *i << "\n"s ;

	std::cout << "v:\t"s ;
	for (int i = 0 ; i < 5 ; ++i) {
		std::cout << v.at(i) << " " ;
	}
	std::cout << "\n"s ;
}
