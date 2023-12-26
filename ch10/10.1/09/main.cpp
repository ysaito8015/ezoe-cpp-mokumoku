int main()
{
	std::vector<int> v = { 3,8,2,5,6,9,4,1,7 } ;
	auto size = v.size() ;

	for ( std::size_t head = 0 ; head  != size ; ++head )
	{
		std::cout << "debug: head = "s << head << ", v = { "s ;

		for ( std::size_t i = 0 ; i != v.size() ; ++i )
		{
			std::cout << v.at(i) << " "s ;
		}
		std::cout << "}\n"s ;

		auto min = head ;
		for ( std::size_t index = head + 1 ; index != size ; ++index )
		{
			std::cout << v.at(index) << ", "s ;

			if ( v.at(index) < v.at(min) )
			{
				std::cout << v.at(index) << " < "s << v.at(min) << "\n"s ;
				min = index ;
			}
			else
			{
				std::cout << v.at(index) << " >= "s << v.at(min) << "\n"s ;
			}
		}
		std::cout << "\n"s ;

		std::cout << "min: " << v.at(min) << "\n"s ;

		std::cout << "debug before: "s << v.at(head) << ", " << v.at(min) << "\n"s ;

		auto temp = v.at(head) ;
		v.at(head) = v.at(min) ;
		v.at(min) = temp ;

		std::cout << "debug after : "s << v.at(head) << ", " << v.at(min) << "\n"s ;
	}

	for ( std::size_t i = 0 ; i != size ; ++i )
	{
		std::cout << v.at(i) << " " ;
	}
	std::cout << "\n"s ;
}
