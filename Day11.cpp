// Day-11   Vectors
#include <iostream>
#include <vector>
using namespace std;

int main() {
    /*

    // (1) Vector initialization
    vector<int> v1;
    vector<int> v2(5);               // Vector of size 5 with default-initialized elements
    vector<int> v3({1, 2, 3, 4, 5}); // Vector initialized with a list
    vector<int> v4(5, 1);            // Vector of size 5 with all elements initialized to 1
    vector<int> v5(v1);              // Copy constructor (copy of v1)



    // Operations
    vector<int> v(5);               

    // (2) Capacity 

    // (a) size()
    cout<<"Size: "<<v.size()<<"\n"; 

    // (b) resize(n)
    v.resize(6);

    // (c) capacity
    cout<<"Capacity: "<<v.capacity()<<"\n";  
  
    // (d) max_size()
    cout<<v.max_size();

    


    // (3) Modifiers
    // (a) pusha_back(value)
    v.push_back(1);                 //{1}
    v.push_back(2);                 //{1,2}
    v.push_back(3);                 //{1,2,3}
    v.push_back(4);                 //{1,2,3,4}

    // (b) insert(position,value)
    v.insert(v.begin()+1,5);        //{1,5,2,3,4}

    // (c) pop_back()
    v.pop_back();                   //{1,5,2,3}

    // (d) erase(postion)
    v.erase(v.begin()+1);           //{1,2,3} 

    // (e) clear()
    v.clear();                      //{}


    // (4) Loop Operations  
    int n;
    cout<<"Enter the size of vector : ";
    cin>>n;
    vector<int>v(n);

    // (a) For Loop
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<"\n";
    //or
    // for(int i=0;i<n;i++){
    //     int ele;
    //     cin>>ele;
    //     v.push_back(ele);
    // }
    // for(int i=0;i<n;i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<"\n";


    // (b) For Each Loop 
    for(int &i:v){
        cin>>i;
    }
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<"\n";
        
    // (c) While Loop 
    int in=0;
    while(in<n){
        cin>>v[in];
        in++;
    }
    in = 0;
    while(in<n){
        cout<<v[in]<<" ";
        in++;
    }
    cout<<"\n";


    //Q-1
    int n;
    cout<<"Enter the size of vector : ";
    cin>>n;

    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    int x;
    cout<<"\nEnter the element for last and first occurance : ";
    cin>>x;
    int f=-1;
    int l=-1;
    //first
    for(int i=0;i<n;i++){
        if(x==v[i]){
            f = i;
            break;
        }
    }
    //last

    // for(int i=0;i<n;i++){
    //     if(x==v[i]){
    //         l = i;
    //     }
    // }
    //or
    //efficent
    for(int i=v.size()-1;i>=0;i--){
        if(x==v[i]){
            l = i;
            break;
        }
    }

    if(f>-1 && l>-1){
        cout<<"The first occurance is : "<<f<<"\nThe last occurance is : "<<l<<"\n";
    }
    else{
        cout<<"element is not present";
    }

    
    // Q-2
    int n;
    cout<<"Enter the size of vector : ";
    cin>>n;

    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    int x;
    cout<<"\nEnter the element for occurance count : ";
    cin>>x;
    int count=0;
    
    for(int i=0;i<n;i++){
        if(x==v[i]){
            count++;
        }
    }
    cout<<"The number of occurance is : "<<count;


    //Q-3
    int n;
    cout<<"Enter the size of vector : ";
    cin>>n;

    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    int x;
    cout<<"\nEnter the element : ";
    cin>>x;
    int count=0;
    
    for(int i=0;i<n;i++){
        if(v[i]>x){
            count++;
        }
    }
    cout<<"The number of element greater than "<<x<<" is : "<<count;


    // Q-4
    int n;
    cout<<"Enter the size of vector : ";
    cin>>n;

    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    int check = 0;

    for(int i=0;i<v.size()-1;i++){
        if(v[i]<v[i+1]){
            check = 1;
        }
        else{
            check = 0;
            break ;
        }
    }
    
    if(check==1){
        cout<<"\nYes, The array is sorted";
    }
    else{
        cout<<"\nNo , array is not sorted";
    }

*/
    // Q-5 
    int n;
    cout<<"Enter the size of vector : ";
    cin>>n;

    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    int esum=0;
    int osum =0;

    for(int i=0;i<v.size();i++){
        if(i%2==0){
            esum += v[i];
        }
        else{
            osum += v[i];
        }
    }
    cout<<"\nEven - Odd = "<<esum<<" - "<<osum<<" = "<<esum-osum;




    


     



    return 0;
}
