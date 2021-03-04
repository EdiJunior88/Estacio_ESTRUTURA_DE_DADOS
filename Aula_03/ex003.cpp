#include <iostream>
#include <locale.h> // Setlocale
#include <stdlib.h> // System
#include <string> // Textos em geral
#include <cstring>

using namespace std;

/*
Observe a ficha abaixo e defina uma estrutura que armazene todos os dados dela.
Declare variáveis, supondo dois pacientes e construa um programa, lendo os dados via teclado.
Exiba os dados exceto o telefone
*/

int main()
{
    //Define a localidade "região" do programa
    //Força o cmd a utilizar o padrão UTF-8
    setlocale(LC_ALL, "Portuguese_Brasil");
    system("chcp 65001 > nul");

    struct cad{
        char nomePaciente[31], classificacao[25], telefone[14];
        float altura, peso, imc;
    };

    cad paciente1, paciente2; //declaração das variáveis estruturas

    //primeiro paciente
    cout << "\nNome do 1º paciente: "; cin.getline(paciente1.nomePaciente, 31);
    cout << "\nDigite Peso, Altura e IMC, pressionando enter após cada um\n";
    cin >> paciente1.peso >> paciente1.altura >> paciente1.imc;
    cin.get(); //retira o enter deixado pela variável2 numérica
    cout << "\nDigite a classificação: "; cin.getline(paciente1.classificacao, 25);
    cout << "\nDigite o telefone: "; cin.getline(paciente1.telefone, 25);

    //segundo paciente
    cout << "\nNome do 2º paciente: "; cin.getline(paciente2.nomePaciente, 31);
    cout << "\nDigite Peso, Altura e IMC, pressionando enter após cada um\n";
    cin >> paciente2.peso >> paciente2.altura >> paciente2.imc;
    cin.get(); //retira o enter deixado pela variável2 numérica
    cout << "\nDigite a classificação: "; cin.getline(paciente2.classificacao, 25);
    cout << "\nDigite o telefone: "; cin.getline(paciente2.telefone, 25);

    //limpando a tela
    system("cls");
    cout << "\nNome do 1º Paciente: " << paciente1.nomePaciente;
    cout << "\nPeso\tAltura\tIMC\tClassificação: ";
    cout << "\n" << paciente1.peso << "\t" << paciente1.altura << "\t" << paciente1.imc << "\t" << paciente1.classificacao << "\n";
    cout << "\nNome do 2º Paciente: " << paciente2.nomePaciente;
    cout << "\nPeso\tAltura\tIMC\tClassificação: ";
    cout << "\n" << paciente2.peso << "\t" << paciente2.altura << "\t" << paciente2.imc << "\t" << paciente2.classificacao << "\n";

    system("pause");
    return 0;
}