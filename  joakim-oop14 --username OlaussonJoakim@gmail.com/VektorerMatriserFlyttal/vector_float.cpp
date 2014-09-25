#include "vector_float.h"
#include <vector>
#include <iostream>
using namespace std;

void vector_float::create_vector(int s){
	this->v_ptr = new float[s];
	this->size = s;
}

void vector_float::delete_vector(){
	delete[] v_ptr;
	v_ptr = nullptr;
	this->size = 0;
}

void vector_float::read_from_keyboard(){
	
	for (int i = 0; i < this->size; i++)
	{
		cout << "v[" << i << "]=";
		cin >> this->v_ptr[i];
	
	}
}

void vector_float::print() {
	for (int i = 0; i < this->size; i++)
	{
		cout << "v[" << i << "]=";
		cout << this->v_ptr[i];

	}
}

void set(float value, int index) {
	
}


vector_float::~vector_float()
{
	delete[] this->v_ptr;
	this->v_ptr = nullptr;
	size = 0;
}
