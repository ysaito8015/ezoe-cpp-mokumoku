int main()
{
	int x = 123 ;
	short y = static_cast<short>(x) ;

	std::cout
		<< x << "\ttype:\t"s
		<< typeid(x).name() << "\n"s 
		<< y << "\ttype:\t"s
		<< typeid(y).name() << "\n"s ;
}
