import sys
"""
    Uso de anotaciones de funciones (parametros y retorno) PEP3107
"""
#def distancia(v: 'Velocidad en m/s', t: 'Tiempo en s') -> 'Distancia en s':
#    return v*t; 
#
#print (distancia.__annotations__)

"""
    Uso de la función zip(*iterables)
"""
#b = {"apodo":"caballo", "age":144}
#a = {"nombre":"felipe", "edad":14}
#c = zip(a, b)
#
#for x, z in c:
#    print(x)


def binary_and(a: int, b: int) -> "format '0b1010'": #bin(2)->'0b10' un es de tipo <class 'str'>
    # Si ingresan números como cadenas
    a, b = int(a), int(b)

    # Solo positivos
    if a < 0 or b < 0:
        raise ValueError("Las valores de las entradas deben ser números positivos")
    
    # Eliminando el '0b' de '0b101010'
    bin_a = bin(a)[2:] 
    bin_b = bin(b)[2:]
    
    #Igualando longitudes al más grande
    max_len = max(len(bin_a), (len(bin_b)))
    fill_bin_a = bin_a.zfill(max_len)
    fill_bin_b = bin_b.zfill(max_len)

    #Operando 'bit and bit'
    str_result = "";
    for char_bit_a, char_bit_b in zip(fill_bin_a, fill_bin_b):
       str_result = str_result + str(int ( char_bit_a == '1' and char_bit_b == '1'))
    
    return "0b" + str_result

#print(binary_and(21,30))
#print(binary_and.__annotations__)

if __name__ == "__main__":
    #sys.argv is a list of argument command line inputs
    #sys.argv[0] = file-name
    #sys.argv[1:] = *args
    print(sys.argv[1:])
    print(binary_and(sys.argv[1], sys.argv[2]))

