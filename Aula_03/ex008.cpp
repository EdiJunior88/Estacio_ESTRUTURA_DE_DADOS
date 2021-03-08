#include <iostream>
#include <locale.h> // Setlocale
#include <stdlib.h> // System
#include <string> // Textos em geral
#include <cstring>

using namespace std;

/*
Vamos construir um programa para armazenar valores nesse array
 de estruturas aninhadas que declaramos acima.
*/

struct data{
    int dia, mes, ano;
};

int main()
{
    //Define a localidade "região" do programa
    //Força o cmd a utilizar o padrão UTF-8
    setlocale(LC_ALL, "Portuguese_Brasil");
    system("chcp 65001 > nul");

    struct pagto{
        int codigo;
        float valor;
        data venc;
    } promissorias[2];

    int x;
    for (x = 0; x < 2; x++) {
        cout << "\nCódigo: ";
        cin >> promissorias[x].codigo;
        cout << "\nValor a ser pago: ";
        cin >> promissorias[x].valor;
        cout << "\nDigite dia: ";
        cin >> promissorias[x].venc.dia;
        cout << "\nDigite mês: ";
        cin >> promissorias[x].venc.mes;
        cout << "\nDigite ano: ";
        cin >> promissorias[x].venc.ano;
    }

    system("cls");
    cout << "\nCódigo\tValor\tData de Vencimento\n";
    for (x = 0; x < 2; x++) {
        cout << "\n" << promissorias[x].codigo << "\t" << promissorias[x].valor << "\t" << promissorias[x].venc.dia << "/ "
        << promissorias[x].venc.mes << " /" << promissorias[x].venc.ano;
    }
    cout << "\n\n";
    system("pause");
    return 0;
}