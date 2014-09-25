#pragma once
#include <vector>
class vector_float
{
private: 
	float *v_ptr;
	int size;
	void create_vector(int s);
	void delete_vector();
public:
	vector_float(int s)
	{
		create_vector(s);
	}

	void set(float value, int index);
	void read_from_keyboard();
	void print();
	float &operator [](int i){
		return v_ptr[i];
	}
	vector_float(){
		size = 0;
	}
	~vector_float();
};