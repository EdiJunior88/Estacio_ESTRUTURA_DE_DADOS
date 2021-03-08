#include <iostream>
#include <locale.h> // Setlocale
#include <stdlib.h> // System
#include <string> // Textos em geral
#include <cstring>

using namespace std;

/*
Reforçando os conceitos
A estrutura criada tem nome : cad.
A estrutura só tem um membro cujo nome é: pal.
O nome do array de estruturas do tipo cad é: palavra.
Esse array tem duas variáveis estruturas: palavra[0] e palavra[1].
Para acessar o único membro da estrutura, a variável palavra[0] precisa
ser unida por um.  ao membro pal, ficando assim: palavra[0].pal.
Da mesma forma,  palavra[1].pal.
Quando usarmos um dos nomes acima com cout, exibirá na tela todo o
conteúdo de um dos elementos do vetor.
Quando desejarmos acessar uma letra de uma das variáveis estruturas,
precisaremos usar a seguinte sintaxe:
nomeDoArray[deslocamento array].membro[deslocamento na variável]
*/

int main()
{
    //Define a localidade "região" do programa
    //Força o cmd a utilizar o padrão UTF-8
    setlocale(LC_ALL, "Portuguese_Brasil");
    system("chcp 65001 > nul");

    struct cad{
        char pal[21];
    } palavra[2];

    int x, y;
    for (x = 0; x < 2; x++) {
        cout << "\nPalavra: ";
        cin.getline(palavra[x].pal, 21);
    }
    palavra[0].pal[0] = toupper(palavra[0].pal[0]);
    system("cls");

    for (x = 0; x < 2; x++) {
        for (y = 0; palavra[x].pal[y] != '\0'; y++) {
            cout << "\n" << palavra[x].pal[y];
        }
        cout << "\n\n";
    }
    cout << "\n\n";
    system("pause");
    return 0;
}