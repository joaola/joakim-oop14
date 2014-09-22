#include "vector_float.h"
#include <vector>
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

vector_float::vector_float(int s)
{
	create_vector(s);
}


vector_float::~vector_float()
{
}
