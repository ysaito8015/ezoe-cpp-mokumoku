int main()
{
	std::size_t N{} ;
	std::cin >> N ;
	std::vector<int> v(N) ;

	std::cout << "v(N): "s ;
	std::for_each(v.begin(), v.end(),
		[](auto x){ std::cout << x << " "s ; } ) ;
	std::cout << "\n"s ;

}
