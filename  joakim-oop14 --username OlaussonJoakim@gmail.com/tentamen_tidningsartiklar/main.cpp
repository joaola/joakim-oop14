#include "Article.h"
#include "articleRegister.h"
#include "Database.h"
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

void main3_5(){
	cout << "main5" << endl;

	Article a1(1, "2011-11-11", "Breaking news!", "Bob", 200, "nyhet");
	Article a2(2, "2011 - 11 - 11", "Breaking news!", "Carl", 200, "nyhet");
	Article a3(3, "2011-11-11", "Breaking news!", "Charles", 200, "nyhet");
	articleRegister ar;

	ar.Add(a1);
	ar.Add(a2);
	ar.Add(a3);
	
	ar.setNewsPaper("Dfs nyheter");
	ar.writeToFile();
}

void main3_6(){
	cout << "main6" << endl;
	articleRegister ar;
	ar.readFromFile();
	cout << ar.getNewsPaper() <<endl;
	cout << ar.List() << endl;
}

void main4_1(){
	cout << "main41" << endl;
	Database db;

	db.readFromFilesToDatabase();
	cout << "\n\n" << db.List() << endl;
	cout << "Sökning nyckelord: nyhet\n" << db.searchKeyword("nyhet") << endl;
	cout << "Sökning ord i titel: Grekland\n" << db.searchWordInTitle("Grekland") << endl;

}

/*int main(){
	try
	{
		cout << "tema artikelregister" << endl;
		//main3_1_2();
		//main3_3();
		//main3_4();
		//main3_5();
		//main3_6();
		//main4_1();
		//main5_1();
	}
	catch (exception e)
	{
		cerr << e.what() << endl;
	}
	catch (...){
		cerr << "Okänt exception" << endl;

		system("pause");
		return 0;
	}*/