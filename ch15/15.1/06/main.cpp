int main()
{
	std::vector<int> v = { 3,2,1,4,5 } ;

	for (auto iter = std::begin(v), last = std::end(v) ; iter != last ; ++iter ) {
		std::cout << *iter << " "s ;
	}
	std::cout << "\n"s ;

	auto temp = v.at(0) ;
	v.at(0) = v.at(2) ;
	v.at(2) = temp ;
	for (auto iter = std::begin(v), last = std::end(v) ; iter != last ; ++iter ) {
		std::cout << *iter << " "s ;
	}
	std::cout << "\n"s ;
}
