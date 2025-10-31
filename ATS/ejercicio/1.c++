#include<iostream>

using namespace std;

int main(){
    
    float n1, iva = 0.18, total;
    
    cout<<"Cual es el precio? "; cin>>n1;

    total =n1 * (1 + iva);

    cout<<"Este es el precio: "<<total;
    
    return 0;
}
