#include <iostream>
#include <string>
using namespace std;
#include "Car.h"
int main()
{
	Car bil1;
	Car bil2("Volvo", 1999, 9500.5);
	bil2.WriteToConsole();
	bil1.ReadFromConsole();
	bil1.WriteToConsole();
	//etc andra test av klassens metoder, get/set
	system("pause");
	return 0;
}