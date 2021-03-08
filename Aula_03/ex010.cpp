#include <iostream>
#include <locale.h> // Setlocale
#include <stdlib.h> // System
#include <string> // Textos em geral
#include <cstring>

using namespace std;

/*
Neste exemplo, passaremos o endereço de um membro do struct por referência. A função
irá calcular a idade da pessoa em 2020 e irá alterar o valor do membro.
*/

struct cad{     //definição de cad
    char nome[31];
    int idade;
};

void idade2020(int &);

int main()
{
    //Define a localidade "região" do programa
    //Força o cmd a utilizar o padrão UTF-8
    setlocale(LC_ALL, "Portuguese_Brasil");
    system("chcp 65001 > nul");

    cad atleta = ("João Renato", 21);     //declaração / atribuição de números
    cout << "\nAmtes da Chamada da Função";
    cout << "\nNome do Atleta: " << atleta.nome << "\tIdade em 2020: " << atleta.idade;
    idade2020(atleta.idade);
    cout << "\n\nDepois da Chamada da Função";
    cout << "\nNome do atleta: " << atleta.nome << "\nIdade em 2020: " << atleta.idade;
    cout << "n\n\n";
    system("pause");
    return 0;
}

void idade2020(int &id){
    id = id + 10;
}