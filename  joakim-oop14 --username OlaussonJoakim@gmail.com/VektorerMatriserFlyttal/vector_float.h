#pragma once
#include <vector>
class vector_float
{
private: 
	void create_vector(int s)		;//Skapar dynamiskt en vektor med storlekens och sätter medlemsvariabeln size till s
	void delete_vector();		//Avallokerar den dynamiska vektor och sätter medlemsvariabeln size till 0
public:
	void set(float value, int index);	//Sätter element med nummer index till värdet value.Test skall ske på index så att det är giltigt.
	void read_from_keyboardt();		//Läser in data till matrisen via strömobjektet cin som representerar det fysiska objektet i form av tangentbordet.
	void print();		//Skriver ut vektorn som en radvektor i ett konsolfönster, t.ex.på formen : [1; 6; 3]
	vector_float();
	~vector_float();
};