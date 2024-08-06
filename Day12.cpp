// Day-12  Problems On Array-1
#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
/*
int main(){
   

    // Q-1 Target Sum Pairs
    int n;
    cout<<"Enter the length of array: ";
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
    cout<<"Enter the Target Sum for Pairs : ";
    cin>>x;
    int numpair=0;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==x){
                numpair++;
            }
        }
    }
    cout<<"\nThe number of Pairs that have Target sum of "<<x<<" is : "<<numpair;


    // Q-2 Target Sum Triplets 
    int n;
    cout<<"Enter the length of array: ";
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
    cout<<"Enter the Target Sum for Triplets : ";
    cin>>x;
    int numtrip=0;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==x){
                    numtrip++;
                }
            }
        }
    }
    cout<<"\nThe number of Pairs that have Target sum of "<<x<<" is : "<<numtrip;


    // Q-3 Array Manipulation pair
    int n;
    cout<<"Enter the length of array: ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){                   // {2,3,1,3,2,4,1}
        cout<<arr[i]<<" ";
    }
    cout<<"\n";

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                arr[i]=arr[j]=-1;
            }
        }
    }
    // for(int i=0;i<n;i++){                  // {-1,-1,-1,-1,-1,-1,4,-1}  
    //     cout<<arr[i]<<" ";
    // }
    // cout<<"\n";

    for(int i=0;i<n;i++){
        if(arr[i]!=-1){
            cout<<arr[i]<<" ";
        }
    }


    // Q-4 unique
    int n;
    cout<<"Enter the length of array: ";
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
    int maxindex;
    for(int i=0;i<n;i++){                // find 1st max
        if(max<arr[i]){
            max = arr[i];
            maxindex = i;
        }
    }
    arr[maxindex] =-1;                  // replace the 1at max with -1

    int sec_max = arr[0];
    for(int i=0;i<n;i++){                // find 2nd max
        if(sec_max<arr[i]){
            sec_max = arr[i];
        }
    }
    cout<<"The 2nd max in array is : "<<sec_max;

    return 0;
}


// OR
int largestElementIndex(int arr[],int n){
     int max = arr[0];
    int maxindex;
    for(int i=0;i<n;i++){                // find max index in array 
        if(max<arr[i]){
            max = arr[i];
            maxindex = i;
        }
    }
    return maxindex;
}
int main(){
    int n;
    cout<<"Enter the length of array: ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";

    int firstLargeIndex = largestElementIndex(arr,n);             // find 1st max index
    arr[firstLargeIndex] = -1;                                   // replace the 1at max with -1

    int secLargeIndex = largestElementIndex(arr,n);              // find 2nd max index
    cout<<"The 2nd max in array is : "<<arr[secLargeIndex];

    return 0;
}


// Q-5 not unique
int largestElement(int arr[],int n){
     int max = arr[0];
    int maxindex;
    for(int i=0;i<n;i++){                // find max in array 
        if(max<arr[i]){
            max = arr[i];
            maxindex = i;
        }
    }
    return max;
}
int main(){
    int n;
    cout<<"Enter the length of array: ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";

    int firstLarge = largestElement(arr,n);             // find 1st max 
    for(int i=0;i<n;i++){                               // changing the all first max value to -1
        if(arr[i]==firstLarge){
            arr[i]=-1;
        }
    }                                  

    int secLarge = largestElement(arr,n);              // find 2nd max 
    cout<<"The 2nd max in array is : "<<secLarge;

    return 0;
}


// Or 

int main(){
    int n;
    cout<<"Enter the length of array: ";
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
    for(int i=0;i<n;i++){                // find 1st max
        if(max<arr[i]){
            max = arr[i];
        }
    }
    int sec_max = arr[0];
    for(int i=0;i<n;i++){                // find 2nd max
        if(sec_max<arr[i] && arr[i]!=max){
            sec_max = arr[i];
        }
    }
    cout<<"sec max value is : "<<sec_max;

    
    return 0;
}

// Q-6
int main(){
    int n;
    cout<<"Enter the length of array: ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";                     // 1 2 3 4 5

    int k;
    cout<<"Enter teh value of k : ";
    cin>>k;

    k = k%n;                         // if k>n
    int arr2[n];
    int j=0;
    for(int i=n-k;i<n;i++){          // insert last k elements 
        arr2[j]=arr[i];              // 4 5 
        j++;
    }
    for(int i=0;i<n-k;i++){          // insert first n-k elements 
        arr2[j]=arr[i];              // 1 2 3 4 5
        j++;
    }
    for(int i=0;i<n;i++){
        cout<<arr2[i]<<" ";
    }


    return 0;
}

*/
// Q-7
#include <algorithm>    // it is required
int main(){
    int n;
    cout<<"Enter the length of vetor : ";
    cin>>n;

    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }                                       // {1,2,3,4,5}

    int k;                                  // k=2
    cout<<"Enter the value of k : ";
    cin>>k;

    k = k%n;

    reverse(v.begin(), v.end());              //{5,4,3,2,1}
    reverse(v.begin(),v.begin()+k);          //{4,5,3,2,1}
    reverse(v.begin()+k,v.end());            //{4,5,3,2,1}

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    } 

    return 0;
}
    

    



