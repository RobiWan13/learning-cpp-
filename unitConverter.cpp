#include <iostream>

int menu (){
    int type;
    std::cout<<"Options to convert\n";
    std::cout<<"1. mmHg to Pa\n";
    std::cout<<"2. mg/dL to mmol/L\n";
    std::cout<<"3. Exit\n";
    std::cout<<"Enter an option:";
    std::cin>>type;
    return type;
}

void mmHg2Pa(){
    double var1;
    double var2;
    std::cout<<"1.mmHg to Pa\n";
    std::cout<<"Enter mmHg:";
    std::cin>>var1;
    var2=var1*133.322;
    std::cout<<var1<<" mmHg is equal to "<<var2<<" Pa\n";
}

void mgdL2mmolL(){
    double var1;
    double var2;
    double auxVar;
    std::cout<<"1.mg/dL to mmol/L\n";
    std::cout<<"Enter mg/dL:";
    std::cin>>var1;
    std::cout<<"Enter molar mass:";
    std::cin>>auxVar;
    var2=(var1*10)/auxVar;
    std::cout<<var1<<" mg/dL is equal to "<<var2<<" mmol/L\n";
}
int main(){
    //This program helps to easy convert one type uf unit to another

    //Variables
    int type=0;

    //Menu
    while(type!=3){
        type=menu();
        switch (type){
            case 1:
                mmHg2Pa();
                break;
            case 2:
                mgdL2mmolL();
                break;
            case 3:
                std::cout<<"Exiting...\n";
                break;
            default:
                std::cout<<"Invalid Option.\n";
                break;
        }
    }
    return 0;
}