#include "swapclass.h"
#include <iostream>
#include <string>
using namespace std;

int main(){
	swapclass c;
	float x = 0;
	float y = 1;
	string a = "tjenare";
	string b = "mannen";
	cout << " x: " << x << " y: " << y<<endl;
	cout << " a: " << a << " b: " << b << endl;
	c.SWAP(&x,&y);
	cout << " x: " << x << " y: " << y << endl;
	c.SWAP(&a, &b);
	cout << " a: " << a << " b: " << b << endl;
	c.SWAP(x, y);
	cout << " x: " << x << " y: " << y << endl;
	system("PAUSE");
	return 0;
}