#MÉTODO DA FALSA POSIÇÃO

import math
import numpy as np

def f(x):
    return(x**3 - math.exp(2*x) + 3); #funcao de interacao
    #np.log(x) é o mesmo que ln(x)
    #math.exp(x) é o famoso e exponencial
    #math.sin famoso seno
    #math.cos famoso cosseno
    
l = 0.001 #erro
tool = 0.000001 #aproximacao de zero
cont = 0

a = float(input("Entre com o valor 'a' do intervalo[a,b]"))
b = float(input("Entre com o valor 'b' do intervalo[a,b]"))
Ni = 20 #numero de interações
c = b - a

x0 = (a*f(b) - b*f(a))/(f(b) - f(a))

while(c > l or math.fabs(f(x0))):
    if(f(a) * f(x0) < 0.0):
        b = x0
    if(f(a) * f(x0) > 0.0):
        a = x0
        
    c = b - a
    x0 = (a*f(b) - b*f(a))/(f(b) - f(a))
    cont = cont + 1
    if(cont>= Ni):
        break
    
    print("\n\nRaiz %f\nInteracoes: %i\n(%f) = %g" %(x0, cont, x0, f(x0)))
    
