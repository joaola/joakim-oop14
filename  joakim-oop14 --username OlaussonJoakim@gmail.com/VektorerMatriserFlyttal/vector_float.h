#pragma once
#include <vector>
class vector_float
{
private: 
	void create_vector(int s)		;//Skapar dynamiskt en vektor med storlekens och s�tter medlemsvariabeln size till s
	void delete_vector();		//Avallokerar den dynamiska vektor och s�tter medlemsvariabeln size till 0
public:
	void set(float value, int index);	//S�tter element med nummer index till v�rdet value.Test skall ske p� index s� att det �r giltigt.
	void read_from_keyboardt();		//L�ser in data till matrisen via str�mobjektet cin som representerar det fysiska objektet i form av tangentbordet.
	void print();		//Skriver ut vektorn som en radvektor i ett konsolf�nster, t.ex.p� formen : [1; 6; 3]
	vector_float();
	~vector_float();
};