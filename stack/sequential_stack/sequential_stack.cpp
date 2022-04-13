#include <iostream>
using namespace std;


// PROGRAMAÇÃO DAS OPERAÇÕES

// cria pilha vazia
void criarPilha(tpilha *pilha){
    pilha->topo = -1; // o valor de topo é iniciado
    cout << "Pilha criada com sucesso!" << endl << endl;
}


// verifica se a pilha está vazia
bool pilhaVazia(tpilha *pilha){
    return (pilha->topo==-1);
}


// verifica se a pilha está cheia
bool pilhaCheia(tpilha *pilha){
    return (pilha->topo==(TAM-1));
}


// insere um novo elemento no topo da pilha
void empilhar(tpilha *pilha, int dado){
    if (pilhaCheia(pilha))
        cout << "A pilha esta cheia, nao e possivel inserir um novo elemento" << endl << endl;
    else{
        pilha->dados[pilha->topo+1] = dado;
        cout << "O elemento " << pilha->dados[(pilha->topo)+1] << " foi inserido!" << endl << endl;    
        pilha->topo++;

    }
}


// remove o elemento do top da pilha
void desempilhar(tpilha *pilha){
    if (pilhaVazia(pilha))
        cout << "A pilha ja esta vazia" << endl << endl;
    else{
        (pilha->topo)--;
        cout << "O elemento " << pilha->dados[(pilha->topo)+1] << " foi removido!" << endl << endl;
    }
}


// exibe o elemento do topo da pilha
void topoPilha(tpilha *pilha){
    if (pilhaVazia(pilha))
        cout << "A pilha esta vazia" << endl << endl;
    else
       cout << "Elemento do topo da pilha: " << pilha->dados[pilha->topo] << endl << endl;
}


// exibe os elementos da pilha
void elementosPilha(tpilha *pilha){
    if (pilhaVazia(pilha))
        cout << "A pilha esta vazia" << endl << endl;
    else{
        cout << "Dados da pilha:" << endl;
        for (short int i=pilha->topo; i>=0; i--)
            cout << pilha->dados[i] << endl;
        cout << endl << endl;
    }
}


// retorna o número de elementos da pilha
short int nElementosPilha(tpilha *pilha){
    return (pilha->topo)+1;
}


// limpa a pilha
void limparPilha(tpilha *pilha){
    pilha->topo = -1;
    cout << "A pilha foi esvaziada!" << endl << endl;
}
