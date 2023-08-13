#include <iostream>
#include <locale>

using namespace std;

/* Crie uma fun��o que receba uma opera��o aritm�tica a realizar e dois n�meros para calcular
as 4 opera��es aritm�ticas. A fun��o dever� retornar o resultado da opera��o. Nota: Utilize
a estrutura �switch-case� para escolher a opera��o a realizar. */

	double calcular(char operacao, double num1, double num2) 
	{
    double resultado;

    switch (operacao) 
	{
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            resultado = num1 / num2;
            break;
        default:
            cout << "Opera��o inv�lida" << endl;
            return 0;
    }

    return resultado;
	}

int main() 
{
	setlocale (LC_ALL, "Portuguese");
	
    double num1, num2, resultado;
    char operacao;

    cout << "Indique a opera��o (+, -, *, /): ";
    cin >> operacao;

    cout << "Indique o primeiro n�mero: ";
    cin >> num1;

    cout << "Indique o segundo n�mero: ";
    cin >> num2;

    resultado = calcular(operacao, num1, num2);

    cout << "Resultado: " << resultado << endl;

 return 0;
}

