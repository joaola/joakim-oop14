#include <iostream>
#include<sstream>
#include<cstdio>
using namespace std;
int main(int argc, char *argv[]){ 
	int a;
	int sum=0;
	char c;  
	int n = 0;
	sscanf_s(argv[1], "%d", &n);

	for (int i = 0; i < argc; i++)
	{
		cout << "argv[" << i << "]=" << argv[i] << endl;
		
	}
	for (int i = 0; i <= n; i++)
	{
		sum = sum + i;
		cout << "Summan = " << sum << endl;
	}
	
	system("PAUSE");
}