// Day-3 Conditional Statements
#include<iostream>
using namespace std;
int main(){
/*
    // (1) if Statements
    // (2) if-else Statements
    // (3) if-else-if Statements
    
    int n ; 
    cout<<"Enter the number : ";
    cin>>n;

    if(n==0){
        cout<<"The number is zero";
    }
    else if(n<0){
        cout<<"The number is -ve";
    }
    else{
        cout<<"The number is +ve";
    }


    // Q-1 
    int a;
    cout<<"Enter the number : ";
    cin>>a;

    if(a%2==0 && a%3==0){
        cout<<a<<" is even and divisible by 3 ";
    }
    else{
        cout<<"condition not satisfied";
    }


    // Q-2
    int a;
    cout<<"Enter the number : ";
    cin>>a;

    if(a%3==0 || a%5==0){
        cout<<a<<" is divisible by 3 or 5 ";
    }
    else{
        cout<<"condition not satisfied";
    }


    // (4) Switch Cases

    int n;
    cout<<"Enter the no. : ";
    cin>>n;

    switch (n){

        case 1:
        cout<<"Monday";
        break;

        case 2:
        cout<<"Tuesdaty";
        break;

        case 3:
        cout<<"Wednesday";
        break;

        case 4:
        cout<<"Thursday";
        break;

        case 5:
        cout<<"Friday";
        break;
        
        case 6:
        cout<<"Saturday";
        break;

        case 7:
        cout<<"Sunday";
        break;

        default:
        cout<<"Invalid day";
    }

*/

    // Q-3
    char ch;
    cout<<"Enter the letter in smallcase : ";
    cin>>ch;

    switch(ch){

        case 'a':
        cout<<"Vowel";
        break;

        case 'e':
        cout<<"Vowel";
        break;

        case 'i':
        cout<<"Vowel";
        break;

        case 'o':
        cout<<"Vowel";
        break;

        case 'u':
        cout<<"Vowel";
        break;

        default:
        cout<<"Consunent";
    }

    return 0;
}