#include <iostream>
#include <cstdlib>
#include "include/ftrig"

int main()
{
	using std::cout, std::endl;
	float a = ftrig::seno(10);
	float b = ftrig::coseno(9);
	float c = ftrig::tangente(5);
	float d = ftrig::secante(-0.8);
	float e = ftrig::cosecante(-0.3);
	float f = ftrig::cotangente(-0.2);
	cout << "seno(a) = " << a << endl;
	cout << "coseno(b) = " << b << endl;
	cout << "tangente(c) = " << c << endl;
	cout << "secante(d) = " << d << endl;
	cout << "cosecante(e) = " << e << endl;
	cout << "cotangente(f) = " << f << endl;
	return 0;
}
