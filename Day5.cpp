//Day-5 Pattern Printing Problems-1
#include<iostream>
using namespace std;
int main(){
/*

    // Q-1 Rectangular Pattern
    int r;
    int c;

    cout<<"Enter the length : ";
    cin>>r;

    cout<<"Enter the breadth : ";
    cin>>c;

    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            cout<<"*";
        }
        cout<<"\n";
    }


    // Q-2 Hollow Rectangular Pattern
    int r;
    int c;

    cout<<"Enter the length : ";
    cin>>r;

    cout<<"Enter the breadth : ";
    cin>>c;

    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            if (i==1 || j==1 || i==r || j==c ){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }


    // Q-3 Decreasing Triangle Pattern
    int n;

    cout<<"Enter the number : ";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }


    // Q-4 Upside Down Decreasing Triangle Pattern
    int n;
    
    cout<<"Enter the number : ";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    // OR
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }


    // Q-5 Perfect Triangle Pattern
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n-i);j++){         // For space triangle 
            cout<<" ";
        }
        for(int k=1;k<=2*(i)-1;k++){
            cout<<"*";
        }
        cout<<"\n";
    }


    // Q-6 Numerical Rectangular Pattern
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            cout<<j;
        }
        for(int j=1;j<=(i-1);j++){
            cout<<j;
        }
        cout<<"\n";
    }
 
    
    // Q-7 Hollow Numerical Rectangle Pattern
    int r,c;
    cout<<"Enter the rows : ";
    cin>>r;
    cout<<"Enter the columns : ";
    cin>>c;

    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            if(i==1||i==r||j==1||j==c){
                cout<<j;
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
 

    // Q-8 Numerical Rectangle Pattern
    int r,c;
    cout<<"Enter the rows : ";
    cin>>r;
    cout<<"Enter the columns : ";
    cin>>c;

    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            if((i+j)%2==0){
                cout<<1;
            }
            else{
                cout<<2;
            }
        }
        cout<<"\n";
    }


    // Q-9 Numerical Decreasing Triangle 
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<"\n";
    }

    */

   int n;
   cout<<"Enter the number : ";
   cin>>n;

   for(int i=1;i<=n;i++){
    for(int j=1;j<=(n-i);j++){
        cout<<" ";
    }
    for(int j=1;j<=i;j++){
        cout<<j;
    }
    for(int j=(i-1);j>=1;j--){
        cout<<j;
    }
    cout<<"\n";
   }









    return 0;
}