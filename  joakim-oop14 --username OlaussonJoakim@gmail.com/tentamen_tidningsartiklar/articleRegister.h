#pragma once
#include "Article.h"
#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <string>
#include <clocale>
using namespace std;
class articleRegister{
private:
	string newsPaper;
	vector<Article> v;
public:
	articleRegister(void){
		newsPaper = "";
	}
	string getNewsPaper(){
		return newsPaper;
	}
	void setNewsPaper(string newsPaper){
		this->newsPaper = newsPaper;
	}
	void Add(Article a){
		v.push_back(a);
	}
	string List(){
		ostringstream oss;

		string s = "";

		for (size_t i = 0; i < v.size(); i++){
			oss << v[i] << endl;
		}
		return oss.str();
	}
	void writeToFile(){
		ofstream fout;
		fout.open("test.txt");
		fout << "articleRegister= " << this->newsPaper << endl;
		for (auto &a : v)
		{
			fout << "Article= " << a << endl;
		}
		fout.close();
	}
	void readFromFile() //För teständamål
	{
		readFromFile("test.txt");
	}
	void readFromFile(string fileName){
		string str, strRow;
		ifstream fin;

		try{
			fin.open(fileName);
			if (!fin.good()){
				cout << "Gick ej att öppna" << endl;
				return;
			}
			v.clear(); //Nollställer vektorn
			while (getline(fin, strRow)){
				istringstream iss(strRow);
				getline(iss, str, '='); //Ny rad
				if (str.compare("articleRegister") == 0){
					getline(iss, this->newsPaper);
				}
				else if (str.compare("Article") == 0){
					Article a; //Skapar en ny nollställd artikel, VIKTIGT!
					iss >> a;
					if (a.getId() != -1){
						v.push_back(a);
					}
				}
			}
			fin.close();
		}
		catch (exception e){
			cerr << "Exception: " << fileName << endl;
			cerr << e.what() << endl;
		}
	}

	string searchKeyword(string keyword)
	{
		ostringstream oss;
		for (auto &item : v)
		{
			if (item.getKeyword() == keyword){
				oss << item << endl;
			}
		}
		return oss.str();
	}
	string searchWordInTitle(string word){
		ostringstream oss;
		for (auto &item : v){
			if (item.getTitle().find(word) != string::npos){
				oss << item << endl;
			}
		}
		return oss.str();
	}
	~articleRegister(void){

	}
};