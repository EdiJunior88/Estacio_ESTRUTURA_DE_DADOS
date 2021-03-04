#include <iostream>
#include <locale.h> // Setlocale
#include <stdlib.h> // System
#include <string> // Textos em gereal

using namespace std;

/*
Atribuindo valores aos membros
Usando comando de atribuição na hora da declaração das variáveis.
Atenção para as chaves e para a sequência correta dos dados.
*/

int main()
{
    //Define a localidade "região" do programa
    //Força o cmd a utilizar o padrão UTF-8
    setlocale(LC_ALL, "Portuguese_Brasil");
    system("chcp 65001 > nul");

    struct coordenadas{
        int x, y;
    };

    coordenadas a = {-5, 2}, b = {6, 5};
    cout << "\nCoordenadas de a(" << a.x << ", " << a.y << ")";
    cout << "\nCoordenadas de b(" << b.x << ", " << b.y << ")";
    cout << "\n\n";

    system("pause");
    return 0;
}