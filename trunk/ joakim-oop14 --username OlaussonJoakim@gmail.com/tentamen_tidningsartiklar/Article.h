#pragma once

#include <iostream>
#include <string>
#include <sstream>
#include <clocale>
using namespace std;
class Article{

private:
	int id;
	string date;
	string title;
	string writer;
	int n;
	string keyword;

public:

	Article(void){
		this->id = -1;
		this->date = this->title = this->writer = this->keyword = " ";
		this->n = 0;
	}

	void Read(){
		string str;

		cout << "id= ";
		cin >> id;
		
		cout << "date= ";
		cin >> date;
		getline(cin, str);

		cout << "titel= ";
		getline(cin, title);
		
		cout << "Författare= ";
		getline(cin, writer);

		cout << "n= ";
		cin >> n;

		cout << "nyckelord= ";
		cin >> keyword;
	}

	void Write(){
		cout << "id= " << id << endl;
		cout << "date= " << date << endl;
		cout << "titel= " << title << endl;
		cout << "Författare= " << writer << endl;
		cout << "n= " << n << endl;
		cout << "nyckelord= " << keyword << endl;
	}

	friend ostream & operator<< (ostream &out, const Article &a){
		out << "(";
		out << a.id << ",";
		out << a.date << ",";
		out << a.title << ",";
		out << a.writer << ",";
		out << a.n << ",";
		out << a.keyword;
		out << ")";
		return out;
	}

	friend istream & operator>>(istream &in, Article &a){
		string s;
		getline( in, s, '(' );
		
		in >> skipws >> a.id;
		getline( in , s, ',' );

		getline( in, a.date, ',' );
		
		getline( in, a.title, ',' );

		getline( in, a.writer, ',' );

		in >> a.n;
		getline( in, s, ',' );

		getline( in, a.keyword, ')' );

		return in;
	}

	Article(int id, string date, string title, string writer, int n, string keyword){
		this->id = id;
		this->date = date;
		this->title = title;
		this->writer = writer;
		this->keyword = keyword;
		this->n = n;
	}

	~Article(void){ //Destruktor
	}
	
	//Getters
	int getId(){return this->id;}
	string getDate(){return this->date;}
	string getTitle(){ return this->title; }
	string getWriter(){ return this->writer; }
	int getN(){ return this->n; }
	string getKeyword(){ return this->keyword; }

	//Setters
	void setId(int id){ this->id = id; }
	void setDate(string date){ this->date = date; }
	void setTitle(string title){ this->title = title; }
	void setWriter(string writer){ this->writer = writer; }
	void setN(int n){ this->n = n; }
	void setKeyword(string keyword){ this->keyword = keyword; }

};