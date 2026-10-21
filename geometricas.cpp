#include <iostream>
using namespace std;

float areaCuadrado(float l){
    float resultado;
    resultado=l*l;
    return resultado;
}

float volumenCilindro(float r,float h){
    float resultado;
    resultado=3.1415*r*r*h;
    return resultado;
}

float volumenEsfera(float r){
    float resultado;
    resultado=((4/3)*3.14*r*r*r);
    return resultado;
}

int  main(){
    float lado=0,areatotal=0,radio=0,altura=0,volumen=0;
    int opcion;
    double const pi=3.1415;
    cout<<"------CALCULO DE FIGURAS GEOMETRICAS-----"<<endl;
    cout<<"1.Calcular el area de un cuadrado"<<endl;
    cout<<"2.Calcular el volumen de un cilindro"<<endl;
    cout<<"3.Calcular el volumen de una esfera"<<endl;
    cout<<"4.Salir"<<endl;
    cin>>opcion;

    switch(opcion){
        case 1:
        cout<<"Ingrese el lado de un cuadrado"<<endl;
        cin>>lado;

        areatotal=areaCuadrado(lado);
        cout<<"El resultado es:"<<areatotal<<endl;
        break;
        
        case 2:
        cout<<"Ingrese el radio de un cilintro"<<endl;
        cin>>radio;
        cout<<"Ingrese la altura de un cilintro"<<endl;
        cin>>altura;

        volumen=volumenCilindro(radio,altura);
        cout<<"El resultado es:"<<volumen<<endl;
        break;

        case 3:
        cout<<"Ingrese el radio de un cilintro"<<endl;
        cin>>radio;

        volumen=volumenEsfera(radio);
        cout<<"El resultado es:"<<volumen<<endl;
        break;

        default :
        cout<<"opcion invalida"<<endl;
        break;
    }
    return 0;
}