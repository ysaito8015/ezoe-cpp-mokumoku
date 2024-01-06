struct person
{
	std::string name ;
	person( std::string name )
		: name(name) { }
} ;

int main()
{
	person p1{"John"} ;
	person p2{};

	std::cout
		<< p1.name << "\n"s ;
}
