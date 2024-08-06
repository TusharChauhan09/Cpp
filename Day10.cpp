// Day-10 Array Creation , Type and Operations
#include<iostream>
using namespace std;
int main(){
/*
    // (1) Array
    int arr[5]={1,2,3,4,5};
    //or
    int arr2[]={1,2,3,4,5};


    // (4) Operations On Array
    int arr[]={1,2,3,4,5};
    
    // OUTPUT
    // (a) Size Operator and Length
    int size = sizeof(arr);
    int length = sizeof(arr)/sizeof(arr[0]);
    cout<<"Size of array : "<<size<<"\n";
    cout<<"Length of array : "<<length<<"\n";
    
    // (b) Printing/calling array using For Loop
    for(int i=0;i<length;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";

    // (c) For Each Loopb Printing
    for(int i: arr){
        cout<<i<<" ";
    }
    cout<<"\n";

    // (d) While Printing
    int i=0;
    while(i<length){
        cout<<arr[i]<<" ";
        i++;
    }
    cout<<"\n";


    // INPUT
    int n;
    cout<<"Enter the length : ";
    cin>>n;
    int a[n];

    // (e) Iput using FoR Loop
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";

    // (f) Input by For Each Loop
    for(int &i:a){
        cin>>i;
    }
    for(int i:a){
        cout<<i<<" ";
    }
    cout<<"\n";

    // (g) Input using while loop
    int in=0;
    while(in<n){
        cin>>a[in];
        in++;
    }
    in = 0;
    while(in<n){
        cout<<a[in]<<" ";
        in++;
    }
    cout<<"\n";


    // Q-1 
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<"\n";
    int sum=0;

    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    cout<<"The sum of the given array is : "<<sum;


    // Q-2 
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";

    int max = arr[0];
    int min = arr[0];
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max = arr[i];
        }
        if(min>arr[i]){
            min = arr[i];
        }
    }
    cout<<"The max from the array is : "<<max<<"\n";
    cout<<"The min from the array is : "<<min<<"\n";

*/

    // Q-3
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";

    int x;
    cout<<"Enter the element for finding index : ";
    cin>>x;
    int flag = -1;

    for(int i=0;i<n;i++){
        if(arr[i]==x){
            flag = i;
        }
    }
    
    if(flag>-1){
        cout<<"The index is : "<<flag;
    }
    else{
        cout<<"No, element found";
    }


    return 0;
}
