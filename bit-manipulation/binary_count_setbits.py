import sys 

def binary_count_setbits( x: int) -> "La cantidad de bits de x":
    """
    Retorna el número de bits 1 de la representación binaria de 'x'
    >>> binary_count_setbits(25)
    3
    """
    # if shorthand: true if condition else false
    if x < 0:
        raise ValueError("La entrada debe ser un entero positivo")
    elif isinstance(x, float):
        raise TypeError("La tipo de dato debe ser un entero")
    return bin(x)[2:].count('1')

if __name__ == "__main__":
    print(binary_count_setbits(int(sys.argv[1])))
