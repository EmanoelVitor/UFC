#include <stdio.h>
#include <stdlib.h>

struct no
{
    int v;
    struct no *prox;
};
typedef struct no No;

struct fila
{
    No *inicio, *fim;
    int tam;
};
typedef struct fila Fila;

Fila* criar_fila()
{
    Fila* nova = (Fila*)malloc(sizeof(Fila));
    nova->inicio = NULL;
    nova->fim = NULL;
    nova->tam= 0;
    return nova;
}


No* criar_no(int dado)
{
    No* novo = (No*) malloc(sizeof(No));
    novo->v = dado;
    novo->prox = NULL;
    return novo;

}

void apagar_elem(No* e){
    e->v = 0;
    e->prox = NULL;
    free(e);
}

void apagar_fila(Fila* f)
{
    while (f->tam > 0)
    {
        int x = pop_fila(f);
        printf("removendo %d da fila\n", x);
    }
    free(f);
}

void push_fila(int x, Fila* f)
{
    No* novo = criar_no(x);
    if(novo == NULL)
    {
        printf("Erro ao alocar o no");
        exit(1);
    }

    if(f->tam == 0)
    {
        f->inicio = novo;
        f->fim = novo;
    }
    else
    {
        f->fim->prox = novo;
        f->fim = novo;

    }
    f->tam++;
}

int pop_fila(Fila* f){
    if(f->tam > 0){
        No* deletar = f->inicio;
        f->inicio = deletar->prox;
        f->tam--;
        int v = deletar->v;
        apagar_elem(deletar);
        return v;
    }
    return 0;
}

void imprimir_fila(Fila* f)
{
    No* atual = f->inicio;
    while(atual != NULL)
    {
        printf("%d--", atual->v);
        atual = atual->prox;
    }
    printf("NULL\n");
}

int main()
{
    int n,i;
    
    printf("Digite quantos elementos deseja enfileirar:\n");
    scanf("%d", &n);

    Fila * f = criar_fila();

    for (i=0; i<n; i++)
    {
        int x;
        scanf("%d", &x);
        push_fila(x, f);
    }
    
    printf("\nvalores na fila:\n");
    imprimir_fila(f);
    
    apagar_fila(f);
    
    imprimir_fila(f);
    
    return 0;


}


