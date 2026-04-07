    #include <iostream>

    using namespace std;

    
    int elevadoCubo(int *nPtr){

        return *nPtr* *nPtr*nPtr*;
        
    }

    int main(){

        cout << "\n";
        cout << "Exemplo passagem por Valor \n\n";

        int numero = 5;
        
        cout <<"* Valor original: "<<numero <<"\n";
    

        numero = elevadoCubo(&numero);

        cout << "* Valor modificado: "<< numero << "\n\n";
        

        return 0;
    }

    //calcula e retorna o cubo de um argumnto interio
    