#include <iostream>
#include "biblioteca.cpp"

using namespace std;

//Este programa pede ao utilizador a sua idade e diz a faixa etaria

int main()
{
    int idade = 0;

    cout << "Por favor introduza a sua idade" << endl;
    cin >> idade;

    faixaEtaria(idade);
    anoNascimento(idade);

    return 0;
}