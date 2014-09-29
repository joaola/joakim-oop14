#pragma once
#include <vector>
class matrix_float
{

private:
	float **mptr;
	int r_size;
	int c_size;
	void create_matrix(int r, int c);
	void delete_matrix();
public:
	void set(int value, int r, int c);
	void print();
	//void read_from_keyboard();
	matrix_float(int c, int r)
	{
		create_matrix(c,r);
	}
	float &operator [](int i){
		return *mptr[i];
	}
	matrix_float() {
	r_size = 0;
	c_size = 0;
		}
	~matrix_float();

};