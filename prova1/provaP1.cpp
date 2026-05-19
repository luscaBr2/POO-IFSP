#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
    cout << ">> Inicio: Prova P1" << endl;

    cout << ">> Informe o total de avaliações: ";
    int quantidade;
    cin >> quantidade;

    if (quantidade < 0)
        quantidade = 0;

    int num;

    vector<int> valores;
    int maior = 0;

    cout << ">> Informe os valores, separados por espaco: ";
    for (int i = 0; i < quantidade; i++)
    {
        cin >> num;

        valores.push_back(num);

        if (num > maior)
            maior = num;
    }

    for (int linha = maior; linha >= 1; linha--)
    {
        if (linha < 10)
            cout << " " << linha << " |";
        else
            cout << linha << " |";

        for (int valor : valores)
        {
            if (valor >= linha)
                cout << " *";
            else
                cout << "  ";
        }

        cout << endl;
    }

    cout << "   +";

    for (size_t i = 0; i < valores.size(); i++)
        cout << " -";

    cout << endl;

    cout << "    ";
    for (int valor : valores)
        cout << setw(2) << valor;

    cout << endl;

    cout << ">> Fim: Prova P1";

    return 0;
}