#include "sequential_stack.hpp"
#include "sequential_stack.cpp"
#include <iostream>
using namespace std;


// INTERFACE DO TAD

int main(){
   
    tpilha pilha;

    // criando uma pilha vazia
    criarPilha(&pilha);

    short int opcao;
    int dado;     

    do {
        cout << "1 - Empilhar dado" << endl;
        cout << "2 - Desempilhar dado" << endl;
        cout << "3 - Exibir os elementos da pilha" << endl;
        cout << "4 - Exibir o numero de elementos da pilha" << endl;
        cout << "5 - Exibir o elemento do topo da pilha" << endl;
        cout << "6 - Verificar se a pilha esta vazia" << endl;
        cout << "7 - Verificar se a pilha esta cheia" << endl;
        cout << "8 - Limpar pilha" << endl;
        cout << "9 - Sair" << endl << endl;

        cout << "Informe a opcao desejada:";
        cin >> opcao;



        switch(opcao){
            case 1:
                cout << "Digite o dado que deseja empilhar: ";
                cin >> dado;
                empilhar(&pilha, dado);
                break;
            case 2:
                desempilhar(&pilha);
                break;
            case 3:
                elementosPilha(&pilha);
                break;
            case 4:
                cout << "A pilha possui " << nElementosPilha(&pilha) << " elementos" << endl << endl;
                break;
            case 5:
                topoPilha(&pilha);
                break;
            case 6:
                if (pilhaVazia(&pilha))
                    cout << "A pilha esta vazia!" << endl << endl;
                else
                    cout << "A pilha nao esta vazia!" << endl << endl;
                break;
            case 7: 
                if (pilhaCheia(&pilha))
                    cout << "A pilha esta cheia!" << endl << endl;
                else
                    cout << "A pilha nao esta cheia!" << endl << endl;
                break;
            case 8:
                limparPilha(&pilha);
                break;
        }

    } while (opcao!=9);


    return 0;
}
