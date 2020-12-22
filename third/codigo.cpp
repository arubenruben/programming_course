#include <iostream>
#include <cstdlib>
#include <unistd.h>

using namespace std;

//Este programa pede ao utilizador a sua idade e diz a faixa etaria

int main()
{
    int idade = 0;

    cout << "Por favor introduza a sua idade" << endl;
    cin >> idade;

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

    return 0;
}
