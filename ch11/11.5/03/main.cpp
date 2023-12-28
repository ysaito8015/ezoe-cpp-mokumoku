int main()
{
		unsigned int min = std::numeric_limits<unsigned int>::min() ;
		unsigned int max = std::numeric_limits<unsigned int>::max() ;

		unsigned int min_minus_one = min - 1u ;
		unsigned int man_plus_one  = max + 1u ;

		std::cout
			<< "min:           " << min << "\n"s
			<< "max:           " << max << "\n"s
			<< "min_minus_one: " << min_minus_one << "\n"s
			<< "max_plus_one:  "  << man_plus_one << "\n"s ;
}
