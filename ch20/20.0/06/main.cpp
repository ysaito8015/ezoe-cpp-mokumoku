int main()
{
	std::array<int, 10> a ;

	a.at(0) = 1 ;
	a[1] = 2 ;

	std::cout << a.at(0) << "\n"s ;
	std::cout << a[1] << "\n"s ;
}
