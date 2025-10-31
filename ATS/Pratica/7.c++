#include<iostream>

using namespace std;

int main(){
    float a,b,c,d,e,f, resultado = 0;
    
    cout<<"Digiste el valor de a: "; cin>>a;
    cout<<"Digiste el valor de b: "; cin>>b;
    cout<<"Digiste el valor de c: "; cin>>c;
    cout<<"Digiste el valor de d: "; cin>>d;
    cout<<"Digiste el valor de e: "; cin>>e;
    cout<<"Digiste el valor de f: "; cin>>f;
    
    resultado = (a+(b/c))/(d+(e/f));
    
    cout.precision(3);
    cout<<"\nEl resultado es: "<<resultado<<endl;
    
    return 0;
}