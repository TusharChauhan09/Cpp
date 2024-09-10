// Day-32              Strings-2
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;
int main(){

/*
    // Q-1
    string str;
    cout<<"Enter the string : ";
    getline(cin,str);

    vector<int>freq(26,0);
    for(auto ch : str){
        int index = ch - 'a';
        freq[index]++;
    }

    int i=0;
    for(int j=0;j<26;j++){
        while(freq[j]--){
            str[i++] = j + 'a';
        }
    }

    cout<<str;



    // Q-2
    string str1,str2;
    cout<<"Enter the 1st string : ";
    cin>>str1;
    cout<<"Enter the 2st string : ";
    cin>>str2;

    int flag = 0;

    if(str1.length()!=str2.length()){
        flag = 0;
    }

    else{
        vector<int>freq1(26,0);
        vector<int>freq2(26,0);

        for(auto ch: str1){
            freq1[ch-'a']++;
        }
        for(auto ch: str2){
            freq2[ch-'a']++;
        }

        for(int i=0;i<26;i++){
            if(freq1[i]==freq2[i]){
                flag = 1;
            }
            else{
                flag = 0;
                break;
            }
        }
    }
    if (flag>0) cout<<"The string is an Anagaram";
    else cout<<"The string is Not an Anagaram";


    // OR

    string str1,str2;
    cout<<"Enter the 1st string : ";
    cin>>str1;
    cout<<"Enter the 2st string : ";
    cin>>str2;

    int flag = 0;

    if(str1.length()!=str2.length()){
        flag = 0;
    }

    else{
        vector<int>freq(26,0);

        for(auto ch: str1){
            freq[ch-'a']++;
        }
        for(auto ch: str2){
            freq[ch-'a']--;
        }

        for(int i=0;i<26;i++){
            if(freq[i]!=0){
                flag = 0;
                break;
            }
            else{
                flag = 1;
            }
        }
    }
    if (flag>0) cout<<"The string is an Anagaram";
    else cout<<"The string is Not an Anagaram";

    

    // Q-3
    string str1,str2;
    cout<<"Enter the 1st string : ";
    cin>>str1;
    cout<<"Enter the 2st string : ";
    cin>>str2;

    int flag = 0;

    if(str1.length()!=str2.length()){
        flag = 0;
    }

    else{
        vector<int>infreq1(26,-1);
        vector<int>infreq2(26,-1);

        for(int i=0;i<str1.length();i++){
            if(infreq1[str1[i]-'a'] != infreq2[str2[i]-'a']){                // index are not equal (initally -1)
                flag = 0;
                break;
            }
            else{
                infreq1[str1[i]-'a'] = infreq2[str2[i]-'a'] = i;
                flag = 1;
            }
            
        }
    }
    if (flag>0) cout<<"The string is isomorphic";
    else cout<<"The string is Not isomorphic";



    // Q-4
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    vector<string>arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<"\n";

    sort(arr.begin(),arr.end());

    string common;

    string first = arr[0] , last = arr[arr.size()-1] ;
    for(int i=0;i<arr[0].size();i++){
        if(first[i] == last[i]){
            common += first[i];
        }
        else{
            break;
        }
    }

    cout<<"The common string is : "<<common;

    // Or

    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    vector<string>arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<"\n";

    string fix = arr[0];
    int ans_length  = fix.size();

    for(int i=1;i<arr.size();i++){
        int j =0;
        while(j<fix.size() && j<arr[i].size() && fix[j] == arr[i][j]){
            j++;
        }
        ans_length = min(ans_length,j);
    }

    string ans = fix.substr(0,ans_length);


    cout<<"The common is : "<<ans;

    // OR

    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    vector<string>arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<"\n";

    string min = *min_element(arr.begin(),arr.end());
    string max = *max_element(arr.begin(),arr.end());
    
    string ans ;

    for(int i=0;i<min.size();i++){
        if(min[i] == max[i]){
            ans += min[i];
        }
        else{
            break;
        }
    }

    cout<<"The common elemenet is : "<<ans;
    

*/




  

    return 0;
}