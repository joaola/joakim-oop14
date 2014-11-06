#include "Room.h"
#include "Building.h"
#include <string>
#include <iostream>
#include <ostream>
#include <istream>
using namespace std;

void main3_1_2(){
	cout << "main3_1" << endl;
	room r1;
	room r2(1, 30.0, "Living");

	r1.Write();
	r2.Write();

	r1.Read();
	r1.Write();

	r1.setTypeOfRoom("Kitchen");
	r1.Write();
}

void main3_3(){
	cout << "main3_3" << endl;
	string str;
	room r1;
	room r2(4,20.5,"Bed");

	cout << r1 << endl;
	cout << r2 << endl;

	cin >> r1;
	getline(cin, str);
	cout << r1 << endl;
}

void main3_4(){
	cout << "main3_4" << endl;
	string s;

	room r1(1, 10.5, "Bed");
	room r2(2, 20.4, "Living");
	room r3(3, 15.3, "Kitchen");
	Building b;

	b.Add(r1);
	b.Add(r2);
	b.Add(r3);

	b.setBuildingType("Apartment");

	s = b.List();
	cout << s << endl;

	cout << "Sök: ";
	
	string str;
	cin >> str;
	b.Search(str);

	cout << b.Search(str) << endl;
}

void main3_5(){
	cout << "main3_5"<<endl;
	room r1(1, 10.5, "Bed");
	room r2(2, 20.4, "Living");
	room r3(3, 15.3, "Kitchen");
	Building b;

	b.Add(r1);
	b.Add(r2);
	b.Add(r3);

	b.setBuildingType("Apartment");
	b.WriteToFile();
}

	void main3_6_1_2(){
		cout << "main3_6_1_2" << endl;
		Building b;
		b.ReadFromFile("text.txt");
		cout << "Summa av den totala arean: " << b.calculateArea() << endl;
	}

int main(){
	//main3_1_2();
	//main3_3();
	//main3_4();
	//main3_5();
	main3_6_1_2();
	system("PAUSE");
	return 0;
}
