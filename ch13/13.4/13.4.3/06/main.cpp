namespace long_name_is_loooong { int x() { return 1 ; } ; }
namespace cat = long_name_is_loooong ;

int main()
{
	std::cout << cat::x() << "\n"s ;
}
