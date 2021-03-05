#include <iostream>
#include <locale.h> // Setlocale
#include <stdlib.h> // System
#include <string> // Textos em geral
#include <cstring>
#define TAM 3

using namespace std;

/*
Tomando como base o array de estruturas, construa um programa que armazene código e preço de compra
 de 1000 produtos, calcule um reajuste de 60% para venda e exiba código, valor de compra e venda.
 Observação: Para que você pudesse visualizar a entrada e a saída, foi usada a diretiva define que
 criou a constante TAM com valor 3 (deveria ser 1000).
*/

int main()
{
    //Define a localidade "região" do programa
    //Força o cmd a utilizar o padrão UTF-8
    setlocale(LC_ALL, "Portuguese_Brasil");
    system("chcp 65001 > nul");

    struct prodCad{
        int codigo;
        float precoCompra, precoVenda;
    };
    prodCad produtos[TAM];
    int x, num;

    for (x = 0; x < TAM ; x++) {
        cout << "\nCódigo do Produto 0-10000: ";
        cin >> num;
        while (num < 0 || num > 10000){
            cout << "\nCódigo Inválido";
            cout << "\nCódigo do Produto 0-10000: ";
            cin >> num;
        }

        produtos[x].codigo = num;
        cout << "\nPreço de compra: ";
        cin >> produtos[x].precoCompra;
        produtos[x].precoVenda = produtos[x].precoCompra * 1.6;
    }

    system("cls");
    cout << "\n\nCódigo\tCompra\tVenda\n";
    for (x = 0; x < TAM ; x++) {
        cout << "\n" << produtos[x].codigo << "\t" << produtos[x].precoCompra << "\t" << produtos[x].precoVenda;
    }
    cout << "\n\n";
    system("pause");
    return 0;
}