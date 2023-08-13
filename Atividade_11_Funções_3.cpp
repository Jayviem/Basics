#include <iostream>
#include <locale>

using namespace std;

/* Crie uma função que possibilite realizar a conversão para Dollars de um valor dado em Euros; */

	double EurovsDolar(double Euros) {
    const double CONVERSAO = 0.91;
    return Euros * CONVERSAO;
}

int main() 
{
	
 setlocale (LC_ALL, "Portuguese");
	
    double Euro, Dolar;

    cout << "Indique um valor em Euros: ";
    cin >> Euro;

    Dolar = EurovsDolar(Euro);

    cout << "O valor em dólares é: " << Dolar << "$";

 return 0;
}

