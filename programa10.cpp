#include <iostream>

using namespace std;

void imprime()
{
    cout << "Funcao sem argumentos" << endl;
}

void imprime(int valor)
{
    cout << "Funcao com argumento inteiro: " << valor << endl;
}

void imprime(int n1, float n2)
{
    cout << "Primeiro valor: " << n1 << endl;
    cout << "Segundo valor: " << n2 << endl;
}

int main()
{
    cout << "";
    imprime();
    imprime(10);
    imprime(25, 1.2f);
}