// Day-22   Pointers-3
#include<iostream>
using namespace std;
int main(){
    // (1) Types of pointers

    // (a) Null Pointer
    int *a = NULL;
    cout<<a<<"\n";
    //cout<<*a<<"\n";         // segmentation fault
    
    // (b) Wild pointer 
    int *b;
    cout<<b<<"\n";
    cout<<*b<<"\n";

    // (c) Dangling Pointer 
    int *c = 0;
    {
        int x=5;
        c=&x;
    }
    cout<<c<<"\n";           
    cout<<*c<<"\n";


    // (d) Void Pointer 
    void *d;

    int y = 2;
    d = &y;
    cout<<d<<"\n";           
    //cout<<*d<<"\n";                               can't be dereferenced
    cout<<*(int*)d<<"\n";                           // static cast

    float z = 2.4;
    d = &z;
    cout<<d<<"\n";
    cout<<*(float*)d<<"\n";

    char p ='T';
    d = &p;
    cout<<d<<"\n";
    cout<<*(char*)d<<"\n";

    string q = "Tushar";
    d = &q;
    cout<<d<<"\n";
    cout<<*(string*)d<<"\n";


    
    return 0;
}