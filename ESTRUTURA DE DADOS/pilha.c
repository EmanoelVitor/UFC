#include <stdlib.h>
#include <stdio.h>

struct pilha{
    int capacidade;
    int topo;
    int *elementos;
};
typedef struct pilha Pilha;


//Função para a cricao de uma pilha;
Pilha* criar_pilha(int capacidade){
    Pilha* pilha = (Pilha*)malloc(sizeof(Pilha));
    pilha->capacidade = capacidade;
    pilha -> topo = -1;
    pilha->elementos =  (int*)malloc(capacidade * sizeof(int));
    return pilha;
}

//Funçao para verificar se a pilha está vazia;
int esta_vazia(Pilha* pilha){
    return pilha->topo == -1;
}

//Funçao para verificar se a pilha está cheia;
int esta_cheia(Pilha* pilha){
    return pilha->topo == pilha->capacidade - 1;
}

//Funçao para empilhar um elemento;
void empilhar(Pilha* pilha, int item){
    if(esta_cheia(pilha)){
        printf("Pilha cheia, impossivel empilhar o elemento %d\n",item);
        return;
    }
    pilha->elementos[++pilha->topo] = item;
}


//Função para desempilhar um elemento;
int desempilhar(Pilha* pilha){
    if(esta_vazia(pilha)){
        printf("Pilha cheia. Nao eh possivel desempilhar");
        return -1;
    }
    
    return pilha->elementos[pilha->topo--];
}

// Função para obter o elemento no topo da pilha
int topo(Pilha* pilha) {
    if (esta_vazia(pilha)) {
        printf("Pilha vazia.\n");
        return -1;
    }

    return pilha->elementos[pilha->topo];
}

//Função para imprimir OS elementos;
void imprimir_pilha(Pilha* pilha){
    if(esta_vazia(pilha)){
        printf("pilha vazia. Nenhum elemento para imprimir.");
        return;
    }
    
    for(int i = 0; i <= pilha->topo; i++){
        printf("%d ", pilha->elementos[i]);
    }
    printf("\n");
    
}


int main(){
    
    Pilha* pilha = criar_pilha(5);
    
    empilhar(pilha, 1);
    empilhar(pilha, 2);
    empilhar(pilha, 3);
    empilhar(pilha, 4);
    empilhar(pilha, 5);
    
    imprimir_pilha(pilha);
    
    desempilhar(pilha);
    
    imprimir_pilha(pilha);
    
    desempilhar(pilha);
    
    imprimir_pilha(pilha);
    
    return 0;
}


