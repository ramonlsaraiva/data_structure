#include <iostream>
using namespace std;


// PROGRAMAÇÃO DAS OPERAÇÕES

// cria fila vazia
void criarFila(tfila *fila){
    fila->inicio=0;
    fila->fim=-1;
}

// verifica se a fila está vazia
bool filaVazia(tfila *fila){
    return (fila->fim==-1);
}

// verifica se a fila está cheia
bool filaCheia(tfila *fila){
    return (fila->fim==TAM-1);
}

// insere um novo elemento no final da fila
void enfileirar(tfila *fila, int dado){
    if (filaCheia(fila))
        cout << "A fila esta cheia, nao e possivel inserir um novo elemento" << endl << endl;
    else{
        fila->dados[fila->fim+1] = dado;
        cout << "O elemento " << fila->dados[fila->fim+1] << " foi inserido!" << endl << endl;
        fila->fim++;
    }
}


// retorna o número de itens da fila
short int nElementosFila(tfila *fila){
    return (fila->fim-fila->inicio+1);
}


// remove o elemento no início da fila
void desenfileirar(tfila *fila){
    if (filaVazia(fila))
        cout << "A fila ja esta vazia" << endl << endl;
    else{
        if(nElementosFila(fila)!=1){
            fila->inicio++;
            cout << "O elemento " << fila->dados[fila->inicio-1] << " foi removido!" << endl << endl;
        }
        else{
            criarFila(fila);
            cout << "O elemento " << fila->dados[0] << " foi removido!" << endl << endl;
        }
    }
}

// exibe o elemento do início da fila
void inicioFila(tfila *fila){
     if (filaVazia(fila))
        cout << "A fila esta vazia" << endl << endl;
    else
       cout << "Elemento do inicio da fila: " << fila->dados[fila->inicio] << endl << endl;
}


// exibe os elementos da fila
void elementosFila(tfila *fila){
    if (filaVazia(fila))
        cout << "A fila esta vazia" << endl << endl;
    else{
        cout << "Dados da fila:" << endl;
        for(short int i=fila->fim; i>=fila->inicio; i--){
            cout << fila->dados[i] << endl;
        }
        cout << endl << endl;
    }
}


// limpa a fila
void limparFila(tfila *fila){
    criarFila(fila);
    cout << "A fila foi esvaziada!" << endl << endl;
}
