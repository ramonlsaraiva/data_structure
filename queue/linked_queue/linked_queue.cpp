#include <cstdlib>
#include <iostream>
using namespace std;


// PROGRAMAÇÃO DAS OPERAÇÕES

void criarFila(tnoCabeca *fila){
    fila->inicio=NULL;
    fila->fim=NULL;
    fila->tamanho=0;
}

bool filaVazia(tnoCabeca *fila){
    return (fila->tamanho==0);

}

bool filaCheia(tno *novoNo){
    return (novoNo==NULL);
}

void enfileirar(tnoCabeca *fila, int dado){
    tno *novoNo;
    novoNo = (tno*)malloc(sizeof(tno));
    if (filaCheia(novoNo))
        cout << "A fila esta cheia, nao e possivel inserir um novo elemento" << endl << endl;
    else{
        novoNo->dado = dado;
        novoNo->prox = NULL;
        if (filaVazia(fila))
            fila->inicio = novoNo;
        else
            fila->fim->prox = novoNo; 
        fila->fim = novoNo;
        fila->tamanho++;
        cout << "O elemento " << fila->fim->dado << " foi inserido!" << endl << endl;
    }
}

void desenfileirar(tnoCabeca *fila){
    if(filaVazia(fila))
        cout << "A fila ja esta vazia!" << endl << endl;
    else{
        tno *aux;
        aux = fila->inicio;
        fila->inicio = fila->inicio->prox;
        if(fila->tamanho==1)
            fila->fim = NULL;
        fila->tamanho--;
        cout << "O elemento " << aux->dado << " foi removido!" << endl << endl;
        free(aux);
    }
}


void inicioFila(tnoCabeca *fila){
    if(filaVazia(fila))
        cout << "A fila esta vazia!" << endl << endl;
    else
        cout << "Elemento do inicio da fila: " << fila->inicio->dado << endl << endl;
}


void elementosFila(tnoCabeca *fila){
    if(filaVazia(fila))
        cout << "A fila esta vazia!" << endl << endl;
    else{
        tno *aux;
        aux = fila->inicio;
        cout << "Dados da fila:" << endl;
        while (aux != NULL){
            cout << aux->dado << endl;
            aux = aux->prox;
        }
        cout << endl << endl;
    }
}


short int nElementosFila(tnoCabeca *fila){
    return (fila->tamanho);
}


void limparFila(tnoCabeca *fila){
    if (filaVazia(fila))
        cout << "A fila ja esta vazia!" << endl << endl;
    else{
        tno *aux;
        aux = fila->inicio;
        while(aux!=NULL){
            fila->inicio=fila->inicio->prox;
            if(fila->tamanho==1)
                fila->fim = NULL;
            free(aux);
            aux = fila->inicio;
            fila->tamanho--;
        }

        cout << "A fila foi esvaziada!" << endl << endl;
    }
}
