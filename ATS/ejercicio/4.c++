#include<iostream>

using namespace std;

int main(){
    float a,b,c,d, resultado = 0;

    cout<<"Digiste el valor de a: "; cin>>a;
    cout<<"Digiste el valor de b: "; cin>>b;
    cout<<"Digiste el valor de c: "; cin>>c;
    cout<<"Digiste el valor de d: "; cin>>d;

    resultado = a + (b/(c-d));

    cout.precision(3);
    cout<<"\nEl resultado es: "<<resultado<<endl;

    return 0;
}