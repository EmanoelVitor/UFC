#include<stdio.h>
#include<stdlib.h>
#include<math.h>

double distancia(double x1, double x2, double y1, double y2){

return sqrt(pow(x1 - x2,2)+pow(y1 - y2,2));
}

double calcMaiorDistancia(double x1,double y1,double x2,double y2,double x3,double y3){

double d1 = distancia(x1, y1, y2, y2);
double d2 = distancia(x1, x1, y3, y3);
double d3 = distancia(x2, x2, y3, y3);

double maiorDistancia = d1;

if(d2 > maiorDistancia){
maiorDistancia = d2;
}
if(d3 > maiorDistancia){
maiorDistancia = d3;
}

return maiorDistancia;
}

int main()
{
double x1, y1, x2, y2, x3, y3;

printf("Escreva a coordenada x e y do primeiro ponto\n");
scanf("%lf %lf", &x1, &y1);

printf("Escreva a coordenada x e y do segundo ponto\n");
scanf("%lf %lf", &x2, &y2);

printf("Escreva a coordenada x e y do terceiro ponto\n");
scanf("%lf %lf", &x3, &y3);

double maiorDistancia = calcMaiorDistancia(x1, y1, x2, y2, x3, y3);

printf("A maior distancia e: %.2lf\n", maiorDistancia);

return 0;
}
