#pragma once
#include "Article.h"
#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <string>
#include <sstream>
#include <clocale>
using namespace std;
class articleRegister{
private:
	string newsPaper;
	vector<Article> v;
public:
	string List(){
		ostringstream oss;

		string s = "";

		for (int i = 0; i < v.size(); i++){
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

	~articleRegister();
};