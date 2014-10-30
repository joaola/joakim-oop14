#include "Article.h"
//#include "News.h"
#include "articleRegister.h"
//#include "articleException.h";
#include "Database.h"
#include <string>
#include <clocale>
#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <algorithm>
#include <memory>
#include <exception>
using namespace std;
	//main3_1_2
void main3_1_2(){
	cout << "main1_2" << endl;	
	Article a01;
	Article a02(1, "2011-11-11", "Breaking news!", "Bob", 200, "nyhet");
	
	a01.Write();
	a02.Write();

	a01.Read();
	a02.Read();

	a01.setWriter("Kalle kula");
	a01.Write();
	cout << "Författare" << a01.getWriter() << endl;
}

	//main3_3
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

	//main3_4
void main3_4(){
	cout << "main4" << endl;

	Article a4(1, "2011-11-11", "Breaking news", "Bob", 200, "nyhet");
	Article a5(2, "2011-11-11", "Breaking news", "Carl", 200, "nyhet");
	Article a6(3, "2011-11-11", "Breaking news", "Charles", 200, "nyhet");
	articleRegister ar1;

	ar1.Add(a4);
	ar1.Add(a5);
	ar1.Add(a6);

	ar1.setNewsPaper("Dfs nyheter");

	string s = ar1.List();

	cout << s << endl;
}

	//main3_5
void main3_5(){

	cout << "main5" << endl;

	Article a7(1, "2011-11-11", "Breaking news!", "Bob", 200, "nyhet");
	Article a8(2, "2011 - 11 - 11", "Breaking news!", "Carl", 200, "nyhet");
	Article a9(3, "2011-11-11", "Breaking news!", "Charles", 200, "nyhet");
	articleRegister ar2;

	ar2.Add(a7);
	ar2.Add(a8);
	ar2.Add(a9);

	ar2.setNewsPaper("Dfs nyheter");
	ar2.writeToFile();
}

//main3_6
void main3_6(){
	cout << "main6" << endl;
	articleRegister ar3;
	ar3.readFromFile();
	cout << ar3.getNewsPaper() << endl;
	cout << ar3.List() << endl;
}
	//main4_1
void main4_1(){

	cout << "main4_1" << endl;
	Database db;

	db.readFromFilesToDatabase();
	cout << "\n\n" << db.List() << endl;
	cout << "Sökning nyckelord: nyhet\n" << db.searchKeyword("nyhet") << endl;
	cout << "Sökning ord i titel: Grekland\n" << db.searchWordInTitle("Grekland") << endl;
	
}

int main(){
	cout << "tema artikelregister" << endl;
	main3_1_2();
	main3_3();
	main3_4();
	main3_5();
	main3_6();
	main4_1();
	system("PAUSE");
}