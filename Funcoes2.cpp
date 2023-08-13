#include <iostream>
#include <locale>

using namespace std;

/* Crie uma função que verifique se um determinado número, inserido pelo utilizador, é primo.
Se for primo, retorne o quadrado desse número, por ex: 7 -> 7 * 7 = 49, utilizando outra
função, caso não seja primo, retorne 0; */

	bool ePrimo(int numero) 
	{
    if (numero < 2) 
	{
        return false;
    }

    for (int i = 2; i < numero; i++) 
	{
        if (numero % i == 0) 
		{
            return false;
        }
    }

    return true;
}

int Quadrado(int n) 
{
    if (ePrimo(n)) 
	{
        return n * n;
    } else 
	{
        return 0;
    }
}

int main() 
{
	
setlocale (LC_ALL, "Portuguese");

    int numero;

    cout << "Indique um número: ";
    cin >> numero;

    int resultado = Quadrado(numero);

    if (resultado != 0) 
	{
        cout << numero << " x " << numero << " = " << resultado << endl;
    } else 
	{
        cout << "0" << endl;
    }

 return 0;
}

