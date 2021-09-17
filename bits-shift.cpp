#include <iostream>
//using namespace std;
namespace stdx
{
    void cout(){
        std::cout<<"Hola Nena"<<std::endl;
    }
}

using namespace stdx;
//using namespace std;
int main(int argc, char ** argv){
//    cout<<"Hola\n"<<endl;
//    hi::hi_nena();
   // stdx::cout();
    int a = 4; //100
    int b = a<<2;//corriendo el bit más significativo dos posiciones hacia la izquierda, entonces b = 10000 = 16
    int c = a>>1;
    std::cout<<c<<std::endl;
    return 0;
}
