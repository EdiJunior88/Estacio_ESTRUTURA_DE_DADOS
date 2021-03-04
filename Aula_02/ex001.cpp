#include <iostream>
#include <locale.h>
#include <windows.h>

using namespace std;

void asteriscos() {
    for (int x = 1; x <= 20; x++)
    {
        cout << "'";
    }
}

int main()
{
    //Define a localidade "região" do programa
    //Força o cmd a utilizar o padrão UTF-8
    setlocale(LC_ALL, "Portuguese_Brasil");
    system("chcp 65001 > nul");

    cout << "\nEstudo de Funções\n";
    asteriscos();
    cout << "\nConhecendo o tipo void\n";
    asteriscos();
    cout << "\nSem parâmetros\n";
    asteriscos();
    cout << "\n\n";

    system("pause");
    return 0;
}