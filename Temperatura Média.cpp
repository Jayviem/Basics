/* Crie um programa que aceite 3 temperaturas inseridas pelo utilizador e apresente
a sua média com 1 casa decimal. Imprima igualmente as situações “temperatura
baixa”, se a média inferior a 10, “Temperatura amena”, se estiver entre 10 e 25
e “Temperatura alta” se a média estiver acima de 25. */

#include <iostream>
#include <locale>

using namespace std;

int main()
{
 setlocale (LC_ALL, "Portuguese");

    int temperaturas = 3;
    float soma = 0;
    float temperatura;

    for(int i = 1; i <= temperaturas; i++) 
	{
        cout << "Insira a temperatura " << i << ": ";
        cin >> temperatura;
        soma += temperatura;
    }

    float media = soma / temperaturas;

    printf("\nA media é: %.1f\n", media);

    if(media < 10)
	{
        cout << "Temperatura baixa" << endl;
    }
	else if(media <= 25)
	{
        cout << "Temperatura amena" << endl;
    }
	else
	{
        cout << "Temperatura alta" << endl;
    }

 return 0;
}

