// Day-6 Problems On Loops-2
#include<iostream>
using namespace std;
int main(){
/*
    // Q-1 
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int count=0;

    while(n>0){
        count +=1;
        n/=10;
    }
    cout <<"The no. of digits are : "<<count;


    // Q-2 
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int sum = 0;
    int temp;
    while (n>0){
        temp = n%10;
        sum += temp;
        n /= 10;
    }
    cout<<"The sum of all the digits of the given number is : "<<sum;


    // Q-3
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int x = n;
    int rev = 0;
    int temp;
    while(x>0){
        temp = x%10;
        rev = (rev)*10 + temp;
        x /= 10;
    } 
    cout<<"The reverse of "<<n<<" is "<<rev; 


    // Q-4
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    int sum =0;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            sum = sum - i;
        }
        else{
            sum =sum + i;
        }
    }
    cout<<"The sum/result of the series is : "<<sum;

*/
    // Q-5
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact = fact*i;
        cout<<"The factorial of "<<i<<" is : "<<fact<<"\n";
    } 
    



    return 0;
}