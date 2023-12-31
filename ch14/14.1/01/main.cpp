int main()
{
	std::vector<int> v = { 1,2,3,4,5 } ;

	auto i = std::begin(v) ;

	std::cout << "*i:\t"s << *i << "\n"s ;

	std::cout << "v:\t"s ;
	for (int i = 0 ; i < 5 ; ++i) {
		std::cout << v.at(i) << " " ;
	}
	std::cout << "\n"s ;
}
