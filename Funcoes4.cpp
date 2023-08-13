#include <iostream>
#include <locale>
#include <cstdlib>

using namespace std;

/* Dado um vetor de 10 inteiros, crie uma função que receba o vetor e retorne o maior
elemento encontrado; */

int maiorElemento(int vector[], int tamanho) 
{
    int maior = vector[0];

    for (int i = 1; i < tamanho; i++) 
	{
        if (vector[i] > maior) 
		{
            maior = vector[i];
        }
    }

    return maior;
}

int main() 
{
	
 setlocale (LC_ALL, "Portuguese");
	
    srand(time(NULL));

    int vector[10];
    int tamanho = 10;

    for (int i = 0; i < tamanho; i++) {
        vector[i] = rand() % 100;
    }

    int maior = maiorElemento(vector, tamanho);

    cout << "O vector de 10 inteiros é: ";
    for (int i = 0; i < tamanho; i++) 
	{
        cout << vector[i] << " ";
    }

    cout << endl << "O maior elemento do vector é: " << maior << endl;

 return 0;
}

