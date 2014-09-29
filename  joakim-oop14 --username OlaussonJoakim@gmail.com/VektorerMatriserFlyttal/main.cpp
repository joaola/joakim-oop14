#include <iostream>
#include "vector_float.h"
#include "matrix_float.h"
using namespace std;
int main() {
	vector_float v(4);
	matrix_float m(4.0, 4.0);
	int val;
	int r;
	int c;
	v.read_from_keyboard();
	v.print();

	m.set(val, r, c);
	m.print();

	system("PAUSE");
}