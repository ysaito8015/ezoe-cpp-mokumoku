int main()
{
	auto i = []( bool b ) -> int{
		if ( b )
			return 0 ;
		else
			return 0.0 ;
	} (false) ;

	std::cout << "i: "s << i << "\n"s ;
}
