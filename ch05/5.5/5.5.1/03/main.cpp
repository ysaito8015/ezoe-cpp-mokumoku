bool is_rocket_ready_to_launch()
{
	return true ;
}


int main()
{
	if ( !is_rocket_ready_to_launch() )
	{
		std::cout << "3...2...1...Hallelujah!\n"s ;
	}
}
