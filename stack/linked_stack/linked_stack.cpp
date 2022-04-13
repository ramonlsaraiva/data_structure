#include <cstdlib>
#include <iostream>
using namespace std;

// PROGRAMAÇÃO DAS OPERAÇÕES

// cria pilha vazia
tno *criarPilha(){
    return NULL;
}


// verifica se a pilha está vazia
bool pilhaVazia(tno *topo){
    return (topo==NULL);
}


// verifica se a pilha está cheia
bool pilhaCheia(tno *novoNo){
    return (novoNo==NULL);
}


// insere um novo elemento no topo da pilha
tno *empilhar(tno *topo, int dado){
    tno *novoNo;
    novoNo = (tno *)malloc(sizeof(tno));
    if(pilhaCheia(novoNo))
        cout << "A pilha esta cheia, nao e possivel inserir um novo elemento" << endl << endl;
    else{
        novoNo->dado = dado;
        novoNo->prox = topo;
        topo = novoNo;
        cout << "O elemento " << novoNo->dado << " foi inserido!" << endl << endl;
    }
    
    return topo;
}


// remove o elemento do topo da pilha
tno *desempilhar(tno *topo){
    if(pilhaVazia(topo))
        cout << "A pilha ja esta vazia!" << endl << endl;
    else {
        tno *aux;
        aux = topo;
        topo = topo->prox;
        cout << "O elemento " << aux->dado << " foi removido!" << endl << endl;
        free(aux);
    }

    return topo;
}


// retorna o elemento do topo da pilha
void topoPilha (tno *topo){
    if(pilhaVazia(topo))
        cout << "A pilha esta vazia!" << endl << endl;
    else
        cout << "Elemento do topo da pilha: " << topo->dado << endl << endl;   
}


// exibe os elementos da pilha
void elementosPilha(tno *topo){
    if(pilhaVazia(topo))
        cout << "A pilha esta vazia!" << endl << endl;
    else{
        tno *aux;
        aux = topo;
        cout << "Dados da pilha:" << endl;
        while(aux!=NULL){
            cout << aux->dado << endl;
            aux=aux->prox;
        }
        cout << endl << endl;
    }
}


// retorna o número de elementos da pilha
short int nElementosPilha(tno *topo){
    tno *aux;
    short int cont;
    cont = 0;
    aux = topo;
    while(aux!=NULL){
        cont++;
        aux=aux->prox;
    }
    
    return cont;
}


// limpa a pilha
tno *limparPilha(tno *topo){
    if(pilhaVazia(topo))
        cout << "A pilha ja esta vazia!" << endl << endl;
    else {
        tno *aux;
        while (topo!=NULL){
            aux = topo;
            topo = topo->prox;
            free(aux);
        }

        cout << "A pilha foi esvaziada!" << endl << endl;
    }

    return topo;
}
