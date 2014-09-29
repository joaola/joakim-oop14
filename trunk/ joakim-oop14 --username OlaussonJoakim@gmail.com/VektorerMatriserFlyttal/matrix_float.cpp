#include "matrix_float.h"
#include <vector>
#include <iostream>
using namespace std;

matrix_float::matrix_float(){
}
void matrix_float::create_matrix(int t, int c){
	this->mptr = new float*[c];
	for (int i = 0; i < c_size; i++){
		this->mptr[i] = new float[t];
		}
	}



void matrix_float::delete_matrix(){
	for (int i = 0; i < r_size; i++)
	{
		delete[] mptr[i];
	}
	delete[] mptr;
	mptr = nullptr;
	this->c_size = 0;
	this->r_size = 0;
}

void matrix_float::set(int value, int r, int c){
	mptr[r][c] = value;
	cin >> r >> c;
	cout << "r: " << endl << "c: " << endl;
}

//void matrix_float::read_from_keyboard() {}


void matrix_float::print(){
	int i = 0;
	int j = 0;
	while (i < r_size && j < c_size)
	{
		cout << "m[" << i << j << "]=";
		cout << this->mptr[i][j] << endl;
		j++;
		i++;
	}
}

matrix_float::~matrix_float()
{
	delete[] this->mptr;
	mptr = nullptr;
	r_size = 0;
	c_size = 0;
}