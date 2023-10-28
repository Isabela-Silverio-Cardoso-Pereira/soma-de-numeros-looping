/******************************************************************************

Escreva um programa em C++ que solicita ao usuário um número inteiro positivo N e calcula a soma dos números de 1 a N utilizando um loop.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int n, soma;
    cout << "digite um numero";
    cin >> n;
    
    for(int i =1 ; i <=n; i++){
        soma += i;
        cout << soma;
    }
}
