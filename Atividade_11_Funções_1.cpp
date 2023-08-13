#include <iostream>
#include <locale>

using namespace std;

/* Crie uma função que receba uma operação aritmética a realizar e dois números para calcular
as 4 operações aritméticas. A função deverá retornar o resultado da operação. Nota: Utilize
a estrutura “switch-case” para escolher a operação a realizar. */

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
            cout << "Operação inválida" << endl;
            return 0;
    }

    return resultado;
	}

int main() 
{
	setlocale (LC_ALL, "Portuguese");
	
    double num1, num2, resultado;
    char operacao;

    cout << "Indique a operação (+, -, *, /): ";
    cin >> operacao;

    cout << "Indique o primeiro número: ";
    cin >> num1;

    cout << "Indique o segundo número: ";
    cin >> num2;

    resultado = calcular(operacao, num1, num2);

    cout << "Resultado: " << resultado << endl;

 return 0;
}

