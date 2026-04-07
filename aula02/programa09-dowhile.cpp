#include <iostream>

using namespace std;

int main()
{
    int quadradas, triangulares, a, b, r;

    cout << "\nCalculo do numero maximo de participantes de um jogo\n\n";

    cout << "* Informe o total de pecas quadradas: ";
    cin >> quadradas;

    cout << "* Informe o total de pecas triangulares: ";
    cin >> triangulares;

    a = quadradas;
    b = triangulares;

    do
    {
        r = a % b;
        a = b;
        b = r;
    } while (b != 0);

    cout
        << "\n=> Considerando " << quadradas << " peças quadradas e " << triangulares << " peças triangulares, devemos ter no maximo " << a << " participantes";

    return 0;
}