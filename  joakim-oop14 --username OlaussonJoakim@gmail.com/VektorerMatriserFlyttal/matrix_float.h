#pragma once
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
	void read_from_keyboard();
	void print();
	matrix_float() {
		r_size = 0;
	}
	~matrix_float();
};

