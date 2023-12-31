namespace A::B::C {
	int name { } ;
}

int main()
{
	A::B::C::name = 0 ;
	std::cout << A::B::C::name << "\n"s ;
}
