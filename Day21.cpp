// Day-21    Pointers-2
#include<iostream>
using namespace std;
/*

// (1) Call By Reference Using Pointers
void swap(int *x,int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main(){
    int a,b;
    cout<<"Enter the value of a : ";
    cin>>a;
    cout<<"Enter the value of b : ";
    cin>>b;

    cout<<"Before\n";
    cout<<"a : "<<a<<"\nb : "<<b;

    swap(&a,&b);

    cout<<"\nAfter\n";
    cout<<"a : "<<a<<"\nb : "<<b;

    return 0;
}


// (2) Pointer Airthmetic
int main(){
// (a) Increment    (b) Decrement
    int a= 5;
    int *x = &a;
    cout<<"x-1: "<<x-1<<"\nx: "<<x<<"\nx+1: "<<x+1;


    int arr[3]={1,2,3};
    int *ptr = &arr[0];           // or  int *ptr = arr;
    cout<<"\nptr: "<<ptr<<" *ptr: "<<*ptr;
    ptr++;
    cout<<"\nptr: "<<ptr<<" *ptr: "<<*ptr;
    ptr++;
    cout<<"\nptr: "<<ptr<<" *ptr: "<<*ptr;

    return 0;
}



// (3) Arrays as Pointers 
int main(){
    int arr[3]={1,2,3};
    int *ptr = &arr[0];

    cout<<"&arr[o] : "<<&arr[0];
    cout<<"\nptr : "<<ptr;
    cout<<"\narr : "<<arr;

    cout<<"\n*arr : "<<*arr;
    cout<<"\n*arr+1 : "<<*arr+1<<"\n";

    for(int i=0;i<3;i++){
        cout<<*arr+i<<" ";
    }


    return 0;
}


// (3) Array as pointer in pass by reference
void process(int *arr, int n) {
    *(arr + 1) = 4; 
    for (int i = 0; i < n; i++) {
        cout << *(arr + i) << " "; 
    }
}
int main() {
    int arr[3] = {1, 2, 3};
    process(arr, 3);

    return 0;
}
*/

// (4) Point Whole Array
int main() {
    int arr[3] = {1, 2, 3};
    int (*ptr)[3] = &arr;
    cout<<"ptr: "<<ptr<<"\n*ptr: "<<*ptr<<"\n";

    for(int i=0;i<3;i++){
        cout<<(*ptr)[i]<<" ";
    }

    return 0;
}