#include <iostream>
#include <locale>

using namespace std;

/* Crie um programa em C que calcule o salário líquido através de uma função. O salário
bruto, varia em função da sua categoria na empresa, por isso, deverá ter em conta 3
funções e os respetivos salários brutos: 1 – Administrativo, 800€, 2 – Vendedor, 1000€, 3 –
Chefe de vendas – 1300€.
• Para calcular o salário líquido, necessita de saber o seu salário bruto (SB), faltas no
mês (FM) e taxa de IRS a aplicar. Sugestão de cálculo: Calcular o valor pago por dia,
VD = SB / 30 e multiplicar pelos dias trabalhados (VA).
• Posteriormente, ao valor apurado (VA), deve fazer incidir a taxa de IRS, que resulta
do valor anteriormente calculado SL = VA - VA * IRS.
• A função recebe o SB, IRS e FM, que deverá inicialmente pedir ao utilizador e
retorna o salário líquido.
• No final, o programa deverá imprimir o nome do funcionário, função, salário
bruto, dias faltados, salário líquido e taxa de IRS aplicada. */

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

    cout << "Nome do funcionário: ";
    string nome, apelido;
    cin >> nome >> apelido;

    cout << "Categoria (1 - Administrativo, 2 - Vendedor, 3 - Chefe de Vendas): ";
    cin >> categoria;

    switch (categoria) {
        case 1:
            SB = 800;
            cout << "Função: Administrativo\n";
            break;
        case 2:
            SB = 1000;
            cout << "Função: Vendedor\n";
            break;
        case 3:
            SB = 1300;
            cout << "Função: Chefe de Vendas\n";
            break;
        default:
            cout << "Função inválida!\n";
            return 1;
    }

    cout << "Salário bruto: " << SB << endl;

    cout << "Dias faltados: ";
    cin >> faltas;

    cout << "Taxa de IRS aplicada: ";
    cin >> IRS;

    float liquido = SL(SB, IRS, faltas);

    cout << "Salário líquido: " << liquido << endl;
    cout << "Taxa de IRS aplicada: " << IRS << "%" << endl;
    
    cout << "\nNome do funcionário: " << nome << " " << apelido << endl;
    cout << "Categoria: " << categoria << endl;
    cout << "Salário bruto: " << SB << " euros" << endl;
    cout << "Faltas no mês: " << faltas << endl;
    cout << "Salário líquido: " << liquido << " euros" << endl;
    cout << "Taxa de IRS aplicada: " << IRS << "%" << endl;

 return 0;
}

