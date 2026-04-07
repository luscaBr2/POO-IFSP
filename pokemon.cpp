#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Estrutura
struct Pokemon
{
    // Atributos
    string nome;
    string tipo;
    int nivel;
    int hp;

    void aumentaHP(int pontos)
    {
        hp += pontos;
    }
};

struct Treinador
{
    string nome;
    vector<Pokemon> pokemon;
};

// Função principal
int main()
{
    cout << endl;
    cout << "* Exemplo Pokemon \n\n";

    Pokemon *ptrPokemon = new Pokemon;

    // Utiliza o ponteiro para atribuir os valores ao Pokemon
    ptrPokemon->nome = "Pikachu";
    ptrPokemon->tipo = "Elétrico";
    ptrPokemon->nivel = 1;
    ptrPokemon->hp = 1;

    Treinador *ptrTreinador = new Treinador;

    ptrTreinador->nome = "Ash Katium";
    ptrTreinador->pokemon.push_back(ptrPokemon);

    // Utiliza o ponteiro para acessar os valores do Pokemon
    cout << ">> Dados do Pokemon\n"
         << endl;

    cout << "Nome: " << ptrPokemon->nome << endl;
    cout << "Tipo: " << ptrPokemon->tipo << endl;
    cout << "Nível: " << ptrPokemon->nivel << endl;
    cout << "HP: " << ptrPokemon->hp << endl;

    cout << endl;

    cout << ">> Um Pokémon selvagem apareceu... Vamos batalhar!\n\n";
    cout << "Seu Pikachu venceu uma luta muito difícil... ";
    cout << "Ele ganhou 50 pontos de HP!\n";

    // aumenta o hp do pokemon
    ptrPokemon->aumentaHP(50);

    cout << "Olhe, o que está acontecendo? Seu Pikachu está brilhando!\n";

    // aumenta o nível
    ptrPokemon->nivel++;

    cout << "O Pikachu subiu de nível!\n\n";

    // Utiliza o ponteiro para acessar os valores atualizados do Pokemon
    cout << ">> Dados do Pokemon Atualizados\n"
         << endl;
    cout << "Nome: " << ptrPokemon->nome << endl;
    cout << "Tipo: " << ptrPokemon->tipo << endl;
    cout << "Nível: " << ptrPokemon->nivel << endl;
    cout << "HP: " << ptrPokemon->hp << endl;

    cout << endl;

    //-------------------------------------------------------------------------------

    // Liberando memória
    delete ptrPokemon;

    // Fim do programa
    return 0;
}