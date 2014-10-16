#include <iostream>
#include <string>
#pragma once
using namespace std;
class tentamen_tidningsartiklar{

private:
	int id;
	string date;
	string title;
	string writer;
	int n;
	string keyword;


public:

	tentamen_tidningsartiklar(){
		this->id = -1;
		this->date = this->title = this->writer = this->keyword = " ";
		this->n = 0;
	}

	tentamen_tidningsartiklar(int id, string date, string title, string writer, int n, string keyword){
		this->id = id;
		this->date = date;
		this->title = title;
		this->writer = writer;
		this->keyword = keyword;
		this->n = n;
	}
	//Get
	int getId(){return this->id;}
	string getDate(){return this->date;}
	string getTitle(){ return this->title; }
	string getWriter(){ return this->writer; }
	int getN(){ return this->n; }
	string getKeyword(){ return this->keyword; }

	//Set
	void setId(int id){ this->id = id; }
	void setDate(string date){ this->date = date; }
	void setTitle(string title){ this->title = title; }
	void setTitle(string writer){ this->writer = writer; }
	void setN(int n){ this->n = n; }
	void setKeyword(string keyword){ this->keyword = keyword; }

	~tentamen_tidningsartiklar();
};