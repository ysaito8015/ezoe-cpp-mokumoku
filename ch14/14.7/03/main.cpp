int main()
{
	std::vector<int> v = { 2,3,4,5,6,7,8,9,10,11,12 } ;

	auto i = std::begin(v) ;
	auto j = std::end(v) ;

	std::cout << "v: "s ;
	for (std::size_t i = 0; i != std::size(v); ++i) {
		std::cout << v.at(i) << " "s ;
	}
	std::cout << "\n"s ;


	std::cout << "size(v): "s << std::size(v) << "\n"s ;
	std::cout << "j - i: "s << j - i << "\n"s ;

	++i ;
	std::cout << "++i" << "\n"s ;
	std::cout << "j - i: "s << j - i << "\n"s ;
}
