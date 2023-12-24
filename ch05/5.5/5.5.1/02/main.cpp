bool is_rocket_ready_to_launch()
{
	return false ;
}


int main()
{
	if ( !is_rocket_ready_to_launch() )
	{
		std::cout << "Standby...\n"s ;
	}
}
