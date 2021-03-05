#include <iostream>
#include <locale.h> // Setlocale
#include <stdlib.h> // System
#include <string> // Textos em geral
#include <cstring>

using namespace std;

/*
Observe a ficha abaixo e defina uma estrutura que armazene todos os dados dela.
Declare variáveis, supondo 1 atleta e construa um programa, atribuindo os
valores dos membros, um a um, após a declaração.
*/

int main()
{
    //Define a localidade "região" do programa
    //Força o cmd a utilizar o padrão UTF-8
    setlocale(LC_ALL, "Portuguese_Brasil");
    system("chcp 65001 > nul");

    //definição das estruturas
    struct cadastro{
        char nomeAtleta[31], esporte[25], categoria[15], telefone[15];
        float ajudaCusto;
        int anoNas;
    };

    cadastro atleta; //declara atleta como uma variável tipo cadastro

    //Atribui valores dos membros
    strcpy(atleta.nomeAtleta, "João Lopes");
    strcpy(atleta.esporte, "Volley");
    strcpy(atleta.categoria, "Adulto");
    strcpy(atleta.telefone, "21-22334455");
    atleta.ajudaCusto = 2000;
    atleta.anoNas = 1989;

    //limpando a tela
    system("cls");

    cout << "\n=====================================================================";
    cout << "\n= Nome       : " << atleta.nomeAtleta << "                                           =";
    cout << "\n= Esporte    : " << atleta.esporte << "\t\tCategoria: " << atleta.categoria << "                   =";
    cout << "\n= Valor da ajuda de custo : " << atleta.ajudaCusto << "                                    =";
    cout << "\n= Telefone   : " << atleta.telefone << "\t\tAno_nasc: " << atleta.anoNas << "              =";
    cout << "\n=====================================================================";
    cout << "\n\n";
    system("pause");
    return 0;
}