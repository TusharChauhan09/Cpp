// Day-7 Number System
#include<iostream>
using namespace std;
int main(){

/*
    // Q-1 Binary into Decimal
    int n;
    cout<<"Enter a Binary code : ";
    cin>>n;
    int x = n;
    int temp;
    int binary=0;
    int count=0; 

    while(x>0){
        temp = x%10;
        for(int i=1;i<=count;i++){
            temp = temp*2;
        }
        binary = binary + temp;
        count += 1;
        x /= 10;
    }
    cout<<"The given "<<n<<" in the decimal form is : "<<binary;

*/ 

    // Q-2 Decimal into Binary
    int n ;
    cout<<"Enter the decimal number : ";
    cin>>n;
    int x = n;
    int ans = 0;
    int power = 1;
    while(x>0){
        int paritydigit = x%2;
        ans = ans + paritydigit*power;
        power = power*10;
        x /= 2; 
    }
    cout<<"The given decimal "<<n<<" in binary is : "<<ans;

    return 0;
}