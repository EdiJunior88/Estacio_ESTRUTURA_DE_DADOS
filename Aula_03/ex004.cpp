#include <iostream>
#include <locale.h> // Setlocale
#include <stdlib.h> // System
#include <string> // Textos em geral
#include <cstring>

using namespace std;

/*
Observe a ficha abaixo e defina uma estrutura que armazene todos os dados dela.
Declare variáveis, supondo três passageiros e construa um programa, atribuindo
 os valores dos membros na definição/declaração.
*/

int main()
{
    //Define a localidade "região" do programa
    //Força o cmd a utilizar o padrão UTF-8
    setlocale(LC_ALL, "Portuguese_Brasil");
    system("chcp 65001 > nul");

    struct aviao{
        char nomePassageiro[21], origem[15], destino[15], numeroPassagem[15], identidade[15], telefone[15];
    }
    passageiro1 = {"Mr Lopes, João", "Brasil", "Londres", "Gol 1234", "IFP22222222", "2123333333"},
    passageiro2 = {"Mr Lopes, Teresa", "Brasil", "Paris", "Gol 1234", "IFP77777777", "2123344444"},
    passageiro3 = {"Mr Lopes, Marcelo", "Brasil", "Lisboa", "Gol 1239", "IFP23456784567", "21234567890"};

    //limpando a tela
    system("cls");

    cout << "\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
    cout << "\nNome: " << passageiro1.nomePassageiro;
    cout << "\nOrigem: " << passageiro1.origem << "\t\tDestino: " << passageiro1.destino;
    cout << "\nNúmero da Passagem: " << passageiro1.numeroPassagem << "\tIdentidade: " << passageiro1.identidade << "\tTelefone: " << passageiro1.telefone;
    cout << "\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";

    cout << "\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
    cout << "\nNome: " << passageiro2.nomePassageiro;
    cout << "\nOrigem: " << passageiro2.origem << "\t\tDestino: " << passageiro2.destino;
    cout << "\nNúmero da Passagem: " << passageiro2.numeroPassagem << "\tIdentidade: " << passageiro2.identidade << "\tTelefone: " << passageiro2.telefone;
    cout << "\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";

    cout << "\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
    cout << "\nNome: " << passageiro3.nomePassageiro;
    cout << "\nOrigem: " << passageiro3.origem << "\t\tDestino: " << passageiro3.destino;
    cout << "\nNúmero da Passagem: " << passageiro3.numeroPassagem << "\tIdentidade: " << passageiro3.identidade << "\tTelefone: " << passageiro3.telefone;
    cout << "\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
    cout << "\n\n";
    system("pause");
    return 0;
}