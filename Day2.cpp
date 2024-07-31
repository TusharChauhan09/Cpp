// Day-2 Operators 
#include<iostream>
using namespace std;
int main(){

    int num1;
    int num2;
    cout<<"Enter num1 : ";
    cin>>num1;
    cout<<"Enter num2 : ";
    cin>>num2;

    /*
    // (1) Arithmetic Operator

    cout<<"Addition : "<<(num1+num2)<<"\n";
    cout<<"Subtraction : "<<(num1-num2)<<"\n";
    cout<<"Multiplication : "<<(num1*num2)<<"\n";
    cout<<"Division : "<<(num1/num2)<<"\n";
    cout<<"Modulas : "<<(num1%num2)<<"\n";
    cout<<"Encrement : "<<(num1++)<<"\n";
    cout<<"Decrement : "<<(num1--)<<"\n";

    // (2) Realtional or Comparision Operators 
    
    cout<<"Equal to: "<<(num1 == num2)<<"\n";
    cout<<"Not Equal to: "<<(num1 != num2)<<"\n";
    cout<<"Greater than: "<<(num1 > num2)<<"\n";
    cout<<"Less than: "<<(num1 < num2)<<"\n";
    cout<<"Greater than or equal to: "<<(num1 >= num2)<<"\n";
    cout<<"Less than or equal to: "<<(num1 <= num2)<<"\n";

    // (3) Logical Operators

    cout<<"and : "<<(num1>10 && num2>5)<<"\n";
    cout<<"or : "<<(num1>10 || num2>5)<<"\n";
    cout<<"not : "<<!(num1>10 && num2>5)<<"\n";

    // (4) Assignment   operators

    cout<<"= : "<<(num1=5)<<"\n";
    cout<<"+= : "<<(num1+=5)<<"\n";
    cout<<"-= : "<<(num1-=5)<<"\n";
    cout<<"*= : "<<(num1*=5)<<"\n";
    cout<<"/= : "<<(num1/=5)<<"\n";
    cout<<"%= : "<<(num1%=5)<<"\n";
    cout<<"&= : "<<(num1&=5)<<"\n";
    cout<<"|= : "<<(num1|=5)<<"\n";
    cout<<"^= : "<<(num1^=5)<<"\n";
    cout<<">>= : "<<(num1>>=5)<<"\n";
    cout<<"<<= : "<<(num1<<=5)<<"\n";
    
    // (5) Bitwise Operator

    cout<<"Bitwise and : "<<(num1&num2)<<"\n";
    cout<<"Bitwise or : "<<(num1|num2)<<"\n";
    cout<<"Bitwise xor : "<<(num1^num2)<<"\n";
    cout<<"Bitwise left shift : "<<(num1<<num2)<<"\n";
    cout<<"Bitwise right shift : "<<(num1>>num2)<<"\n";
    cout<<"Bitwise not : "<<~(num1)<<"\n";

    */
    // (6) Misc Opertator
     
    cout<<"Sizeof Operator : "<<sizeof(num1)<<"\n";
    
                 // ternary operator 
    num1>18?cout<<"num1 is legal\n":cout<<"num2 is illigal\n";

                 // Casting operator
    float x = 3.2444;
    int y = int(x);
    cout<<"integer value is : "<<y<<"\n";

                 // Addresss operator and pointer operator   
    int *p = &y;
    cout<<"p value : "<<p<<"\ny value : "<<y<<"\naddress of y : "<<&y; 

    
    return 0;
}