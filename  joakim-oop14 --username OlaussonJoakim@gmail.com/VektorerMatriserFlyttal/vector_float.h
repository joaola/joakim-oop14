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
	void set(float value, int index);
	void read_from_keyboardt();
	void print();
	float &operator [](int i){
		return v_ptr[i];
	}
	vector_float();
	vector_float(int s);
	~vector_float();
};