#include "linked_stack.hpp"
#include "linked_stack.cpp"
#include <iostream>
using namespace std;


// INTERFACE DO TAD

int main(){

    tno *topo;

    // criando uma pilha vazia
    topo = criarPilha();
    
    short int opcao;
    int dado;     

    do {
        cout << "1 - Empilhar dado" << endl;
        cout << "2 - Desempilhar dado" << endl;
        cout << "3 - Exibir os elementos da pilha" << endl;
        cout << "4 - Exibir o numero de elementos da pilha" << endl;
        cout << "5 - Exibir o elemento do topo da pilha" << endl;
        cout << "6 - Verificar se a pilha esta vazia" << endl;
        cout << "7 - Limpar pilha" << endl;
        cout << "8 - Sair" << endl << endl;

        cout << "Informe a opcao desejada:";
        cin >> opcao;


        switch(opcao){
            case 1:
                cout << "Digite o dado que deseja empilhar: ";
                cin >> dado;
                topo = empilhar(topo, dado);
                break;
            case 2:
                topo = desempilhar(topo);
                break;
            case 3:
                elementosPilha(topo);
                break;
            case 4:
                cout << "A pilha possui " << nElementosPilha(topo) << " elementos" << endl << endl;
                break;
            case 5:
                topoPilha(topo);
                break;
            case 6:
                if (pilhaVazia(topo))
                    cout << "A pilha esta vazia!" << endl << endl;
                else
                    cout << "A pilha nao esta vazia!" << endl << endl;
                break;
            case 7:
                topo = limparPilha(topo);
                break;
        }

    } while (opcao!=8);


    return 0;
}
