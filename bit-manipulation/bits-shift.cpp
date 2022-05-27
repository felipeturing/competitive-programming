#include <iostream>
namespace stdx
{
    void cout(){
        std::cout<<"Hola Nena"<<std::endl;
    }
}

using namespace stdx;

int main(int argc, char ** argv){
    int a = 4; //100
    int b = a<<2;//corriendo el bit más significativo dos posiciones hacia la izquierda, entonces b = 10000 = 16
    int c = a>>1;
    std::cout<<c<<std::endl;
    std::cout<<a<<std::endl;
    std::cout<<b<<std::endl;
    return 0;
}
