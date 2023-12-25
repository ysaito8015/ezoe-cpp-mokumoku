void g( int x ) { std::cout << x << "\n"s ; }
void f( int x ) { g( x+1 ) ; }

int main() { f( 0 ) ; }
