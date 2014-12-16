#include "StudentTest.h"
#include "Question.h"

#include <vector>
#include <fstream>
#include <ostream>
#include <istream>
#include <sstream>
#include <string>
#pragma once
using namespace std;
class StudentTestRegister
{
private:
	string studentInfo;
	vector <StudentTest> v;
	vector<double> RelativeResultPerTest();
public:

	StudentTestRegister(void)
	{
		studentInfo = "";
	}

	void add(StudentTest a){
		v.push_back(a);
	}

	friend istream & operator >> (istream &in, Question &a)
	{
		string s;
		getline(in, s, '(');



		getline(in, a.question, ',');

		getline(in, a.right_answer, ',');

		in >> skipws >> a.point_right_answer;
		getline(in, s, ',');

		getline(in, a.student_answer, ',');

		in >> a.point_right_answer;
		getline(in, s, ')');

		return in;
	}

	void ReadFromFile(string fileName){
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
			if (str.compare("StudentTestRegister") == 0)
			{
				getline(iss, this->studentInfo);
			}
			else if (str.compare("StudentTest") == 0)
			{
				StudentTest s;
				iss >> s;

				if (s.GetDate() != "")
				{
					v.push_back(s);
				}
			}
		}

	}

	string GetStudentInfo(){
		return this->studentInfo;
	}

	void SetStudentInfo(string studentInfo){
		this -> studentInfo = studentInfo;
	}
	

	~StudentTestRegister()
	{
	}
};