int main()
{
	std::vector<int> v = { 1,2,3,4,5 } ;

	std::cout << "v:\t"s ;
	for (int i = 0 ; i < 5 ; ++i) {
		std::cout << v.at(i) << " " ;
	}
	std::cout << "\n"s ;

	int x = v.at(2) ;
	std::cout << "v.at(2):\t"s << x << "\n"s ;

	v.at(2) = 0 ;

	std::cout << "v:\t"s ;
	for (int i = 0 ; i < 5 ; ++i) {
		std::cout << v.at(i) << " " ;
	}
	std::cout << "\n"s ;
}
