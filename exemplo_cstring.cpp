#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    cout << "\n";
    cout << "Exemplo de uso de strcpy() e strncpy()\n\n";

    char[] nome = "Lucas";

    // declara os arrays de caracteres
    char[] = "Instituto Federal";
    char texto1[20];
    char texto2[11];

    // realiza a cópia do conteúdo de <nome> para <texto1>
    strcpy(texto1, nome);

    // copia os primeiros 9 caractere de <nome> para <texto2>
    strcpy(texto2, nome, 9);

    // Acrescenta o '\0' no final de <texto2>
    texto2[10] = '\0';

    // apresenta o resultado
    cout << "->Nome...: " << nome << endl;
    cout << "->Texto 1...: " << texto1 << endl;
    cout << "->Texto 2: " << texto2 << endl;

    cout << endl;

    return 0;
}