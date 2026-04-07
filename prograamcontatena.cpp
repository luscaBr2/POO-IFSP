#include <iostream>
#include <cstring>

using namespace std;

int main(){

    cout <<"\n";
    cout <<"Exemplo de uso de strcpy() e strncpy()\n\n";

    //Declara os arrays de caracteres
    char parte1[50] = "Instituto ";
    char parte2[] = "Federal";
    char texto[20] = "";

    //concatena <parte2> dentro de <parte1>
    strcat(parte1, parte2);

    //copia os primeiros 9 caractere de <nome> para <texto2>
    strcat(texto, parte1, 5);

    //Acrescenta o '\0' no final de <texto2>
    texto[10] = '\0';

    //apresenta o resultado
    cout <<"->Nome...: " << parte1 << endl;
    cout <<"->Texto 1...: " << parte2 << endl;
    cout <<"->Texto 2: " << texto << endl;

    cout << endl;

    return 0;
    
    }