#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Entre o valor de N: ";
    cin >> n;

    cout << "Tabuada do " << n << "\n\n";

    for (int i = 0; i <= 10; i++)
        cout << n << " x " << i << " = " << (n * i) << "\n";
}