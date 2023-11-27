#include <stdio.h>
#include <stdlib.h>

//QUESTAO 1: converter decimal/binario
//long long int binario(int x)
//{
//    if(x<2)
//    {
//        return x;
//    }
//}
//
//void binario(int x)
//{
//    if(x<2)
//    {
//        printf("%d", x);
//        return;
//    }
//    binario(x/2);
//    printf("%d", x%2);
//}
//
//
//int main()
//{
//    int x;
//    scanf("%d", &x);
//
//    binario(x);
//
//    return 0;
//}


//QUESTÃO 2: Retornar quantas vezes um dígito K aparece em um inteiro X;

//void contar(int k, int x)
//{
//
//}
//
//int main()
//{
//    int x, k;
//    scanf("%d", &x);
//    scanf("%d", &k);
//
//    contar(k);
//
//    return 0;
//}

//QUESTÃO 3 Inverter os elementos de um vetor de inteiros;
// inverter (int *vetor, int inicio, int fim)

int main (){
    int i, j, num[5], num_inv[5];

    for (i = 0; i < 5; i++){
    scanf("%d", &num[i]);
    }

    for(j = 0; j >= 4; j--){
    num_inv[j] = num[i];
    printf("O vetor invertido eh |\n %d", num_inv[i]);
    }
}


//QUESTAO 4 Algoritmpo de Euclides para MDC;
// MDC (x,y) = MDC(x-y, y), se x>y
// MDC (x,y) = MDC(y,x)
// MDC ( int x, int y)
