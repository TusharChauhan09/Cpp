// Day-9 Functions-2
#include<iostream>
using namespace std;
/*

// (1) Scope Of Variables

// (2) Scope Resolution Operator
int p =5 ;
int main(){
    int p = 7;
    cout<<"Local : "<<p<<"\n";
    cout<<"Global : "<<::p;
    return 0;
}


// (3) Parameters
void add_function(int x,int y){            // (a) Formal Parameters
    cout<<"sum is : "<<x+y;
}
int main(){
    int a = 1;
    int b = 2;
    add_function(a,b);                     // (b) Actual Pararmeters
}


// (4) Passing into function

// (a) Pass by Value
void change(int z){
    z = 100;
}
int main(){
    int a =5;
    change(a);
    cout<<a;                                // remains 5 because a copy is being passed
    return 0;
}


// (b) Pass by Reference
void change(int &z){
    z = 100;
}
int main(){
    int a = 5;
    change(a);
    cout<<a;
    return 0;
}


//important regarding refrencing
int main(){
    int a=5;
    int &b=a;         // a=b in all aspect 
    b++;

    cout<<a<<"\n"; 
    cout<<b<<"\n";
    a--;
    cout<<a<<"\n"; 
    cout<<b<<"\n";

    cout<<&a<<"\n"; 
    cout<<&b<<"\n"; 
   return 0; 
}

*/
// (5) Default Parameter Values
void add(int a,int b=2,int c=3){
    cout<< a+b+c<<"\n";
}
int main(){
    add(5);
    add(5,3);
    add(5,3,2);
    return 0;
}






