#pragma once
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class Question
{
private:
	string question;
	string right_answer;
	double point_right_answer;
	string student_answer;
	double point_student_answer;
public:

	Question(void)
	{
		question = "";
		right_answer = "";
		point_right_answer = -1;
		student_answer = "";
		point_student_answer = -1;
	}

	Question(string question, string right_answer, double point_right_answer, string student_answer, double point_student_answer){
		this->question = question;
		this->point_right_answer = point_right_answer;
		this->student_answer = student_answer;
		this->point_student_answer;
	}

	friend ostream & operator << (ostream &out, const Question &a)
	{
		out << "(";
		out << a.question << ",";
		out << a.right_answer << ",";
		out << a.point_right_answer << ",";
		out << a.student_answer << ",";
		out << a.point_right_answer;
		out << ")";
		return out;
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

	void Read()
	{
		string str;

		cout << "question=";
		getline(cin, question);

		cout << "right answer=";
		getline(cin, right_answer);

		cout << "point right answer";
		cin >> point_right_answer;

		getline(cin, str);

		cout << "student answer=";
		getline(cin, student_answer);

		cout << "point student answer=";
		cin >> point_student_answer;
	}

	void Write()
	{
		cout << "question=" << question << endl;
		cout << "right answer=" << right_answer << endl;
		cout << "point right answer=" << point_right_answer << endl;
		cout << "student answer=" << student_answer << endl;
		cout << "point student answer=" << point_student_answer << endl;
	}
	//Getters
	string GetQuestion() { return question; }
	string GetRightAnswer() { return right_answer; }
	double GetPointRightAnswer() { return point_right_answer; }
	string GetStudentAnswer() { return student_answer; }
	double GetPointStudentAnwser() { return point_student_answer; }
	
	//setters

	void SetQuestion(string question) { this-> question = question; }
	void SetRightAnswer(string right_answer) { this->right_answer = right_answer; }
	void SetPointRightAnswer(double point_right_answer) { this->point_right_answer = point_right_answer; }
	void SetStudentAnswer(string student_answer) { this->student_answer; }
	void SetPointStudentAnwser(double point_student_answer) { this-> point_student_answer = point_student_answer; }

	~Question()
	{
	}
};

