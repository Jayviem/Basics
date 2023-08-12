/* Crie um programa que receba 5 valores de temperatura, correspondente à
temperatura máxima e mínima de 5 locais, guardando as mesmas em vetores.
Calcule a média de cada local e guarde a média calculada num novo vetor. Nota:
Deverá ter 3 vetores para, temperaturas mínimas, máximas e média. */#include <iostream>
#include <locale>

using namespace std;

int main()
{
 setlocale (LC_ALL, "Portuguese");

	const int LOCAIS = 5;
    float max[LOCAIS], min[LOCAIS], media[LOCAIS];

    for(int i = 0; i < LOCAIS; i++)
	{
        cout << "Local: " << i+1 << endl;
        cout << "Temperatura máxima: ";
        cin >> max[i];
        cout << "Temperatura mínima: ";
        cin >> min[i];
        cout << endl;
        media[i] = (max[i] + min[i]) / 2;
    }

    cout << "\n\nTemperaturas dos locais:\n" << endl;
    for(int i = 0; i < LOCAIS; i++)
	{
        cout << "Local: " << i+1 << endl;
        cout << "Temperatura máxima: " << max[i] << endl;
        cout << "Temperatura mínima: " << min[i] << endl;
        cout << "Temperatura média: " << media[i] << endl;
        cout << endl;
    }

 return 0;
}

