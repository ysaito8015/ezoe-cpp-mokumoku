auto f() { return 0 ; }
auto g() -> int { return 0 ; }

int main()
{
	std::cout << "f(): "s << f() << "\n"s ;
	std::cout << "g(): "s << g() << "\n"s ;
}
