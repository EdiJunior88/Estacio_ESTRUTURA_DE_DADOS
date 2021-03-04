#include <iostream>
#include <locale.h> // Setlocale
#include <stdlib.h> // System
#include <string> // Textos em gereal

using namespace std;

/*
Atribuindo valores aos membros
Atribuição na hora da definição/declaração das variáveis.
Atribuição de uma estrutura a outra estrutura um ponto a
 favor das estruturas em relação aos vetores.
*/

int main()
{
    //Define a localidade "região" do programa
    //Força o cmd a utilizar o padrão UTF-8
    setlocale(LC_ALL, "Portuguese_Brasil");
    system("chcp 65001 > nul");



    system("pause");
    return 0;
}