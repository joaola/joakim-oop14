#pragma once
#include <vector>
class vector_float
{
private: 
	void create_vector(int s);
		void delete_vector();
public:
	void set(float value, int index);
	void read_from_keyboardt();
	void print();		
	vector_float();
	~vector_float();
};