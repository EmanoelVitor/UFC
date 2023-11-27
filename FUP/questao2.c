#include<stdio.h>
#include<stdlib.h>

int anoBissexto(int ano) {
if((ano % 400==0) || (ano % 4 == 0 && ano % 100 != 0)) {
return 1;
} else {
return 0;
}
}

int main()
{
int ano;
printf("Escreva um ano.\n");
scanf("%d", &ano);

if(anoBissexto(ano)) {
    printf("%d e um ano bissexto.\n",ano);
} else {
    printf("%d e um ano nao bissexto. ",ano);
}



return 0;
}
