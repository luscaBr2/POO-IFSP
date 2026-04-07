#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int particionar(vector<string> &nomes, int baixo, int alto)
{
    string pivô = nomes[alto]; // escolhe o último elemento como pivô
    int i = baixo - 1;         // indice do menor elemento

    for (int j = baixo; j < alto; j++)
    {
        // se o nome atual for menor que o pivô, troque
        if (nomes[j] < pivô)
        {
            i++;
            swap(nomes[i], nomes[j]);
        }
    }
    swap(nomes[i + 1], nomes[alto]);
    return i + 1;
}

void quickSort(vector<string> &nomes, int baixo, int alto)
{
    if (baixo < alto)
    {
        int pi = particionar(nomes, baixo, alto); // posicao do pivo
        quickSort(nomes, baixo, pi - 1);          // ordena os elementos antes do pivo
        quickSort(nomes, pi + 1, alto);           // ordena os elementos após o pivo
    }
}

int main()
{
    vector<string> nomes(10);

    for (int i = 0; i < 10; i++)
    {
        cout << "Informe o nome " << i + 1 << ": ";
        getline(cin, nomes[i]);
    }

    quickSort(nomes, 0, nomes.size() - 1);

    cout << "\nNomes ordenados:\n";
    for (const auto &nome : nomes)
    {
        cout << nome << endl;
    }

    return 0;
}