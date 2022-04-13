// DEFINIÇÃO DOS DADOS

const short int  TAM = 7;

typedef struct tipoNo {
    int dado;
    struct tipoNo *prox;
} tno;



// DEFINIÇÃO DAS OPERAÇÕES

// cria pilha vazia
tno *criarPilha(tno *topo);

// verifica se a pilha está vazia
bool pilhaVazia(tno *topo);

// verifica se a pilha está cheia
bool pilhaCheia(tno *topo);

// insere um novo elemento no topo da pilha
tno *empilhar(tno *topo, int dado);

// remove o elemento do topo da pilha
tno *desempilhar(tno *topo);

// retorna o elemento do topo da pilha
void topoPilha(tno *topo);

// exibe os elementos da pilha
void elementosPilha(tno *topo);

// retorna o número de elementos da pilha
short int nElementosPilha(tno *topo);

// limpa a pilha
tno *limparPilha(tno *topo);
