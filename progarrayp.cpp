#include <iostream>

using namespace std;
//--
//prototipo
//==

void cantar(int);
void dancar(int);
void enrolar(int);

//------
//função principal
//-------
int main(){

    cout <<"\n";
    cout << "Array de Ponteiros par Funções\n\n";

    //Declara e inicilaiza um array de 3 ponteiros para funções, que aceitam um argumento inteiro e não retornam nenhum valor

    void (*funcoes[3])(int) = {
        cantar,
        dancar,
        enrolar
    };

//controla a opçaõ de usuário
    int opcao;

//recebe a entrada do usuário
cout <<" >> Informe a opcao desejada (0, 1 ou 2): ";
cin >> opcao;
cout << endl;

//loop para processar a escolha do usuário
while ((opcao >= 0) && (opcao < 3))
{
    //executa a função de acrodo com a opção escolhida, passando o valor da opção como argumento
    (*funcoes[opcao])(opcao);

    //Recebe a entrada do usuário novamente
    cout <<" >> Informe a opção desejada (0, 1,2 ou 3 para sair): ";
    cin >> opcao;
    cout << endl;


}

return 0;


}

//----------------------------
//Definição das funções
//----------------------------

//função cantar()
void cantar(int opcao) {
    cout << "* Você escolheu a opção " << opcao << ". Vamos cantar!\n\n";

}
void dancar(int opcao) {
    cout << "* Você escolheu a opção " << opcao << ". Vamos dancar!\n\n";
    
}
void enrolar(int opcao) {
    cout << "* Você escolheu a opção " << opcao << ". Vamos enrolar!\n\n";
    
}
