// DEFINIÇÃO DOS DADOS

// estrutura para cada elemento da fila
typedef struct tipoNoDados{
    int dado;
    struct tipoNoDados *prox;
} tno;


// estrutura de controle da fila
typedef struct tipoNoCabeca{
    tno *inicio; // controle do inicio da fila
    tno *fim; // controle do final da fila
    short int tamanho; // tamanho da fila
} tnoCabeca;



// DEFINIÇÃO DAS OPERAÇÕES

// criar fila vazia
void criarFila(tnoCabeca *fila);

// verificar se a fila está vazia
bool filaVazia(tnoCabeca *fila);

// verificar se a fila está cheia
bool filaCheia(tno *novo_no);

// inserir um novo elemento no fim da fila
void enfileirar(tnoCabeca *fila, int dado);

// remove o elemento do início da fila
void desenfileirar(tnoCabeca *fila);

// exibe o elemento do início da fila
void inicioFila(tnoCabeca *fila);

// exibe os elementos da fila
void elementosFila(tnoCabeca *fila);

// retorna o número de itens da fila
short int nElementosFila(tnoCabeca *fila);

// limpa os elementos da fila
void limparFila(tnoCabeca *fila);
