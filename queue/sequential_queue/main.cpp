#include "sequential_queue.hpp"
#include "sequential_queue.cpp"
#include <iostream>
using namespace std;


// INTERFACE DO TAD

int main(){
   
    tfila fila;

    // criando uma fila vazia
    criarFila(&fila);

    short int opcao;
    int dado;     

    do {
        cout << "1 - Enfileirar dado" << endl;
        cout << "2 - Desenfileirar dado" << endl;
        cout << "3 - Exibir os elementos da fila" << endl;
        cout << "4 - Exibir o numero de elementos da fila" << endl;
        cout << "5 - Exibir o elemento do inicio da fila" << endl;
        cout << "6 - Verificar se a fila esta vazia" << endl;
        cout << "7 - Verificar se a fila esta cheia" << endl;
        cout << "8 - Limpar fila" << endl;
        cout << "9 - Sair" << endl << endl;

        cout << "Informe a opcao desejada:";
        cin >> opcao;



        switch(opcao){
            case 1:
                cout << "Digite o dado que deseja enfileirar: ";
                cin >> dado;
                enfileirar(&fila, dado);
                break;
            case 2:
                desenfileirar(&fila);
                break;
            case 3:
                elementosFila(&fila);
                break;
            case 4:
                cout << "A fila possui " << nElementosFila(&fila) << " elementos" << endl << endl;
                break;
            case 5:
                inicioFila(&fila);
                break;
            case 6:
                if (filaVazia(&fila))
                    cout << "A fila esta vazia!" << endl << endl;
                else
                    cout << "A fila nao esta vazia!" << endl << endl;
                break;
            case 7: 
                if (filaCheia(&fila))
                    cout << "A fila esta cheia!" << endl << endl;
                else
                    cout << "A fila nao esta cheia!" << endl << endl;
                break;
            case 8:
                limparFila(&fila);
                break;
        }

    } while (opcao!=9);


    return 0;
}
