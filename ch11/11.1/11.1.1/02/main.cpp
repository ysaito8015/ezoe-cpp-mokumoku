#include <type_traits>

int main()
{
	int octal = 0123 ;

	std::cout << std::dec << "octal: " << octal << "\n"s ;
	std::cout << std::oct << "octal: " << octal << "\n"s ;
}
