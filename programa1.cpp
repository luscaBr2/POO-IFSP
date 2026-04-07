#include <iostream>
#include <iomanip>
#include <cctype>

using namespace std;

//variaveis globais


float resultado,N1,N2;

void entrada();
void saida(string operacao);
void pausa();
void adicao();
void subtracao();
void multiplicacao();
void divisao();

//funçao principal

int main(){

    //declaracao das variaveis
    int opcao = 0;

    //laço para escolha da eperação desejada
    while(opcao != 5) {
        //formatacao
        cout<< setprecision(2);
        cout << setiosflags(ios::right);
        cout << setiosflags(ios::fixed);

        //cabeçalho
        cout<< "\n";
        cout << "--------------" << endl;
        cout << "Programa Calculadora" << endl;
        cout << "Menu Principal" << endl;
        cout << "--------------" << endl;
        cout << "\n" << endl;

        //opçoes do menu
        cout << "[1]-Adição" << endl;
        cout << "[2]-Subtração" << endl;
        cout << "[3]-Multiplicação" << endl;
        cout << "[4]-divisão" << endl;
        cout << "[5]-Encerrar o programa" << endl;
        cout << "\n" << endl;

        //entrada do usuario
        cout << "=> Escolha uma opção: "; cin >> opcao;

        //se o usuario não deseja encerrar o programa
        if (opcao != 5){
            //verifica a opção escolhida pelo usuario
            switch(opcao){
                //adição
                case 1:
                    adicao();
                    break;
                //subtrção
                case 2:
                    subtracao();
                    break;

                    case 3:
                    multiplicacao();
                    break;

                    case 4:
                    divisao();
                    break;



            }


        }
        //encerrar programa
        else{
            cout << "\nPrograma encerrado com sucesso\n\n";
        }


    }

    //fim do programa
    return 0;
}

//Definição das funções

void entrada(){
    cout << "\n";
    cout << "*Informe o primeiro número: "; cin >> N1;
    cout<< "*Informe o segundo número: "; cin >> N2;
}


void saida(string operacao){
    cout << "\n";
    cout << "=> O resultado da" << operacao;
    cout<< "entre"<< N1 << "e"  << N2;
    cout << "é" << resultado << "!\n";

    //simula uma psau no programa
    pausa();
}


void pausa(){

    char letra;

    cout << "\n";
    cout << "Tecle <C> + <Enter> para voltar ao menu: ";

    //laço para receber a entrada do usuario
    do{
        //obtém a entrada do usuário
        letra = cin.get();

        //converte para ietras maisculas
        letra = toupper(letra);
    }while(letra != 'C');
}
    
void adicao(){
    
    //cabeçalho
    cout <<"\n";
    cout << "Rotina de Adição " << endl;
    cout<< "------------------------"<< endl;

    //executa a função para obter os dados
    entrada();

    //calcula a adição
    resultado = N1 + N2;

    //Executa A FUNÇÃO PARA EXIBIR O RESULTADO
    saida("adição");
}

void subtracao(){
    
    //cabeçalho
    cout <<"\n";
    cout << "Rotina de subtração " << endl;
    cout<< "------------------------"<< endl;

    //executa a função para obter os dados
    entrada();

    //calcula a adição
    resultado = N1 - N2;

    //Executa A FUNÇÃO PARA EXIBIR O RESULTADO
    saida("subtração");
}


void multiplicacao(){
    
    //cabeçalho
    cout <<"\n";
    cout << "Rotina de Multiplicação " << endl;
    cout<< "------------------------"<< endl;

    //executa a função para obter os dados
    entrada();

    //calcula a adição
    resultado = N1 * N2;

    //Executa A FUNÇÃO PARA EXIBIR O RESULTADO
    saida("mulplicação");
}


void divisao(){
    
    //cabeçalho
    cout <<"\n";
    cout << "Rotina de divisão " << endl;
    cout<< "------------------------"<< endl;

    //executa a função para obter os dados
    entrada();

    if (N2 == 0) {
        cout << "\n";
        cout << "Erro de divisão\n";

        //simulada uma pausa no programa
        pausa();
    }

    //caso contrario
    else{

        //calcula a divisão
        resultado = N1 / N2;

        //executa a função para exibir o resultado
        saida("divisao");  
    }



}



