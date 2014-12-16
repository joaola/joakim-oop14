#include  "Question.h"
#include <iostream>
#include <vector>
#include <string>
#pragma once
using namespace std;
class StudentTest
{
private:
	vector<Question> v;
	string date;
public:

	StudentTest()
	{
		this->date = "";
	}

	void Add(Question q)
	{
		v.push_back(q);
	}

	string List()
	{
		ostringstream oss;

		string s = "";

		for (int i = 0; i < int(v.size()); i++)
		{
			oss << v[i] << endl;
		}

		return oss.str();
	}

	void WriteToFile()
	{
		ofstream fout;

		fout.open("Test.txt");

		fout << "StudentTest=" << this->date << endl;
		for (int i = 0; i<(int)(this->v.size()); i++)
		{
			fout << "Question=" << this->v[i] << endl;
		}

		fout.close();
	}

	void ReadFromFile(string fileName)
	{
		string str, strRow;
		ifstream fin;

		fin.open(fileName);

		if (!fin.good())
		{
			cout << "Fil gick ej att öppna" << endl;
			return;
		}

		v.clear();

		while (std::getline(fin, strRow))
		{
			istringstream iss(strRow);
			getline(iss, str, '='); // Ny rad
			if (str.compare("StudentTest") == 0)
			{
				getline(iss, this->date);
			}
			else if (str.compare("Question") == 0)
			{
				Question q;
				iss >> q;

				if (q.GetPointRightAnswer () != -1)
				{
					v.push_back(q);
				}
			}
		}
	}
	//Setters
	string GetDate(){
		return date;
	}

	//Getters
	void SetDate(int date){
		this->date = date;
	}

	~StudentTest()
	{
	}
};

