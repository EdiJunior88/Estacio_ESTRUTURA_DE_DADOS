#include <iostream>
#include <locale.h> // Setlocale
#include <stdlib.h> // System
#include <string> // Textos em geral
#include <cstring>

using namespace std;

/*
Neste exemplo, chamaremos a função três vezes, passando os membros da
estrutura de tal maneira que retorne o maior dos quatro números.
*/

struct cad{     //definição de cad
    float a, b, c, d;
};

float maior2(float n1, float n2);

int main()
{
    //Define a localidade "região" do programa
    //Força o cmd a utilizar o padrão UTF-8
    setlocale(LC_ALL, "Portuguese_Brasil");
    system("chcp 65001 > nul");

    cad numeros = (23, 89, 13, 62);     //declaração / atribuição de números
    cout << "\nNúmeros de estrutura: ";
    cout << "\n" << numeros.a << "\t" << numeros.b << "\t" << numeros.c << "\t" << numeros.d;
    cout << "\n\nO maior dos quatros";
    cout << "\n\t" << maior2(maior2(numeros.a, numeros.b), maior2(numeros.c, numeros.d));
    cout << "\n\n\n";
    cout << "\n\n";
    system("pause");
    return 0;
}

float maior2(float n1, float n2){
    if (n1 > n2)
        return n1;
    else
        return n2;
}