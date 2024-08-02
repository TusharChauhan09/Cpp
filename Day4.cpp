// Day-4 Loops
#include<iostream>
using namespace std;
int main(){
/*
    // (1) While Loop

    int n;
    cout<<"Enter the number : ";
    cin>>n;

    int i=1;

    while(i<=n){
        cout<<i<<"\n";
        i++;
    }


    // Q-1
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    int i=1;
    int sum = 0;
    while(i<=n){
        sum +=i;
        i++;
    }
    cout<<"The sum of n natural number is : "<<sum;


    // (2) For Loop 
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    for(int i=1;i<=n;i++){
        cout<<i<<"\n";
    }


    // Q-2 
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    int sum = 0;
    for(int i=1;i<=n;i++){
        sum +=i;
    }
    cout<<"The sum of n natural number is : "<<sum;


    // (3) Do-While Loop
    int b=4;
    do{
        cout<<b<<"\n";
        b++;
    }
    while(b>=5 && b<=10);

*/
    // (4) Important Keywords

    int x = 1;
        // (a) break
     while (x <= 10) {
        if (x == 5) {
            break;
        }
        cout << x<<"\n";
        x++;
    }

    cout<<"--------------------------------\n";

    x = 1;
        // (b) continue
    while(x<=10){
        if(x==5){
            x++;
            continue;
        }
        cout<<x<<"\n";
        x++;
    }


    return 0;
}