#include <iostream>

int main(){
    //Its important remember that variables must to be defined at the start of the function

    //My First Hello World on C++
    std::cout<<"Hello World! \n";
    //Its important remember that variables must to be defined at the start of the function

    //Variables
    //Ints
    int x=13;
    int y=7;
    int sum;
    sum=x+y;
    std::cout<<"La variable y tiene el valor de: "<<y<<"\n";
    std::cout<<"La variable x tiene el valor de: "<<x<<"\n";
    std::cout<<"El resultado de la suma de X y Y es: "<<sum<<"\n";

    //Float(32bits) or double(64 bits)
    //Long double
    double average=9.8;
    std::cout<<"El promedio es: "<<average<<"\n";

    //Char
    char calificacion ='A';
    char inicial ='R';

    //Boolean
    bool student = true;
    bool student2 = false;

    //Strings
    std::string name="Roberto";

    std::cout<<"Hola "<<name<<"\n";

    //Const
    const double PI = 3.14159;
    double radio = 10;
    double circunferencia = 2*PI*radio;
    std::cout<<circunferencia<<"cm";

    
    return 0;
}
