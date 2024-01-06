struct S
{
	int x ;
	int y ;
	int z ;
} ;

int main()
{
	S s { 1,2,3 } ;
	std::cout
		<< "s.x: "s << s.x << "\n"s
		<< "s.y: "s << s.y << "\n"s
		<< "s.z: "s << s.z << "\n"s ;
}
