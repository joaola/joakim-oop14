#include "Article.h"
#include "articleRegister.h"
#include <iostream>
using namespace std;
int main3_1_2(){
	cout << "main1_2" << endl;
	Article a1;
	Article a2(1, "2011-11-11", "Breaking news!", "Bob", 200, "nyhet");
}

void main3_3(){
	cout << "main3" << endl;
	string str;
	Article a1;
	Article a2(1, "2011-11-11", "Breaking news!", "Bob", 200, "nyhet");

	cout << a1 << endl;
	cout << a2 << endl;

	cin >> a1;
	getline(cin, str);
	cout << a1 << endl;
}

void main3_4(){
	cout << "main4" << endl;

	Article a1(1, "2011-11-11", "Breaking news", "Bob", 200, "nyhet");
	Article a2(2, "2011-11-11", "Breaking news", "Carl", 200, "nyhet");
	Article a3(3, "2011-11-11", "Breaking news", "Charles", 200, "nyhet");
	articleRegister ar;

	ar.Add(a1);
	ar.Add(a2);
	ar.Add(a3);

	ar.setNewsPaper("Dfs nyheter");

	string s = ar.List();

	cout << s << endl;

}