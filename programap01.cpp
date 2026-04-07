#include <iostream>

using namespace std;

int main(){

    int idade = 25;
    int* idadePtr = 0;
    idadePtr = &idade;
   

    cout << "1. Valor <idade>: " << idade << "\n";
    cout << "1. Endereço de <idade>: "<< &idade << "\n\n";
    cout << "2. Valor de <*idadePtr>: "<< idadePtr << "\n";
    cout << "2. Valor apontado por <*idadePtr>: " << *idadePtr << "\n\n";

    return 0;
}