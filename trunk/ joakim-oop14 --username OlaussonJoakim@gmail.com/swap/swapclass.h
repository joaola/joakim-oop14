#pragma once
#include <string>
using namespace std;
class swapclass
{
private:
public:
	swapclass();
void SWAP(float *ptr_x, float *ptr_y);
void SWAP(float &x, float &y);
void SWAP(string *ptr_x, string *ptr_y);
	~swapclass();
};

