// Day-8 Functions-1
#include<iostream>
#include<cmath>
using namespace std;

// (1) user Defined Function

int sum1(int a,int b){
    cout<<"above main sum1 : "<<a+b<<"\n";
    return 0;
}

int sum2(int a,int b);          // Function Prototyping

void demo();

int main(){
    sum1(1,2);                  // function call
    sum2(1,2); 
    demo();
    return 0;
}

int sum2(int a,int b){
    cout<<"bellow main sum2 : "<<a+b<<"\n";
    return 0;
}


// (2) Standard Libary Functions
void demo(){
    cout <<"Power : "<< pow(2,3)<<"\n";          // (a)
    cout <<"Square root : "<<sqrt(64)<<"\n";     // (b)
}
