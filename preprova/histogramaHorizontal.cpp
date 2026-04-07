#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    cout << ">> Inicio" << endl;
    string dadosBrutos;

    cout << ">> Insira os dados: ";
    getline(cin, dadosBrutos);

    stringstream ss(dadosBrutos);

    int num;

    int linha = 1;
    int maior = 0;

    while (ss >> num)
    {
        if (linha < 10)
            cout << linha++ << " |";
        else
            cout << linha++ << "|";

        for (int i = 0; i < num; i++)
            cout << " * ";

        if (maior < num)
            maior = num;

        cout << endl;
    }
    cout << " + ";

    for (int i = 1; i <= maior; i++)
    {
        cout << " - ";
    }

    cout << endl;

    return 0;
}