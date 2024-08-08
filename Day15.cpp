// Day-15 Multidimentional Array
#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
/*

    // (1) 2D Array
    int arr2d[2][2]={{1,2},{3,4}};

    // 3D Array
    int arr3d[3][2][4] = {
        {
            {1, 2, 3, 4},
            {1, 2, 3, 4}
        },
        {
            {1, 2, 3, 4},
            {1, 2, 3, 4}
        },
        {
            {1, 2, 3, 4},
            {1, 2, 3, 4}
        }
    };

    // (2) 2D Array Input
    int r,c;
    cout <<"Enter the number of rows : ";
    cin>>r;
    cout<<"Enter th number of colummns: ";
    cin>>c;
    int arr[r][c];

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }


    // Q-1
    int r,c;
    cout <<"Enter the number of rows : ";
    cin>>r;
    cout<<"Enter th number of colummns: ";
    cin>>c;
    int arr1[r][c];
    int arr2[r][c];
    int arr3[r][c];
    int ans = 0;


    cout<<"1st matrix input: ";                     // matrix 1 input
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr1[i][j];
        }
    }

    cout<<"2nd matrix input: ";                      // matix 2 input
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr2[i][j];
        }
    }


    cout<<"1st matrix output: \n";                // matrix 1 output
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"2nd matrix output: \n";                // matrix 2 output
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<"\n";
    }

                        
    // Perform matrix multiplication
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            ans = 0;
            for (int k = 0; k < r; k++) {
                ans += arr1[i][k] * arr2[k][j];
                arr3[i][j]=ans;
            }
        }
    }

    // Print the result matrix
    cout << "Resultant matrix output: \n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }

*/

    int r,c;
    cout <<"Enter the number of rows : ";
    cin>>r;
    cout<<"Enter th number of colummns: ";
    cin>>c;

    int a[r][c];
    cout<<"Enter the Matrix element : \n";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
    cout<<"\nOrigional matrix\n";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }

    int at[c][r];
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            at[i][j]=a[j][i];
        }
    }

    cout<<"\nResult matrix: \n";
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            cout<<at[j][i]<<" ";
        }
        cout<<"\n";
    }




    return 0;
}
