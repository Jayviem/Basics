/* Crie um programa que, através de uma função, converta um valor de Euros para
Dólares, onde deverá ser fornecido o valor a converter e a taxa de câmbio. */

#include <iostream>
#include <locale>

using namespace std;

double converter(double euro, double taxa)
{
    double dolar = euro * taxa;
    
    return dolar;
}

int main()
{
	
 setlocale (LC_ALL, "Portuguese");

    double euro, taxa, dolar;

    cout << "Indique o valor em Euros: ";
    cin >> euro;
    cout << "Indique a taxa de câmbio: ";
    cin >> taxa;

    dolar = converter(euro, taxa);

    cout << "O valor em dólares é: " << dolar << "$";

 return 0;
}
