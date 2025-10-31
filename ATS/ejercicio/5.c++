#include<iostream>

using namespace std;

int main(){
    int p1,p2,p3,p4, l1,l2,l3,l4, m1,m2,m3,m4 ,s1,s2,s3,s4,n1,n2,n3,n4, r1 =0, r2 =0, r3 = 0, r4= 0;

    cout<<"\nla nota de lengua: "; cin>>l1;
    cout<<"la nota de matematica: "; cin>>m1;
    cout<<"la nota de sociales: "; cin>>s1;
    cout<<"la nota de naturales: "<<endl; cin>>n1;

    cout<<"\nla nota de lengua: "; cin>>l2;
    cout<<"la nota de matematica: "; cin>>m2;
    cout<<"la nota de sociales: "; cin>>s2;
    cout<<"la nota de naturales: "<<endl; cin>>n2;

    cout<<"\nla nota de lengua: "; cin>>l3;
    cout<<"la nota de matematica: "; cin>>m3;
    cout<<"la nota de sociales: "; cin>>s3;
    cout<<"la nota de naturales: "; cin>>n3;

    cout<<"\nla nota de lengua: "; cin>>l4;
    cout<<"la nota de matematica: "; cin>>m4;
    cout<<"la nota de sociales: "; cin>>s4;
    cout<<"la nota de naturales:"; cin>>n4;

p1 = (l1 + m1 + s1 + n1) / 4;
r1 =p1;
p2 = (l2 + m2 + s2 + n2) / 4;
r2 =p2;
p3 = (l3 + m3 + s3 + n3) / 4;
r3 =p3;
p4 = (l4 + m4 + s4 + n4) / 4;
r4 =p4;



cout<<"\nel resultado es Final de p1 es: "<<r1<<endl;
cout<<"\nel resultado es Final de p2 es: "<<r2<<endl;
cout<<"\nel resultado es Final de p3 es: "<<r3<<endl;
cout<<"\nel resultado es Final de p4 es: "<<r4<<endl;
    return 0;
}