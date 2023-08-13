#include <iostream>
#include <locale>

using namespace std;

/* Crie um programa em C que calcule o sal�rio l�quido atrav�s de uma fun��o. O sal�rio
bruto, varia em fun��o da sua categoria na empresa, por isso, dever� ter em conta 3
fun��es e os respetivos sal�rios brutos: 1 � Administrativo, 800�, 2 � Vendedor, 1000�, 3 �
Chefe de vendas � 1300�.
� Para calcular o sal�rio l�quido, necessita de saber o seu sal�rio bruto (SB), faltas no
m�s (FM) e taxa de IRS a aplicar. Sugest�o de c�lculo: Calcular o valor pago por dia,
VD = SB / 30 e multiplicar pelos dias trabalhados (VA).
� Posteriormente, ao valor apurado (VA), deve fazer incidir a taxa de IRS, que resulta
do valor anteriormente calculado SL = VA - VA * IRS.
� A fun��o recebe o SB, IRS e FM, que dever� inicialmente pedir ao utilizador e
retorna o sal�rio l�quido.
� No final, o programa dever� imprimir o nome do funcion�rio, fun��o, sal�rio
bruto, dias faltados, sal�rio l�quido e taxa de IRS aplicada. */

	float SL(float SB, float IRS, int faltas) 
	{
    double VA, VD, SL;
    VD = SB / 30;
    VA = VD * (30 - faltas);
    SL = VA - (VA * IRS/100);
    return SL;
}

int main() {
	
 setlocale (LC_ALL, "Portuguese");
	
    int categoria, faltas;
    float SB, IRS;

    cout << "Nome do funcion�rio: ";
    string nome, apelido;
    cin >> nome >> apelido;

    cout << "Categoria (1 - Administrativo, 2 - Vendedor, 3 - Chefe de Vendas): ";
    cin >> categoria;

    switch (categoria) {
        case 1:
            SB = 800;
            cout << "Fun��o: Administrativo\n";
            break;
        case 2:
            SB = 1000;
            cout << "Fun��o: Vendedor\n";
            break;
        case 3:
            SB = 1300;
            cout << "Fun��o: Chefe de Vendas\n";
            break;
        default:
            cout << "Fun��o inv�lida!\n";
            return 1;
    }

    cout << "Sal�rio bruto: " << SB << endl;

    cout << "Dias faltados: ";
    cin >> faltas;

    cout << "Taxa de IRS aplicada: ";
    cin >> IRS;

    float liquido = SL(SB, IRS, faltas);

    cout << "Sal�rio l�quido: " << liquido << endl;
    cout << "Taxa de IRS aplicada: " << IRS << "%" << endl;
    
    cout << "\nNome do funcion�rio: " << nome << " " << apelido << endl;
    cout << "Categoria: " << categoria << endl;
    cout << "Sal�rio bruto: " << SB << " euros" << endl;
    cout << "Faltas no m�s: " << faltas << endl;
    cout << "Sal�rio l�quido: " << liquido << " euros" << endl;
    cout << "Taxa de IRS aplicada: " << IRS << "%" << endl;

 return 0;
}

