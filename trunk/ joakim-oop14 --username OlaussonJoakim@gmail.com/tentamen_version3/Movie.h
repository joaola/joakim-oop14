#pragma once
#include <string>
#include <iostream>
#include <sstream>
#include <clocale>
#include "movieRegister.h"

class Movie{
private:
	string title;
	string actors;
	int playing_time;
	//bool isOwner;
	//bool hasSeenIt;

public:
	
	Movie(){
		title = "";
		actors = "";
		playing_time = 0;
		//this->isOwner = false;
		//this->hasSeenIt = false;
	}

	Movie(string title, string actors, int playing_time){
		this-> title = title;
		this->actors = actors;
		this->playing_time = playing_time;

		
	}
	/*getters*/
	string getTitle(void){return title;}

	string getActors(void){return actors;}

	int getPlayingTime(void){return playing_time;}

	/*setters*/
	void setTitle(string title){this->title = title;}

	void setActors(string actors){this->actors = actors;}

	void setPlayingTime(int playing_time){this->playing_time = playing_time;}

	void Read()
	{
		string str;
		
		getline(cin, str);

		cout << "titel=";
		getline(cin, title);

		cout << "actors";
		getline(cin, actors);

		cout << "Playing time";
		cin >> playing_time;
	}

	void Write()
	{
		cout << "title=" << title << endl;
		cout << "actors=" << actors << endl;
		cout << "playing time=" << playing_time << endl;
	}

	friend ostream & operator << (ostream &out, const Movie &m)
	{
		out << "(";
		out << m.title << ",";
		out << m.actors<< ",";
		out << m.playing_time; // << ",";
		out << ")";
		return out;
	}

	friend istream & operator >> (istream &in, Movie &m)
	{
		string s;
		getline(in, s, '(');

		getline(in, m.title, ','); //string

		getline(in, m.actors, ','); //string

		in >> m.playing_time; //int

		getline(in, s, ')');

		return in;
	}

	~Movie(){

	}
};