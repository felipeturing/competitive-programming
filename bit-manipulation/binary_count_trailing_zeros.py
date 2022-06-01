import sys
from math import log2

def binary_count_trailing_zeros( x: int ) -> int:
    """
    Retorna el número de ceros finales de la representación binaria de 'x'
    """
    # Bitwise and operator: a & b
    if x < 0:
        raise ValueError("Debe ser un entero positivo")
    elif isinstance(x, float):
        raise TypeError("Debe ser un entero")
    elif x == 0:
        return 0

    """
    CPython es la implementación de referencia de Python, está escrito principalmente en C y Python, y es la principal base para el comportamiento de Python. 

    El tipo entero de CPython almacena el signo en un campo específico de una estructura. Al realizar una operación bit a bit, CPython reemplaza los números negativos por su complemento a dos

    Leer más: https://stackoverflow.com/questions/46993519/python-representation-of-negative-integers
    
    Veamos que -x (complemento a dos de x) es (0xf ^ x) + 1, ^ es el operador xor bitwise, estamos suponiendo que x se puede representar mínimamente con 4 bits.
    El valor de x & -x, permite separar el paquete de bits de derecha a izquierda hasta que encuentre un 1.

    Por lo tanto log2( x & -x) cuenta cuántos bits - 1 son necesarios mínimamente para representar x & -x, que sería la cantidad de ceros de derecha a izquierda de x en binario.
    """
    
    return int(log2( x & -x ))

if __name__ == "__main__":
    #sys.argv[0] es el nombre del archivo .py
    print(binary_count_trailing_zeros(int(sys.argv[1])))
