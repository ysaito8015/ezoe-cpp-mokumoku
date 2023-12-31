int main()
{
	std::vector<int> v = { 1,2,3,4,5 } ;

	std::cout << "v: "s ;
	for (std::size_t i = 0 ; i != std::size(v) ; ++i) {
		std::cout << v.at(i) << " "s ;
	}
	std::cout << "\n"s ;

	std::cout
		<< "v.at(0): "s << v.at(0) << "\n"s 
		<< "v.at(4): "s << v.at(4) << "\n"s ;
}
