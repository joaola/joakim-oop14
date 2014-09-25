#include <iostream>
#include "vector_float.h"
using namespace std;
int main() {
	vector_float v(4);

	v.read_from_keyboard();
	v.print();

	
	system("PAUSE");
}