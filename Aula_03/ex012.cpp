#include <iostream>
#include <locale.h> // Setlocale
#include <stdlib.h> // System
#include <string> // Textos em geral
#include <cstring>

using namespace std;

/*
Neste exemplo, apresentaremos uma função que recebe uma
 estrutura para ser manipulada dentro da função.
*/

struct cad{     //definição de cad
    int matricula;
    float CR;
};

void Exibe(cad AL);     //função com parâmetro que é uma estrutura

int main()
{
    //Define a localidade "região" do programa
    //Força o cmd a utilizar o padrão UTF-8
    setlocale(LC_ALL, "Portuguese_Brasil");
    system("chcp 65001 > nul");

    cad aluno;      //declaração de aluno
    cout << "\nMatrícula do aluno: ";
    cin >> aluno.matricula;
    cout << "\nDigite CR: ";
    cin >> aluno.CR;
    Exibe(aluno);       //chama a função

    //saída
    return 0;
}

void Exibe(cad AL){
    system("cls");
    cout << "\nMatrícula do aluno: " << AL.matricula << "\tCR: " << AL.CR;
    cout << "n\n\n";
    system("pause");
}