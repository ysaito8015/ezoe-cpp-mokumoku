struct Person
{
	std::string name ;
	int age ;
} ;

int main()
{
	Person john ;
	john.name = "John" ;
	john.age = 20 ;

	std::cout
		<< "name: "s << john.name << "\n"s
		<< "age : "s << john.age << "\n"s ;
}
