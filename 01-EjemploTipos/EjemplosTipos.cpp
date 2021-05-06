
#include <iostream>
#include <cassert>
using namespace std;

int main()
{
	int pruebaUno = 1;
	assert(pruebaUno == 1);
	double pruebaDos = 2.5;
	assert(pruebaDos == 2.5);
	unsigned int pruebaTres = -3;
	//assert(pruebaTres == 2);   aca salta un error y se detiene el programa
	assert(pruebaTres == -3);
	char pruebaCuatro = 'A';
	assert(pruebaCuatro == 'A');
	string pruebaCinco = "A";
	assert(pruebaCinco == "A");
	bool pruebaSeis = true;
	assert(pruebaSeis == true);

}
