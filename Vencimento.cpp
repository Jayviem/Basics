/* Crie um programa que realize o cálculo do vencimento líquido de um funcionário
conforme uma tipologia de acordo com a seguinte tabela e que realize cálculos
até ao utilizador inserir um tipo de funcionário = “99”:
Tipo	Vencimento Bruto	IRS
1 		1000€ 				5%
2 		1200€ 				6%
3 		1500€ 				7%
• Nota: Utilize a estrutura “switch-case” para determinar o tipo de funcionário
e realizar os respetivos cálculos. */

#include <iostream>
#include <locale>

using namespace std;

int main()
{
 setlocale (LC_ALL, "Portuguese");

	int tipo;
    float bruto, liquido, IRS;

    do
	{
        cout << "Insira o tipo de funcionário (1, 2 ou 3).\n99 termina o programa.\nTipo de funcionário: ";
        cin >> tipo;

        switch(tipo)
		{
            case 1:
                bruto = 1000;
                IRS = 0.05;
                break;
            case 2:
                bruto = 1200;
                IRS = 0.06;
                break;
            case 3:
                bruto = 1500;
                IRS = 0.07;
                break;
            case 99:
                cout << "Programa terminado." << endl;
                return 0;
            default:
                cout << "Tipo inválido." << endl;
                continue;
        }

        liquido = bruto * (1 - IRS);
        cout << "Vencimento líquido: " << liquido << " euros\n" << endl;
    } while(tipo != 99);

 return 0;
}

