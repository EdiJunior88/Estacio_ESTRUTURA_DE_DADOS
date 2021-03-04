#include <iostream>
#include <locale.h> // Setlocale
#include <stdlib.h> // System
#include <string> // Textos em geral
#include <cstring>

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

    struct prod{
        char nomeProd[21];
        float valor;
    } produto1 = {"martelo", 35.90}, produto2 = {"furadeira", 256.75}, aux;

    if (strcmp(produto1.nomeProd, produto2.nomeProd) > 0){
        aux = produto1; produto1 = produto2; produto2 = aux;
    }

    cout << "\nNome do Produto 1: " << produto1.nomeProd << "\t" << produto1.valor;
    cout << "\nNome do Produto 2: " << produto2.nomeProd << "\t" << produto2.valor;
    cout << "\n\n";

    system("pause");
    return 0;
}