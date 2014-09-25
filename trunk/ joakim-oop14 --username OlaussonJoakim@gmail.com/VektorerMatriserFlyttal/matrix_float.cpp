#include "matrix_float.h"
#include <vector>
#include <iostream>
using namespace std;

matrix_float::matrix_float()
{
}

void matrix_float::create_matrix(int t, int c){
	this->mptr = new float*[c];
	for (int i = 0; i < c_size; i++){
		this->mptr[i] = new float[t];
		for (int j = 0; j < r_size; j++){
			this->mptr[j];
		}
	}
}



void matrix_float::delete_matrix(){
	delete[] mptr;
	mptr = nullptr;
	this->c_size = 0;
	this->r_size = 0;
}

void set(int value, int r, int c){

}

matrix_float::~matrix_float()
{
	delete[] this->mptr;
	mptr = nullptr;
	r_size = 0;
	c_size = 0;
}