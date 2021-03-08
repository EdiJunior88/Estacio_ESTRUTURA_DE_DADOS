#include <iostream>
#include <locale.h> // Setlocale
#include <stdlib.h> // System
#include <string> // Textos em geral
#include <cstring>

using namespace std;

/*
Só para reforçar esse conceito que consideramos muito importante, vamos observar o
 programa abaixo. Nele, fizemos referência ao nome da estrutura e aos nomes das
 três variáveis do array, mas somente os nomes das três variáveis foram precedidos
 pelo símbolo & que representa endereço.
*/

int main()
{
    //Define a localidade "região" do programa
    //Força o cmd a utilizar o padrão UTF-8
    setlocale(LC_ALL, "Portuguese_Brasil");
    system("chcp 65001 > nul");

    struct cad{     //definição de cad
        char nome[31];
    };

    cad funcionario[3];     //declaração de funcionário

    //saída
    cout << "\n\nEndereço da estrutura (nem coloquei o &): " << funcionario;
    cout << "\n\nEndereço da 1ª variável da estrutura    : " << &funcionario[0];
    cout << "\n\nEndereço da 2ª variável da estrutura    : " << &funcionario[1];
    cout << "\n\nEndereço da 3ª variável da estrutura    : " << &funcionario[2];
    cout << "n\n\n";
    system("pause");
    return 0;
}