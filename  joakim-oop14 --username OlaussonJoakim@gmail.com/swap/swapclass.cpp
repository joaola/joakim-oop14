#include "swapclass.h"
#include <string>
using namespace std;

swapclass::swapclass()
{
}

void swapclass::SWAP(float *ptr_x, float *ptr_y) {
	float temp;
	temp = *ptr_x;
	*ptr_x = *ptr_y;
	*ptr_y = temp;

}

void swapclass::SWAP(float &x, float &y) {
	float temp;
	temp = x;
	x = y;
	y = temp;
}

swapclass::~swapclass()
{
}