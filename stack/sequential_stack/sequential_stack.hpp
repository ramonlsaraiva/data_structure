// DEFINIÇÃO DOS DADOS

const short int  TAM = 7;

typedef struct tipoPilha {
    int dados[TAM];
    short int topo; // controle de topo
} tpilha;



// DEFINIÇÃO DAS OPERAÇÕES

// cria pilha vazia
void criarPilha(tpilha *pilha);

// verifica se a pilha está vazia
bool pilhaVazia(tpilha *pilha);

// verifica se a pilha está cheia
bool pilhaCheia(tpilha *pilha);

// insere um novo elemento no topo da pilha
void empilhar(tpilha *pilha, int dado);

// remove o elemento do topo da pilha
void desempilhar(tpilha *pilha);

// retorna o elemento do topo da pilha
void topoPilha(tpilha *pilha);

// exibe os elementos da pilha
void elementosPilha(tpilha *pilha);

// retorna o número de elementos da pilha
short int nElementosPilha(tpilha *pilha);

// limpa a pilha
void limparPilha(tpilha *pilha);
