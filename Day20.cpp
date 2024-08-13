// Day-20   Pointers - 1
#include<iostream>
using namespace std;
int main(){

    // (1) Pointers
    int a = 5;
    int *x =&a;
    cout<<"a  : "<<a<<"\n";
    cout<<"&a : "<<&a<<"\n";
    cout<<"x  : "<<x<<"\n";
    cout<<"*x : "<<*x<<"\n";                           // De-refrencing
    cout<<"&x : "<<&x<<"\n";

    cout<<"---------------------\n";
    
    *x = 7;                                            // Imp
    cout<<"a  : "<<a<<"\n";
    cout<<"&a : "<<&a<<"\n";
    cout<<"x  : "<<x<<"\n";
    cout<<"*x : "<<*x<<"\n";                           
    cout<<"&x : "<<&x<<"\n";
    
    return 0;
}