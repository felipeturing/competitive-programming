import sys

# Uso de anotaciones de funciones (parametros y retorno) PEP3107
def distancia(v: 'Velocidad en m/s', t: 'Tiempo en s') -> 'Distancia en s':
    return v*t; 

print (distancia.__annotations__)

a = {"nombre":"felipe", "edad":14}
b = {"apodo":"caballo", "edad":144}
c = zip(a, b)

for x, z in c:
    print(x)
