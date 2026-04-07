#include <iostream>

using namespace std;

int main()
{
    float a, b, c;

    cout << "\nDesvio condicional aninhado\n\n";
    cout << "Informe o valor de A: ";
    cin >> a;
    cout << "Informe o valor de B: ";
    cin >> b;
    cout << "Informe o valor de C: ";
    cin >> c;

    if (a < (b + c) && b < (a + c) && c < (a + b))
    {
        cout << "\nOs valores fornecidos formam um triangulo ";

        if (a == b && b == c)
            cout << "equilatero";
        else if (a == b || a == c || b == c)
            cout << "isósceles";
        else
            cout << "escaleno";
    }
    else
        cout << "\nOs valores fornecidos NAO formam um triangulo ";

    return 0;
}