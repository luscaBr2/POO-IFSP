#include<iostream>
#include<vector>
#include<iomanip>
#include<algorithm>
#include<cmath>

using namespace std;

namespace estatistico{
    double PI = 3.14;
    //calcula média
    double media(const vector<double>& dados) {

        double soma = 0;

        for (auto valor : dados) {
            soma += valor;
        }
        return soma/ dados.size();
    }



//calcular mediana
double mediana(vector<double> dados){
    //ordena os valores do vetor
    sort(dados.begin(), dados.end());

    //calcula o tamanho do vetor
    size_t size = dados.size();

    //retorna o valor da mediana
    if (size % 2 == 0) {
        return (dados[size/ 2 - 1] + dados[size / 2]) /2;

    } else {
        return dados[size / 2];
    }
}

//calculo da variancia
double variancia(const vector<double>& dados) {


    //calcula a media dos valores do vetor
    double m = media(dados);

    //variavel para armazenar a soma dos valores do vetor
    double soma = 0;

    //calcula a soma dos quadrados da diferença entre o valor e sua média
    for(auto valor : dados) {
        soma += (valor - m) * (valor - m);
    }

    //retorna a variancia dos dados
    return soma / dados.size();
}


//calculo do desvio padrão
double desvioPadrao(const vector<double>& dados){

    //retorna o desvio padrão dos dados
    return sqrt(variancia(dados));
}

}

//-----------------------------------------------------------
//função principal
//----------------------------------------------------------

int main(){
    //defina o vetor com os dados
    vector<double> dados = {2, 3, 3,4,5,6,7,8,9,10};

    //cabeçalho
    cout << endl;
    cout <<"Exemplo de utilizacao de namespace \n\n";

    //Formatação
    cout << setprecision(2);
    cout << setiosflags (ios::fixed);



    //utiliza o namespace para calcular o resultado
    cout << "Valor de Pi..: " << estatistico::PI << endl;
     cout << "Média..: " << estatistico::media(dados) << endl;
    cout << "Mediana..: " << estatistico::mediana(dados) << endl;
    cout << "Variancia..: " << estatistico::variancia(dados) << endl;
    cout << "Desvio Padrão..: " << estatistico::desvioPadrao(dados) << endl;
    cout << endl;

    //fim programa
    return 0;

}