const short int TAM = 10;


// DEFINIÇÃO DOS DADOS

typedef struct tipoFila {
    int dados[TAM]; // ponteiro que irá apontar para o vetor criado
    short int inicio; // controle do inicio da fila
    short int fim; // controle do final da fila
} tfila;



// DEFINIÇÃO DAS OPERAÇÕES

// cria fila vazia
void criarFila(tfila *fila);

// verifica se a fila está vazia
bool filaVazia(tfila *fila);

// verifica se a fila está cheia
bool filaCheia(tfila *fila);

// insere um novo elemento no final da fila
void enfileirar(tfila *fila, int valor);

// remove o elemento no início da fila
void desenfileirar(tfila *fila);

// exibe o elemento do início da fila
void inicioFila(tfila *fila);

// exibe os elementos da fila
void elementosFila(tfila *fila);

// retorna o número de itens da fila
short int nElementosFila(tfila *fila);

// limpar fila
void limparFila(tfila *fila);
