#include <iostream>

using namespace std;

void anoNascimento(int idade)
{
    int anoAtual = 2020;

    cout << "O ano de nascimento e:" << anoAtual - idade << endl;

    return;
}

void faixaEtaria(int idade)
{
    if (idade < 2)
    {
        cout << "Bebe" << endl;
    }
    else if (idade < 13)
    {
        cout << "Criança" << endl;
    }
    else if (idade < 18)
    {
        cout << "Adolescente" << endl;
    }
    else if (idade < 30)
    {
        cout << "Jovem" << endl;
    }
    else if (idade < 60)
    {
        cout << "Adulto" << endl;
    }
    else if (idade < 140)
    {
        cout << "Idoso" << endl;
    }
    else
    {
        cout << "Erro" << endl;
    }
}