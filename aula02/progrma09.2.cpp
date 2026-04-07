#include <iostream>

using namespace std;

void incrementarPorValor(int num)
{
    num++;
    cout << "Dentro da funcao: " << num << endl;
}

void incrementarPorReferencia(int &num)
{
    num++;
    cout << "Dentro da funcao: " << num << endl;
}

void incrementarPorPonteiro(int *num)
{
    (*num)++;
    cout << "Dentro da funcao: " << *num << endl;
}

int main()
{
    int a = 5;
    incrementarPorValor(a);
    cout << "[incrementarPorValor] Fora da funcao: " << a << endl;

    a = 5;
    incrementarPorReferencia(a);
    cout << "[incrementarPorReferencia] Fora da funcao: " << a << endl;

    a = 5;
    incrementarPorPonteiro(&a);
    cout << "[incrementarPorPonteiro] Fora da funcao: " << a << endl;

    return 0;
}
