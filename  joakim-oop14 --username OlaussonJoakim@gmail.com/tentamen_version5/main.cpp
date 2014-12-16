#include "Question.h"
#include "StudentTestRegister.h"
#include "StudentTest.h"
using namespace std;

void main3(){
	Question q1;
	Question q2("Fråga 1", "Svar 1", 1, "Studentens svar 1", 1);
	q1.Read();
	q1.Write();
}
void main4(){

}

int main(){

	main3();
	main4();
	system("PAUSE");
	return 0;
}