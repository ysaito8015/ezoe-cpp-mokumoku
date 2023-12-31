int main()
{
	std::vector<int> v = { 1,2,3,4,5 } ;

	auto i = std::end(v) ;

	*i ; // it doesn't raise error...
}
