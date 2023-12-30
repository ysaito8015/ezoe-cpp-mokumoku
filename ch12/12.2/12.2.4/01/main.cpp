int main()
{
	std::cout
		<< "significant digits" << "\n"s
		<< "float       :\t"s << std::numeric_limits<float>::digits10       << "\n"s
		<< "double      :\t"s << std::numeric_limits<double>::digits10      << "\n"s
		<< "long double :\t"s << std::numeric_limits<long double>::digits10 << "\n"s
		<< "max digits" << "\n"s
		<< "float       :\t"s << std::numeric_limits<float>::max_digits10       << "\n"s
		<< "double      :\t"s << std::numeric_limits<double>::max_digits10      << "\n"s
		<< "long double :\t"s << std::numeric_limits<long double>::max_digits10 << "\n"s ;
}
